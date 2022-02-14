
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_5__ {TYPE_1__* fix; int xml; } ;
typedef TYPE_2__ xps_page ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_context ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ,char*,int *,int *,int **) ;
 int * FUNC_8 (int *,int *,char*,int *) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2, xps_page *VAR_3, fz_link **VAR_4)
{
 fz_xml *VAR_5, *VAR_6, *VAR_7;
 xps_resource *VAR_8 = ((void*)0);
 char VAR_9[1024];
 char *VAR_10;

 VAR_5 = FUNC_4(VAR_3->xml);

 if (!VAR_5)
  return;

 FUNC_0(VAR_9, VAR_3->fix->name, sizeof VAR_9);
 VAR_10 = FUNC_5(VAR_9, '/');
 if (VAR_10)
  VAR_10[1] = 0;

 VAR_7 = FUNC_1(FUNC_2(VAR_5, "FixedPage.Resources"));
 if (VAR_7)
  VAR_8 = FUNC_8(VAR_0, VAR_1, VAR_9, VAR_7);

 for (VAR_6 = FUNC_1(VAR_5); VAR_6; VAR_6 = FUNC_3(VAR_6))
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_9, VAR_8, VAR_6, VAR_4);

 if (VAR_8)
  FUNC_6(VAR_0, VAR_1, VAR_8);
}
