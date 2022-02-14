
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xps_document ;
struct stop {int dummy; } ;
typedef int fz_xml ;
struct TYPE_5__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;
 float FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 float FUNC_4 (float,float) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,float) ;
 TYPE_1__ FUNC_7 (TYPE_1__,int ) ;
 char* FUNC_8 (int *,char*) ;
 float FUNC_9 (float,float) ;
 int FUNC_10 (int *,int *,int ,struct stop*,int,int,float,float,float,float,float,float) ;
 int FUNC_11 (int *,int *,char*,float*,float*) ;

__attribute__((used)) static void
FUNC_12(fz_context *VAR_3, xps_document *VAR_4, fz_matrix VAR_5, fz_rect VAR_6,
 struct stop *VAR_7, int VAR_8,
 fz_xml *VAR_9, int VAR_10)
{
 float VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15, VAR_16;
 float VAR_17 = 1;
 float VAR_18 = 1;
 float VAR_19;
 int VAR_20, VAR_21 = 1;
 fz_matrix VAR_22;

 char *VAR_23 = FUNC_8(VAR_9, "Center");
 char *VAR_24 = FUNC_8(VAR_9, "GradientOrigin");
 char *VAR_25 = FUNC_8(VAR_9, "RadiusX");
 char *VAR_26 = FUNC_8(VAR_9, "RadiusY");

 VAR_11 = VAR_12 = 0.0f;
 VAR_14 = VAR_15 = 1.0f;
 VAR_17 = 1.0f;
 VAR_18 = 1.0f;

 if (VAR_24)
  FUNC_11(VAR_3, VAR_4, VAR_24, &VAR_11, &VAR_12);
 if (VAR_23)
  FUNC_11(VAR_3, VAR_4, VAR_23, &VAR_14, &VAR_15);
 if (VAR_25)
  VAR_17 = FUNC_2(VAR_25);
 if (VAR_26)
  VAR_18 = FUNC_2(VAR_26);

 VAR_17 = FUNC_4(0.01f, VAR_17);
 VAR_18 = FUNC_4(0.01f, VAR_18);


 if (FUNC_1(VAR_17) > VAR_0)
 {
  VAR_5 = FUNC_6(VAR_5, 1, VAR_18/VAR_17);
 }

 if (VAR_18 != 0.0f)
 {
  VAR_19 = VAR_17 / VAR_18;
  VAR_12 = VAR_12 * VAR_19;
  VAR_15 = VAR_15 * VAR_19;
 }

 VAR_13 = 0;
 VAR_16 = VAR_17;

 VAR_22 = FUNC_3(VAR_5);
 VAR_6 = FUNC_7(VAR_6, VAR_22);
 VAR_21 = FUNC_5(VAR_21, FUNC_0(FUNC_9(VAR_6.x0 - VAR_11, VAR_6.y0 - VAR_12) / VAR_17));
 VAR_21 = FUNC_5(VAR_21, FUNC_0(FUNC_9(VAR_6.x1 - VAR_11, VAR_6.y0 - VAR_12) / VAR_17));
 VAR_21 = FUNC_5(VAR_21, FUNC_0(FUNC_9(VAR_6.x0 - VAR_11, VAR_6.y1 - VAR_12) / VAR_17));
 VAR_21 = FUNC_5(VAR_21, FUNC_0(FUNC_9(VAR_6.x1 - VAR_11, VAR_6.y1 - VAR_12) / VAR_17));

 if (VAR_10 == VAR_2)
 {
  for (VAR_20 = VAR_21 - 1; VAR_20 >= 0; VAR_20--)
   FUNC_10(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, 0, VAR_11, VAR_12, VAR_13 + VAR_20 * VAR_17, VAR_14, VAR_15, VAR_16 + VAR_20 * VAR_17);
 }
 else if (VAR_10 == VAR_1)
 {
  if ((VAR_21 % 2) != 0)
   VAR_21++;
  for (VAR_20 = VAR_21 - 2; VAR_20 >= 0; VAR_20 -= 2)
  {
   FUNC_10(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, 0, VAR_11, VAR_12, VAR_13 + VAR_20 * VAR_17, VAR_14, VAR_15, VAR_16 + VAR_20 * VAR_17);
   FUNC_10(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, 0, VAR_11, VAR_12, VAR_13 + (VAR_20 + 2) * VAR_17, VAR_14, VAR_15, VAR_16 + VAR_20 * VAR_17);
  }
 }
 else
 {
  FUNC_10(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, 1, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 }
}
