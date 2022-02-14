
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* table ) (struct buf*,struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 size_t FUNC_1 (struct buf*,struct sd_markdown*,char*,size_t,size_t*,int**) ;
 int FUNC_2 (struct buf*,struct sd_markdown*,char*,size_t,size_t,int*,int ) ;
 struct buf* FUNC_3 (struct sd_markdown*,int ) ;
 int FUNC_4 (struct sd_markdown*,int ) ;
 int FUNC_5 (struct buf*,struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_6(
 struct buf *VAR_2,
 struct sd_markdown *VAR_3,
 uint8_t *VAR_4,
 size_t VAR_5)
{
 size_t VAR_6;

 struct buf *VAR_7 = 0;
 struct buf *VAR_8 = 0;

 size_t VAR_9;
 int *VAR_10 = ((void*)0);

 VAR_7 = FUNC_3(VAR_3, VAR_1);
 VAR_8 = FUNC_3(VAR_3, VAR_0);

 VAR_6 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, &VAR_9, &VAR_10);
 if (VAR_6 > 0) {

  while (VAR_6 < VAR_5) {
   size_t VAR_11;
   int VAR_12 = 0;

   VAR_11 = VAR_6;

   while (VAR_6 < VAR_5 && VAR_4[VAR_6] != '\n')
    if (VAR_4[VAR_6++] == '|')
     VAR_12++;

   if (VAR_12 == 0 || VAR_6 == VAR_5) {
    VAR_6 = VAR_11;
    break;
   }

   FUNC_2(
    VAR_8,
    VAR_3,
    VAR_4 + VAR_11,
    VAR_6 - VAR_11,
    VAR_9,
    VAR_10, 0
   );

   VAR_6++;
  }

  if (VAR_3->cb.table)
   VAR_3->cb.table(VAR_2, VAR_7, VAR_8, VAR_3->opaque);
 }

 FUNC_0(VAR_10);
 FUNC_4(VAR_3, VAR_1);
 FUNC_4(VAR_3, VAR_0);
 return VAR_6;
}
