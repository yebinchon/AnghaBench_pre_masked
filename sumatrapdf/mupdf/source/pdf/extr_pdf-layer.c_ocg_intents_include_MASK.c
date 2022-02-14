
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intent; } ;
typedef TYPE_1__ pdf_ocg_descriptor ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(fz_context *VAR_0, pdf_ocg_descriptor *VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_5(VAR_2, "All") == 0)
  return 1;


 if (!VAR_1->intent)
  return (FUNC_5(VAR_2, "View") == 0);

 if (FUNC_3(VAR_0, VAR_1->intent))
 {
  const char *VAR_5 = FUNC_4(VAR_0, VAR_1->intent);
  if (FUNC_5(VAR_5, "All") == 0)
   return 1;
  return (FUNC_5(VAR_5, VAR_2) == 0);
 }
 if (!FUNC_2(VAR_0, VAR_1->intent))
  return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1->intent);
 for (VAR_3=0; VAR_3 < VAR_4; VAR_3++)
 {
  const char *VAR_6 = FUNC_4(VAR_0, FUNC_0(VAR_0, VAR_1->intent, VAR_3));
  if (FUNC_5(VAR_6, "All") == 0)
   return 1;
  if (FUNC_5(VAR_6, VAR_2) == 0)
   return 1;
 }
 return 0;
}
