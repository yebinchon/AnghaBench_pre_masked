
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* blockhtml ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {char* member_0; size_t size; int member_3; int member_2; int member_1; } ;


 char* FUNC_0 (char*,int) ;
 size_t FUNC_1 (char const*,struct sd_markdown*,char*,size_t,int) ;
 size_t FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct buf*,struct buf*,int ) ;
 int FUNC_5 (struct buf*,struct buf*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_7(struct buf *VAR_0, struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 size_t VAR_5, VAR_6 = 0, VAR_7;
 const char *VAR_8 = ((void*)0);
 struct buf VAR_9 = { VAR_2, 0, 0, 0 };


 if (VAR_3 < 2 || VAR_2[0] != '<')
  return 0;

 VAR_5 = 1;
 while (VAR_5 < VAR_3 && VAR_2[VAR_5] != '>' && VAR_2[VAR_5] != ' ')
  VAR_5++;

 if (VAR_5 < VAR_3)
  VAR_8 = FUNC_0((char *)VAR_2 + 1, (int)VAR_5 - 1);


 if (!VAR_8) {


  if (VAR_3 > 5 && VAR_2[1] == '!' && VAR_2[2] == '-' && VAR_2[3] == '-') {
   VAR_5 = 5;

   while (VAR_5 < VAR_3 && !(VAR_2[VAR_5 - 2] == '-' && VAR_2[VAR_5 - 1] == '-' && VAR_2[VAR_5] == '>'))
    VAR_5++;

   VAR_5++;

   if (VAR_5 < VAR_3)
    VAR_6 = FUNC_2(VAR_2 + VAR_5, VAR_3 - VAR_5);

   if (VAR_6) {
    VAR_9.size = VAR_5 + VAR_6;
    if (VAR_4 && VAR_1->cb.blockhtml)
     VAR_1->cb.blockhtml(VAR_0, &VAR_9, VAR_1->opaque);
    return VAR_9.size;
   }
  }


  if (VAR_3 > 4 && (VAR_2[1] == 'h' || VAR_2[1] == 'H') && (VAR_2[2] == 'r' || VAR_2[2] == 'R')) {
   VAR_5 = 3;
   while (VAR_5 < VAR_3 && VAR_2[VAR_5] != '>')
    VAR_5++;

   if (VAR_5 + 1 < VAR_3) {
    VAR_5++;
    VAR_6 = FUNC_2(VAR_2 + VAR_5, VAR_3 - VAR_5);
    if (VAR_6) {
     VAR_9.size = VAR_5 + VAR_6;
     if (VAR_4 && VAR_1->cb.blockhtml)
      VAR_1->cb.blockhtml(VAR_0, &VAR_9, VAR_1->opaque);
     return VAR_9.size;
    }
   }
  }


  return 0;
 }



 VAR_7 = FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, 1);



 if (!VAR_7 && FUNC_3(VAR_8, "ins") != 0 && FUNC_3(VAR_8, "del") != 0) {
  VAR_7 = FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, 0);
 }

 if (!VAR_7)
  return 0;


 VAR_9.size = VAR_7;
 if (VAR_4 && VAR_1->cb.blockhtml)
  VAR_1->cb.blockhtml(VAR_0, &VAR_9, VAR_1->opaque);

 return VAR_7;
}
