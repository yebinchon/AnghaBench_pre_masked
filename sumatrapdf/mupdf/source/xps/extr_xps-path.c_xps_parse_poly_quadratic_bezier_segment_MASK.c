
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_document ;
typedef int fz_xml ;
struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_context ;


 TYPE_1__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int,int,float,float,float,float) ;
 int FUNC_2 (int *,int *,float,float) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int *,int *,char*,float*,float*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, xps_document *VAR_1, fz_path *VAR_2, fz_xml *VAR_3, int VAR_4, int *VAR_5)
{
 char *VAR_6 = FUNC_4(VAR_3, "Points");
 char *VAR_7 = FUNC_4(VAR_3, "IsStroked");
 float VAR_8[2], VAR_9[2];
 int VAR_10;
 fz_point VAR_11;
 char *VAR_12;
 int VAR_13;

 if (!VAR_6)
 {
  FUNC_3(VAR_0, "PolyQuadraticBezierSegment element has no points");
  return;
 }

 VAR_10 = 1;
 if (VAR_7 && !FUNC_5(VAR_7, "false"))
   VAR_10 = 0;
 if (!VAR_10)
  *VAR_5 = 1;

 VAR_12 = VAR_6;
 VAR_13 = 0;
 while (*VAR_12 != 0)
 {
  while (*VAR_12 == ' ') VAR_12++;
  VAR_12 = FUNC_6(VAR_0, VAR_1, VAR_12, &VAR_8[VAR_13], &VAR_9[VAR_13]);
  VAR_13 ++;
  if (VAR_13 == 2)
  {
   if (VAR_4 && !VAR_10)
   {
    FUNC_2(VAR_0, VAR_2, VAR_8[1], VAR_9[1]);
   }
   else
   {
    VAR_11 = FUNC_0(VAR_0, VAR_2);
    FUNC_1(VAR_0, VAR_2,
      (VAR_11.x + 2 * VAR_8[0]) / 3, (VAR_11.y + 2 * VAR_9[0]) / 3,
      (VAR_8[1] + 2 * VAR_8[0]) / 3, (VAR_9[1] + 2 * VAR_9[0]) / 3,
      VAR_8[1], VAR_9[1]);
   }
   VAR_13 = 0;
  }
 }
}
