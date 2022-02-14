
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 float FUNC_0 (TYPE_1__,TYPE_1__) ;
 float FUNC_1 (float) ;
 TYPE_1__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,float,float) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,float,float) ;
 int FUNC_6 (float) ;
 TYPE_1__ FUNC_7 (TYPE_1__,int ) ;
 int FUNC_8 (float,float) ;
 float FUNC_9 (float) ;
 int FUNC_10 (int *,int *,int ,float,float,int) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_1, fz_path *VAR_2,
 float VAR_3, float VAR_4, float VAR_5,
 int VAR_6, int VAR_7,
 float VAR_8, float VAR_9)
{
 fz_matrix VAR_10, VAR_11;
 fz_matrix VAR_12;
 fz_point VAR_13;
 float VAR_14, VAR_15;
 float VAR_16, VAR_17, VAR_18, VAR_19;
 float VAR_20, VAR_21;
 float VAR_22, VAR_23, VAR_24, VAR_25;
 float VAR_26, VAR_27, VAR_28;
 float VAR_29;
 float VAR_30, VAR_31;

 VAR_13 = FUNC_2(VAR_1, VAR_2);
 VAR_16 = VAR_13.x;
 VAR_17 = VAR_13.y;
 VAR_18 = VAR_8;
 VAR_19 = VAR_9;
 VAR_14 = VAR_3;
 VAR_15 = VAR_4;

 if (VAR_7 != VAR_6)
  VAR_29 = 1;
 else
  VAR_29 = -1;

 VAR_10 = FUNC_6(VAR_5);
 VAR_11 = FUNC_6(-VAR_5);





 VAR_14 = FUNC_1(VAR_14);
 VAR_15 = FUNC_1(VAR_15);
 if (VAR_14 < 0.001f || VAR_15 < 0.001f || (VAR_16 == VAR_18 && VAR_17 == VAR_19))
 {
  FUNC_3(VAR_1, VAR_2, VAR_18, VAR_19);
  return;
 }


 VAR_13.x = (VAR_16 - VAR_18) / 2;
 VAR_13.y = (VAR_17 - VAR_19) / 2;
 VAR_13 = FUNC_7(VAR_13, VAR_11);
 VAR_20 = VAR_13.x;
 VAR_21 = VAR_13.y;


 VAR_26 = (VAR_20 * VAR_20) / (VAR_14 * VAR_14) + (VAR_21 * VAR_21) / (VAR_15 * VAR_15);
 if (VAR_26 > 1)
 {
  VAR_14 = VAR_14 * FUNC_9(VAR_26);
  VAR_15 = VAR_15 * FUNC_9(VAR_26);
 }


 VAR_26 = (VAR_14 * VAR_14 * VAR_15 * VAR_15) - (VAR_14 * VAR_14 * VAR_21 * VAR_21) - (VAR_15 * VAR_15 * VAR_20 * VAR_20);
 VAR_27 = (VAR_14 * VAR_14 * VAR_21 * VAR_21) + (VAR_15 * VAR_15 * VAR_20 * VAR_20);
 VAR_28 = VAR_26 / VAR_27;

 if (VAR_28 < 0) VAR_28 = 0;
 VAR_28 = FUNC_9(VAR_28);

 VAR_22 = VAR_29 * VAR_28 * (VAR_14 * VAR_21) / VAR_15;
 VAR_23 = VAR_29 * VAR_28 * -(VAR_15 * VAR_20) / VAR_14;


 VAR_13.x = VAR_22;
 VAR_13.y = VAR_23;
 VAR_13 = FUNC_7(VAR_13, VAR_10);
 VAR_24 = VAR_13.x + (VAR_16 + VAR_18) / 2;
 VAR_25 = VAR_13.y + (VAR_17 + VAR_19) / 2;


 {
  fz_point VAR_32, VAR_33, VAR_34, VAR_35;
  VAR_32 = 1;
  VAR_32 = 0;
  VAR_33 = (VAR_20 - VAR_22) / VAR_14;
  VAR_33 = (VAR_21 - VAR_23) / VAR_15;
  VAR_34 = (VAR_20 - VAR_22) / VAR_14;
  VAR_34 = (VAR_21 - VAR_23) / VAR_15;
  VAR_35 = (-VAR_20 - VAR_22) / VAR_14;
  VAR_35 = (-VAR_21 - VAR_23) / VAR_15;
  VAR_30 = FUNC_0(VAR_32, VAR_33);
  VAR_31 = FUNC_0(VAR_34, VAR_35);
  if (VAR_31 < 0 && !VAR_7)
   VAR_31 += ((VAR_0 / 180) * 360);
  if (VAR_31 > 0 && VAR_7)
   VAR_31 -= ((VAR_0 / 180) * 360);
 }

 VAR_12 = FUNC_5(FUNC_4(FUNC_8(VAR_24, VAR_25), VAR_5), VAR_14, VAR_15);
 FUNC_10(VAR_1, VAR_2, VAR_12, VAR_30, VAR_30 + VAR_31, VAR_7);

 FUNC_3(VAR_1, VAR_2, VAR_8, VAR_9);
}
