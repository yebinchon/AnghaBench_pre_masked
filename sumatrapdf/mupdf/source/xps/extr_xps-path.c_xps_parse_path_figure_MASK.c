
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_path ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,float,float) ;
 int FUNC_2 (int *,int *,float,float) ;
 char* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,int *,int *,int *,int,int*) ;
 int FUNC_9 (int *,int *,char*,float*,float*) ;
 int FUNC_10 (int *,int *,int *,int *,int,int*) ;
 int FUNC_11 (int *,int *,int *,int *,int,int*) ;
 int FUNC_12 (int *,int *,int *,int *,int,int*) ;

__attribute__((used)) static void
FUNC_13(fz_context *VAR_0, xps_document *VAR_1, fz_path *VAR_2, fz_xml *VAR_3, int VAR_4)
{
 fz_xml *VAR_5;

 char *VAR_6;
 char *VAR_7;
 char *VAR_8;

 int VAR_9 = 0;
 int VAR_10 = 1;
 float VAR_11 = 0;
 float VAR_12 = 0;

 int VAR_13 = 0;

 VAR_6 = FUNC_3(VAR_3, "IsClosed");
 VAR_7 = FUNC_3(VAR_3, "StartPoint");
 VAR_8 = FUNC_3(VAR_3, "IsFilled");

 if (VAR_6)
  VAR_9 = !FUNC_7(VAR_6, "true");
 if (VAR_8)
  VAR_10 = !FUNC_7(VAR_8, "true");
 if (VAR_7)
  FUNC_9(VAR_0, VAR_1, VAR_7, &VAR_11, &VAR_12);

 if (!VAR_4 && !VAR_10)
  return;

 FUNC_2(VAR_0, VAR_2, VAR_11, VAR_12);

 for (VAR_5 = FUNC_4(VAR_3); VAR_5; VAR_5 = FUNC_6(VAR_5))
 {
  if (FUNC_5(VAR_5, "ArcSegment"))
   FUNC_8(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, &VAR_13);
  if (FUNC_5(VAR_5, "PolyBezierSegment"))
   FUNC_10(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, &VAR_13);
  if (FUNC_5(VAR_5, "PolyLineSegment"))
   FUNC_11(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, &VAR_13);
  if (FUNC_5(VAR_5, "PolyQuadraticBezierSegment"))
   FUNC_12(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, &VAR_13);
 }

 if (VAR_9)
 {
  if (VAR_4 && VAR_13)
   FUNC_1(VAR_0, VAR_2, VAR_11, VAR_12);
  else
   FUNC_0(VAR_0, VAR_2);
 }
}
