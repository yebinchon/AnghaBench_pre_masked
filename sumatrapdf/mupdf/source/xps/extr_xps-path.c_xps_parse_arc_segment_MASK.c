
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_path ;
typedef int fz_context ;


 float FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,float,float) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int *,int *,float,float,float,int,int,float,float) ;
 int FUNC_6 (int *,int *,char*,float*,float*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, xps_document *VAR_1, fz_path *VAR_2, fz_xml *VAR_3, int VAR_4, int *VAR_5)
{





 float VAR_6;
 int VAR_7, VAR_8;
 float VAR_9, VAR_10;
 float VAR_11, VAR_12;
 int VAR_13;

 char *VAR_14 = FUNC_3(VAR_3, "Point");
 char *VAR_15 = FUNC_3(VAR_3, "Size");
 char *VAR_16 = FUNC_3(VAR_3, "RotationAngle");
 char *VAR_17 = FUNC_3(VAR_3, "IsLargeArc");
 char *VAR_18 = FUNC_3(VAR_3, "SweepDirection");
 char *VAR_19 = FUNC_3(VAR_3, "IsStroked");

 if (!VAR_14 || !VAR_15 || !VAR_16 || !VAR_17 || !VAR_18)
 {
  FUNC_2(VAR_0, "ArcSegment element is missing attributes");
  return;
 }

 VAR_13 = 1;
 if (VAR_19 && !FUNC_4(VAR_19, "false"))
   VAR_13 = 0;
 if (!VAR_13)
  *VAR_5 = 1;

 VAR_9 = VAR_10 = 0;
 VAR_11 = VAR_12 = 0;

 FUNC_6(VAR_0, VAR_1, VAR_14, &VAR_9, &VAR_10);
 FUNC_6(VAR_0, VAR_1, VAR_15, &VAR_11, &VAR_12);
 VAR_6 = FUNC_0(VAR_16);
 VAR_7 = !FUNC_4(VAR_17, "true");
 VAR_8 = !FUNC_4(VAR_18, "Clockwise");

 if (VAR_4 && !VAR_13)
 {
  FUNC_1(VAR_0, VAR_2, VAR_9, VAR_10);
  return;
 }

 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_11, VAR_12, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
