
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float advance; scalar_t__ data; } ;


 int FUNC_0 (float,float,char,float) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(float VAR_1, float VAR_2, char *VAR_3, float VAR_4)
{
   int VAR_5;
   for (VAR_5=0; VAR_3[VAR_5]; ++VAR_5) {
      if (VAR_0[VAR_3[VAR_5]].data)
         FUNC_0(VAR_1,VAR_2,VAR_3[VAR_5],VAR_4);
      VAR_1 += VAR_0[VAR_3[VAR_5]].advance * VAR_4;
   }
}
