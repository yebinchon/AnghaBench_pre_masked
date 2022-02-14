
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xps_document ;
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
 int FUNC_10 (int *,int *,int *,int ,float,float,int) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_1, xps_document *VAR_2, fz_path *VAR_3,
 float VAR_4, float VAR_5, float VAR_6,
 int VAR_7, int VAR_8,
 float VAR_9, float VAR_10)
{
 fz_matrix VAR_11, VAR_12;
 fz_matrix VAR_13;
 fz_point VAR_14;
 float VAR_15, VAR_16;
 float VAR_17, VAR_18, VAR_19, VAR_20;
 float VAR_21, VAR_22;
 float VAR_23, VAR_24, VAR_25, VAR_26;
 float VAR_27, VAR_28, VAR_29;
 float VAR_30;
 float VAR_31, VAR_32;

 VAR_14 = FUNC_2(VAR_1, VAR_3);
 VAR_17 = VAR_14.x;
 VAR_18 = VAR_14.y;
 VAR_19 = VAR_9;
 VAR_20 = VAR_10;
 VAR_15 = VAR_4;
 VAR_16 = VAR_5;

 if (VAR_8 != VAR_7)
  VAR_30 = 1;
 else
  VAR_30 = -1;

 VAR_11 = FUNC_6(VAR_6);
 VAR_12 = FUNC_6(-VAR_6);





 VAR_15 = FUNC_1(VAR_15);
 VAR_16 = FUNC_1(VAR_16);
 if (VAR_15 < 0.001f || VAR_16 < 0.001f || (VAR_17 == VAR_19 && VAR_18 == VAR_20))
 {
  FUNC_3(VAR_1, VAR_3, VAR_19, VAR_20);
  return;
 }


 VAR_14.x = (VAR_17 - VAR_19) / 2;
 VAR_14.y = (VAR_18 - VAR_20) / 2;
 VAR_14 = FUNC_7(VAR_14, VAR_12);
 VAR_21 = VAR_14.x;
 VAR_22 = VAR_14.y;


 VAR_27 = (VAR_21 * VAR_21) / (VAR_15 * VAR_15) + (VAR_22 * VAR_22) / (VAR_16 * VAR_16);
 if (VAR_27 > 1)
 {
  VAR_15 = VAR_15 * FUNC_9(VAR_27);
  VAR_16 = VAR_16 * FUNC_9(VAR_27);
 }


 VAR_27 = (VAR_15 * VAR_15 * VAR_16 * VAR_16) - (VAR_15 * VAR_15 * VAR_22 * VAR_22) - (VAR_16 * VAR_16 * VAR_21 * VAR_21);
 VAR_28 = (VAR_15 * VAR_15 * VAR_22 * VAR_22) + (VAR_16 * VAR_16 * VAR_21 * VAR_21);
 VAR_29 = VAR_27 / VAR_28;

 if (VAR_29 < 0) VAR_29 = 0;
 VAR_29 = FUNC_9(VAR_29);

 VAR_23 = VAR_30 * VAR_29 * (VAR_15 * VAR_22) / VAR_16;
 VAR_24 = VAR_30 * VAR_29 * -(VAR_16 * VAR_21) / VAR_15;


 VAR_14.x = VAR_23;
 VAR_14.y = VAR_24;
 VAR_14 = FUNC_7(VAR_14, VAR_11);
 VAR_25 = VAR_14.x + (VAR_17 + VAR_19) / 2;
 VAR_26 = VAR_14.y + (VAR_18 + VAR_20) / 2;


 {
  fz_point VAR_33, VAR_34, VAR_35, VAR_36;
  VAR_33 = 1;
  VAR_33 = 0;
  VAR_34 = (VAR_21 - VAR_23) / VAR_15;
  VAR_34 = (VAR_22 - VAR_24) / VAR_16;
  VAR_35 = (VAR_21 - VAR_23) / VAR_15;
  VAR_35 = (VAR_22 - VAR_24) / VAR_16;
  VAR_36 = (-VAR_21 - VAR_23) / VAR_15;
  VAR_36 = (-VAR_22 - VAR_24) / VAR_16;
  VAR_31 = FUNC_0(VAR_33, VAR_34);
  VAR_32 = FUNC_0(VAR_35, VAR_36);
  if (VAR_32 < 0 && !VAR_8)
   VAR_32 += ((VAR_0 / 180) * 360);
  if (VAR_32 > 0 && VAR_8)
   VAR_32 -= ((VAR_0 / 180) * 360);
 }

 VAR_13 = FUNC_5(FUNC_4(FUNC_8(VAR_25, VAR_26), VAR_6), VAR_15, VAR_16);
 FUNC_10(VAR_1, VAR_2, VAR_3, VAR_13, VAR_31, VAR_31 + VAR_32, VAR_8);

 FUNC_3(VAR_1, VAR_3, VAR_9, VAR_10);
}
