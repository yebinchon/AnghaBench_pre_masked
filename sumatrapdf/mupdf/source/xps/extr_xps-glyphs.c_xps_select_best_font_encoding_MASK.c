
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,int*,int*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, xps_document *VAR_1, fz_font *VAR_2)
{
 static struct { int pid, eid; } VAR_3[] =
 {
  { 3, 10 },
  { 3, 1 },
  { 3, 5 },
  { 3, 4 },
  { 3, 3 },
  { 3, 2 },
  { 3, 0 },
  { 1, 0 },
  { -1, -1 },
 };

 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_0, VAR_2);
 for (VAR_5 = 0; VAR_3[VAR_5].pid != -1; VAR_5++)
 {
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  {
   FUNC_2(VAR_0, VAR_2, VAR_4, &VAR_7, &VAR_8);
   if (VAR_7 == VAR_3[VAR_5].pid && VAR_8 == VAR_3[VAR_5].eid)
   {
    FUNC_3(VAR_0, VAR_2, VAR_4);
    return;
   }
  }
 }

 FUNC_0(VAR_0, "cannot find a suitable cmap");
}
