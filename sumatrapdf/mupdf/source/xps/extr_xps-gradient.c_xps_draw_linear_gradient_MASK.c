
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xps_document ;
struct stop {int dummy; } ;
typedef int fz_xml ;
struct TYPE_6__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_7__ {float x; float y; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 TYPE_1__ FUNC_5 (TYPE_1__,int ) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int ,struct stop*,int,int,float,float,float,float) ;
 int FUNC_8 (int *,int *,char*,float*,float*) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_2, xps_document *VAR_3, fz_matrix VAR_4, fz_rect VAR_5,
 struct stop *VAR_6, int VAR_7,
 fz_xml *VAR_8, int VAR_9)
{
 float VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 float VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 fz_point VAR_22, VAR_23;
 fz_matrix VAR_24;

 char *VAR_25 = FUNC_6(VAR_8, "StartPoint");
 char *VAR_26 = FUNC_6(VAR_8, "EndPoint");

 VAR_10 = VAR_11 = 0;
 VAR_12 = VAR_13 = 1;

 if (VAR_25)
  FUNC_8(VAR_2, VAR_3, VAR_25, &VAR_10, &VAR_11);
 if (VAR_26)
  FUNC_8(VAR_2, VAR_3, VAR_26, &VAR_12, &VAR_13);

 VAR_22 = VAR_10; VAR_22 = VAR_11; VAR_23 = VAR_12; VAR_23 = VAR_13;
 VAR_24 = FUNC_2(VAR_4);
 VAR_5 = FUNC_5(VAR_5, VAR_24);
 VAR_19 = VAR_23 - VAR_22; VAR_20 = VAR_23 - VAR_22;
 VAR_21 = ((VAR_5.x0 - VAR_22) * VAR_19 + (VAR_5.y0 - VAR_22) * VAR_20) / (VAR_19 * VAR_19 + VAR_20 * VAR_20);
 VAR_15 = FUNC_1(VAR_21); VAR_16 = FUNC_0(VAR_21);
 VAR_21 = ((VAR_5.x1 - VAR_22) * VAR_19 + (VAR_5.y0 - VAR_22) * VAR_20) / (VAR_19 * VAR_19 + VAR_20 * VAR_20);
 VAR_15 = FUNC_4(VAR_15, FUNC_1(VAR_21)); VAR_16 = FUNC_3(VAR_16, FUNC_0(VAR_21));
 VAR_21 = ((VAR_5.x0 - VAR_22) * VAR_19 + (VAR_5.y1 - VAR_22) * VAR_20) / (VAR_19 * VAR_19 + VAR_20 * VAR_20);
 VAR_15 = FUNC_4(VAR_15, FUNC_1(VAR_21)); VAR_16 = FUNC_3(VAR_16, FUNC_0(VAR_21));
 VAR_21 = ((VAR_5.x1 - VAR_22) * VAR_19 + (VAR_5.y1 - VAR_22) * VAR_20) / (VAR_19 * VAR_19 + VAR_20 * VAR_20);
 VAR_15 = FUNC_4(VAR_15, FUNC_1(VAR_21)); VAR_16 = FUNC_3(VAR_16, FUNC_0(VAR_21));
 VAR_17 = VAR_12 - VAR_10; VAR_18 = VAR_13 - VAR_11;

 if (VAR_9 == VAR_1)
 {
  for (VAR_14 = VAR_15; VAR_14 < VAR_16; VAR_14++)
   FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, 0, VAR_10 + VAR_14 * VAR_17, VAR_11 + VAR_14 * VAR_18, VAR_12 + VAR_14 * VAR_17, VAR_13 + VAR_14 * VAR_18);
 }
 else if (VAR_9 == VAR_0)
 {
  if ((VAR_15 % 2) != 0)
   VAR_15--;
  for (VAR_14 = VAR_15; VAR_14 < VAR_16; VAR_14 += 2)
  {
   FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, 0, VAR_10 + VAR_14 * VAR_17, VAR_11 + VAR_14 * VAR_18, VAR_12 + VAR_14 * VAR_17, VAR_13 + VAR_14 * VAR_18);
   FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, 0, VAR_10 + (VAR_14 + 2) * VAR_17, VAR_11 + (VAR_14 + 2) * VAR_18, VAR_12 + VAR_14 * VAR_17, VAR_13 + VAR_14 * VAR_18);
  }
 }
 else
 {
  FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, 1, VAR_10, VAR_11, VAR_12, VAR_13);
 }
}
