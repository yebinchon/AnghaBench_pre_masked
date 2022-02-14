
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_rect ;
struct TYPE_5__ {float member_0; float member_1; float x; float y; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (float,float) ;
 int FUNC_2 (int *,int *,char*,float,float,...) ;
 int FUNC_3 (int ,TYPE_1__) ;
 TYPE_1__ FUNC_4 (float,float) ;
 float FUNC_5 (int,float) ;
 int FUNC_6 (int *,float,float,float) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int,int) ;
 int FUNC_9 (int *,int *,int *,float,float,float,float,float) ;
 TYPE_1__ FUNC_10 (float,int ,float) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_11, fz_buffer *VAR_12, fz_rect *VAR_13,
  float VAR_14, float VAR_15, float VAR_16, float VAR_17, float VAR_18,
  int VAR_19, int VAR_20, pdf_obj *VAR_21)
{
 if (VAR_21 == FUNC_0(VAR_10))
 {
  float VAR_22 = FUNC_5(2.5f, VAR_18 * 2.5f);
  FUNC_2(VAR_11, VAR_12, "%g %g %g %g re\n", VAR_14-VAR_22, VAR_15-VAR_22, VAR_22*2, VAR_22*2);
  FUNC_8(VAR_11, VAR_12, VAR_19, VAR_20);
  FUNC_6(VAR_13, VAR_14, VAR_15, VAR_22);
 }
 else if (VAR_21 == FUNC_0(VAR_2))
 {
  float VAR_23 = FUNC_5(2.5f, VAR_18 * 2.5f);
  float VAR_24 = VAR_23 * VAR_1;
  FUNC_2(VAR_11, VAR_12, "%g %g m\n", VAR_14, VAR_15+VAR_23);
  FUNC_2(VAR_11, VAR_12, "%g %g %g %g %g %g c\n", VAR_14+VAR_24, VAR_15+VAR_23, VAR_14+VAR_23, VAR_15+VAR_24, VAR_14+VAR_23, VAR_15);
  FUNC_2(VAR_11, VAR_12, "%g %g %g %g %g %g c\n", VAR_14+VAR_23, VAR_15-VAR_24, VAR_14+VAR_24, VAR_15-VAR_23, VAR_14, VAR_15-VAR_23);
  FUNC_2(VAR_11, VAR_12, "%g %g %g %g %g %g c\n", VAR_14-VAR_24, VAR_15-VAR_23, VAR_14-VAR_23, VAR_15-VAR_24, VAR_14-VAR_23, VAR_15);
  FUNC_2(VAR_11, VAR_12, "%g %g %g %g %g %g c\n", VAR_14-VAR_23, VAR_15+VAR_24, VAR_14-VAR_24, VAR_15+VAR_23, VAR_14, VAR_15+VAR_23);
  FUNC_8(VAR_11, VAR_12, VAR_19, VAR_20);
  FUNC_6(VAR_13, VAR_14, VAR_15, VAR_23);
 }
 else if (VAR_21 == FUNC_0(VAR_4))
 {
  float VAR_25 = FUNC_5(2.5f, VAR_18 * 2.5f);
  FUNC_2(VAR_11, VAR_12, "%g %g m\n", VAR_14, VAR_15+VAR_25);
  FUNC_2(VAR_11, VAR_12, "%g %g l\n", VAR_14+VAR_25, VAR_15);
  FUNC_2(VAR_11, VAR_12, "%g %g l\n", VAR_14, VAR_15-VAR_25);
  FUNC_2(VAR_11, VAR_12, "%g %g l\n", VAR_14-VAR_25, VAR_15);
  FUNC_8(VAR_11, VAR_12, VAR_19, VAR_20);
  FUNC_6(VAR_13, VAR_14, VAR_15, VAR_25);
 }
 else if (VAR_21 == FUNC_0(VAR_6))
 {
  FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
  FUNC_7(VAR_11, VAR_12, VAR_19);
 }
 else if (VAR_21 == FUNC_0(VAR_3))
 {
  FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
  FUNC_8(VAR_11, VAR_12, VAR_19, VAR_20);
 }

 else if (VAR_21 == FUNC_0(VAR_0))
 {
  float VAR_26 = FUNC_5(3, VAR_18 * 3);
  fz_point VAR_27 = { VAR_14-VAR_17*VAR_26, VAR_15+VAR_16*VAR_26 };
  fz_point VAR_28 = { VAR_14+VAR_17*VAR_26, VAR_15-VAR_16*VAR_26 };
  FUNC_2(VAR_11, VAR_12, "%g %g m\n", VAR_27.x, VAR_27.y);
  FUNC_2(VAR_11, VAR_12, "%g %g l\n", VAR_28.x, VAR_28.y);
  FUNC_7(VAR_11, VAR_12, VAR_19);
  *VAR_13 = FUNC_3(*VAR_13, VAR_27);
  *VAR_13 = FUNC_3(*VAR_13, VAR_28);
 }
 else if (VAR_21 == FUNC_0(VAR_8))
 {
  FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, -VAR_16, -VAR_17, VAR_18);
  FUNC_7(VAR_11, VAR_12, VAR_19);
 }
 else if (VAR_21 == FUNC_0(VAR_7))
 {
  FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, -VAR_16, -VAR_17, VAR_18);
  FUNC_8(VAR_11, VAR_12, VAR_19, VAR_20);
 }

 else if (VAR_21 == FUNC_0(VAR_9))
 {
  float VAR_29 = FUNC_5(5, VAR_18 * 5);
  float VAR_30 = FUNC_1(VAR_17, VAR_16) - (30 * VAR_5 / 180);
  fz_point VAR_31, VAR_32, VAR_33;
  VAR_33 = FUNC_10(VAR_30, 0, VAR_29);
  VAR_31 = FUNC_4(VAR_14 + VAR_33.x, VAR_15 + VAR_33.y);
  VAR_33 = FUNC_10(VAR_30, 0, -VAR_29);
  VAR_32 = FUNC_4(VAR_14 + VAR_33.x, VAR_15 + VAR_33.y);
  FUNC_2(VAR_11, VAR_12, "%g %g m\n", VAR_31.x, VAR_31.y);
  FUNC_2(VAR_11, VAR_12, "%g %g l\n", VAR_32.x, VAR_32.y);
  FUNC_7(VAR_11, VAR_12, VAR_19);
  *VAR_13 = FUNC_3(*VAR_13, VAR_31);
  *VAR_13 = FUNC_3(*VAR_13, VAR_32);
 }
}
