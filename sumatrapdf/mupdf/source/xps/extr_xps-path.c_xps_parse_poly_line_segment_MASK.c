
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_path ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,float,float) ;
 int FUNC_1 (int *,int *,float,float) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int *,int *,char*,float*,float*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, xps_document *VAR_1, fz_path *VAR_2, fz_xml *VAR_3, int VAR_4, int *VAR_5)
{
 char *VAR_6 = FUNC_3(VAR_3, "Points");
 char *VAR_7 = FUNC_3(VAR_3, "IsStroked");
 int VAR_8;
 float VAR_9, VAR_10;
 char *VAR_11;

 if (!VAR_6)
 {
  FUNC_2(VAR_0, "PolyLineSegment element has no points");
  return;
 }

 VAR_8 = 1;
 if (VAR_7 && !FUNC_4(VAR_7, "false"))
   VAR_8 = 0;
 if (!VAR_8)
  *VAR_5 = 1;

 VAR_11 = VAR_6;
 while (*VAR_11 != 0)
 {
  while (*VAR_11 == ' ') VAR_11++;
  VAR_11 = FUNC_5(VAR_0, VAR_1, VAR_11, &VAR_9, &VAR_10);
  if (VAR_4 && !VAR_8)
   FUNC_1(VAR_0, VAR_2, VAR_9, VAR_10);
  else
   FUNC_0(VAR_0, VAR_2, VAR_9, VAR_10);
 }
}
