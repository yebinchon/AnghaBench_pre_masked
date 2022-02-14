
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* blockcode ) (struct buf*,struct buf*,int *,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int size; char* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,char*,size_t) ;
 int FUNC_1 (struct buf*,char) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (char*,size_t) ;
 struct buf* FUNC_4 (struct sd_markdown*,int ) ;
 int FUNC_5 (struct sd_markdown*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int *,int ) ;

__attribute__((used)) static size_t
FUNC_7(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 struct buf *VAR_8 = 0;

 VAR_8 = FUNC_4(VAR_2, VAR_0);

 VAR_5 = 0;
 while (VAR_5 < VAR_4) {
  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4 && VAR_3[VAR_6 - 1] != '\n'; VAR_6++) {};
  VAR_7 = FUNC_3(VAR_3 + VAR_5, VAR_6 - VAR_5);

  if (VAR_7)
   VAR_5 += VAR_7;
  else if (!FUNC_2(VAR_3 + VAR_5, VAR_6 - VAR_5))

   break;

  if (VAR_5 < VAR_6) {


   if (FUNC_2(VAR_3 + VAR_5, VAR_6 - VAR_5))
    FUNC_1(VAR_8, '\n');
   else FUNC_0(VAR_8, VAR_3 + VAR_5, VAR_6 - VAR_5);
  }
  VAR_5 = VAR_6;
 }

 while (VAR_8->size && VAR_8->data[VAR_8->size - 1] == '\n')
  VAR_8->size -= 1;

 FUNC_1(VAR_8, '\n');

 if (VAR_2->cb.blockcode)
  VAR_2->cb.blockcode(VAR_1, VAR_8, ((void*)0), VAR_2->opaque);

 FUNC_5(VAR_2, VAR_0);
 return VAR_5;
}
