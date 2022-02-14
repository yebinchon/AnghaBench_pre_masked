
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float flatness; float linewidth; } ;
typedef TYPE_1__ sctx ;
typedef int fz_linecap ;
typedef int fz_context ;






 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int *,TYPE_1__*,float,float,float,float,int) ;
 float FUNC_4 (float) ;
 float FUNC_5 (float) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_2, sctx *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, fz_linecap VAR_8, int VAR_9)
{
 float VAR_10 = VAR_3->flatness;
 float VAR_11 = VAR_3->linewidth;

 float VAR_12 = VAR_6 - VAR_4;
 float VAR_13 = VAR_7 - VAR_5;

 float VAR_14 = VAR_11 / FUNC_5(VAR_12 * VAR_12 + VAR_13 * VAR_13);
 float VAR_15 = VAR_13 * VAR_14;
 float VAR_16 = -VAR_12 * VAR_14;

 switch (VAR_8)
 {
 case 131:
  FUNC_3(VAR_2, VAR_3, VAR_6 - VAR_15, VAR_7 - VAR_16, VAR_6 + VAR_15, VAR_7 + VAR_16, VAR_9);
  break;

 case 130:
 {
  int VAR_17;
  int VAR_18 = FUNC_1(VAR_0 / (2.0f * VAR_1 * FUNC_5(VAR_10 / VAR_11)));
  float VAR_19 = VAR_6 - VAR_15;
  float VAR_20 = VAR_7 - VAR_16;
  for (VAR_17 = 1; VAR_17 < VAR_18; VAR_17++)
  {
   float VAR_21 = VAR_0 * VAR_17 / VAR_18;
   float VAR_22 = FUNC_2(VAR_21);
   float VAR_23 = FUNC_4(VAR_21);
   float VAR_24 = VAR_6 - VAR_15 * VAR_22 - VAR_16 * VAR_23;
   float VAR_25 = VAR_7 - VAR_16 * VAR_22 + VAR_15 * VAR_23;
   FUNC_3(VAR_2, VAR_3, VAR_19, VAR_20, VAR_24, VAR_25, VAR_9);
   VAR_19 = VAR_24;
   VAR_20 = VAR_25;
  }
  FUNC_3(VAR_2, VAR_3, VAR_19, VAR_20, VAR_6 + VAR_15, VAR_7 + VAR_16, VAR_9);
  break;
 }

 case 129:
  FUNC_3(VAR_2, VAR_3, VAR_6 - VAR_15, VAR_7 - VAR_16,
   VAR_6 - VAR_15 - VAR_16, VAR_7 - VAR_16 + VAR_15, VAR_9);
  FUNC_3(VAR_2, VAR_3, VAR_6 - VAR_15 - VAR_16, VAR_7 - VAR_16 + VAR_15,
   VAR_6 + VAR_15 - VAR_16, VAR_7 + VAR_16 + VAR_15, VAR_9);
  FUNC_3(VAR_2, VAR_3, VAR_6 + VAR_15 - VAR_16, VAR_7 + VAR_16 + VAR_15,
   VAR_6 + VAR_15, VAR_7 + VAR_16, VAR_9);
  break;

 case 128:
 {
  float VAR_26 = -VAR_16;
  float VAR_27 = VAR_15;
  FUNC_3(VAR_2, VAR_3, VAR_6 - VAR_15, VAR_7 - VAR_16, VAR_6 + VAR_26, VAR_7 + VAR_27, VAR_9);
  FUNC_3(VAR_2, VAR_3, VAR_6 + VAR_26, VAR_7 + VAR_27, VAR_6 + VAR_15, VAR_7 + VAR_16, VAR_9);
  break;
 }

 default:
  FUNC_0("Invalid line cap" == ((void*)0));
 }
}
