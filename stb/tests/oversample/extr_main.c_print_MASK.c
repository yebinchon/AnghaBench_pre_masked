
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t1; int s1; int t0; int s0; int y1; int x1; int y0; int x0; } ;
typedef TYPE_1__ stbtt_aligned_quad ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ,int ,float*,float*,TYPE_1__*,int ) ;

void FUNC_6(float VAR_7, float VAR_8, int VAR_9, char *VAR_10)
{
   FUNC_3(VAR_3);
   FUNC_2(VAR_3, VAR_5);
   FUNC_1(VAR_2);
   while (*VAR_10) {
      stbtt_aligned_quad VAR_11;
      FUNC_5(VAR_4[VAR_9], VAR_1, VAR_0, *VAR_10++, &VAR_7, &VAR_8, &VAR_11, VAR_9 ? 0 : VAR_6);
      FUNC_0(VAR_11.x0,VAR_11.y0,VAR_11.x1,VAR_11.y1, VAR_11.s0,VAR_11.t0,VAR_11.s1,VAR_11.t1);
   }
   FUNC_4();
}
