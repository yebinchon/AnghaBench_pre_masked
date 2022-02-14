
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float miterlimit; float linewidth; int linejoin; } ;
typedef TYPE_1__ sctx ;
typedef int fz_linejoin ;
typedef int fz_context ;


 float VAR_0 ;




 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (float,float,float,float*,float*) ;
 int FUNC_2 (int *,TYPE_1__*,float,float,float,float,float,float,int) ;
 int FUNC_3 (int *,TYPE_1__*,float,float,float,float,int) ;
 float FUNC_4 (float) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, sctx *VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, int VAR_9)
{
 float VAR_10 = VAR_2->miterlimit;
 float VAR_11 = VAR_2->linewidth;
 fz_linejoin VAR_12 = VAR_2->linejoin;
 float VAR_13, VAR_14;
 float VAR_15, VAR_16;
 float VAR_17, VAR_18;
 float VAR_19, VAR_20;
 float VAR_21, VAR_22;
 float VAR_23;
 float VAR_24;
 float VAR_25;
 int VAR_26 = 0;

 VAR_13 = VAR_5 - VAR_3;
 VAR_14 = VAR_6 - VAR_4;

 VAR_15 = VAR_7 - VAR_5;
 VAR_16 = VAR_8 - VAR_6;

 VAR_25 = VAR_15 * VAR_14 - VAR_13 * VAR_16;

 if (VAR_25 < 0)
 {
  float VAR_27;
  VAR_27 = VAR_15; VAR_15 = -VAR_13; VAR_13 = -VAR_27;
  VAR_27 = VAR_16; VAR_16 = -VAR_14; VAR_14 = -VAR_27;
  VAR_25 = -VAR_25;
  VAR_26 = !VAR_26;
 }

 if (FUNC_1(VAR_13, VAR_14, VAR_11, &VAR_17, &VAR_18))
  VAR_12 = 131;

 if (FUNC_1(VAR_15, VAR_16, VAR_11, &VAR_19, &VAR_20))
  VAR_12 = 131;

 VAR_21 = (VAR_17 + VAR_19) * 0.5f;
 VAR_22 = (VAR_18 + VAR_20) * 0.5f;
 VAR_23 = VAR_21 * VAR_21 + VAR_22 * VAR_22;

 if (VAR_25 * VAR_25 < VAR_0 && VAR_13 * VAR_15 + VAR_14 * VAR_16 >= 0)
  VAR_12 = 131;



 if (VAR_12 == 129)
 {
  if (VAR_25 == 0)
   VAR_12 = 131;
  else if (VAR_23 * VAR_10 * VAR_10 >= VAR_11 * VAR_11)
   VAR_12 = 130;
 }
 else if (VAR_12 == 130)
  if (VAR_23 * VAR_10 * VAR_10 < VAR_11 * VAR_11)
   VAR_12 = 131;

 if (VAR_9)
 {
  FUNC_3(VAR_1, VAR_2, VAR_5 + VAR_19, VAR_6 + VAR_20, VAR_5 + VAR_17, VAR_6 + VAR_18, !VAR_26);
 }
 else if (VAR_26)
 {
  FUNC_3(VAR_1, VAR_2, VAR_5 + VAR_19, VAR_6 + VAR_20, VAR_5, VAR_6, 0);
  FUNC_3(VAR_1, VAR_2, VAR_5, VAR_6, VAR_5 + VAR_17, VAR_6 + VAR_18, 0);
 }
 else
 {
  FUNC_3(VAR_1, VAR_2, VAR_5, VAR_6, VAR_5 + VAR_17, VAR_6 + VAR_18, 1);
  FUNC_3(VAR_1, VAR_2, VAR_5 + VAR_19, VAR_6 + VAR_20, VAR_5, VAR_6, 1);
 }

 switch (VAR_12)
 {
 case 129:
 {
  float VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;

  VAR_24 = VAR_11 * VAR_11 / VAR_23;
  VAR_21 *= VAR_24;
  VAR_22 *= VAR_24;
  VAR_28 = (VAR_24 - VAR_11 * VAR_10 / FUNC_4(VAR_23)) / (VAR_24 - 1);
  VAR_29 = VAR_5 - VAR_21 + VAR_28 * (VAR_21 - VAR_17);
  VAR_30 = VAR_6 - VAR_22 + VAR_28 * (VAR_22 - VAR_18);
  VAR_31 = VAR_5 - VAR_21 + VAR_28 * (VAR_21 - VAR_19);
  VAR_32 = VAR_6 - VAR_22 + VAR_28 * (VAR_22 - VAR_20);

  if (VAR_26)
  {
   FUNC_3(VAR_1, VAR_2, VAR_31, VAR_32, VAR_5 - VAR_19, VAR_6 - VAR_20, 1);
   FUNC_3(VAR_1, VAR_2, VAR_29, VAR_30, VAR_31, VAR_32, 1);
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_17, VAR_6 - VAR_18, VAR_29, VAR_30, 1);
  }
  else
  {
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_17, VAR_6 - VAR_18, VAR_29, VAR_30, 0);
   FUNC_3(VAR_1, VAR_2, VAR_29, VAR_30, VAR_31, VAR_32, 0);
   FUNC_3(VAR_1, VAR_2, VAR_31, VAR_32, VAR_5 - VAR_19, VAR_6 - VAR_20, 0);
  }
  break;
 }
 case 130:
  VAR_24 = VAR_11 * VAR_11 / VAR_23;
  VAR_21 *= VAR_24;
  VAR_22 *= VAR_24;

  if (VAR_26)
  {
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_21, VAR_6 - VAR_22, VAR_5 - VAR_19, VAR_6 - VAR_20, 1);
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_17, VAR_6 - VAR_18, VAR_5 - VAR_21, VAR_6 - VAR_22, 1);
  }
  else
  {
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_17, VAR_6 - VAR_18, VAR_5 - VAR_21, VAR_6 - VAR_22, 0);
   FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_21, VAR_6 - VAR_22, VAR_5 - VAR_19, VAR_6 - VAR_20, 0);
  }
  break;

 case 131:
  FUNC_3(VAR_1, VAR_2, VAR_5 - VAR_17, VAR_6 - VAR_18, VAR_5 - VAR_19, VAR_6 - VAR_20, VAR_26);
  break;

 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6, -VAR_17, -VAR_18, -VAR_19, -VAR_20, VAR_26);
  break;

 default:
  FUNC_0("Invalid line join" == ((void*)0));
 }
}
