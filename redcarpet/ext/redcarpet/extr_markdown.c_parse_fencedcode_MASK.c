
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* blockcode ) (struct buf*,struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {scalar_t__ size; char* data; int member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,char*,size_t) ;
 int FUNC_1 (struct buf*,char) ;
 size_t FUNC_2 (char*,size_t,struct buf*) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 struct buf* FUNC_4 (struct sd_markdown*,int ) ;
 int FUNC_5 (struct sd_markdown*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_7(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 struct buf *VAR_7 = 0;
 struct buf VAR_8 = { 0, 0, 0, 0 };

 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_8);
 if (VAR_5 == 0) return 0;

 VAR_7 = FUNC_4(VAR_2, VAR_0);

 while (VAR_5 < VAR_4) {
  size_t VAR_9;
  struct buf VAR_10 = { 0, 0, 0, 0 };

  VAR_9 = FUNC_2(VAR_3 + VAR_5, VAR_4 - VAR_5, &VAR_10);
  if (VAR_9 != 0 && VAR_10.size == 0) {
   VAR_5 += VAR_9;
   break;
  }

  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4 && VAR_3[VAR_6 - 1] != '\n'; VAR_6++);

  if (VAR_5 < VAR_6) {


   if (FUNC_3(VAR_3 + VAR_5, VAR_6 - VAR_5))
    FUNC_1(VAR_7, '\n');
   else FUNC_0(VAR_7, VAR_3 + VAR_5, VAR_6 - VAR_5);
  }
  VAR_5 = VAR_6;
 }

 if (VAR_7->size && VAR_7->data[VAR_7->size - 1] != '\n')
  FUNC_1(VAR_7, '\n');

 if (VAR_2->cb.blockcode)
  VAR_2->cb.blockcode(VAR_1, VAR_7, VAR_8.size ? &VAR_8 : ((void*)0), VAR_2->opaque);

 FUNC_5(VAR_2, VAR_0);
 return VAR_5;
}
