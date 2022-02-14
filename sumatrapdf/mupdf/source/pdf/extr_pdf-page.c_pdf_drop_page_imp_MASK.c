
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* doc; int obj; int widgets; int annots; int links; } ;
typedef TYPE_2__ pdf_page ;
typedef int fz_context ;
struct TYPE_4__ {int super; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_page *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->links);
 FUNC_2(VAR_0, VAR_1->annots);
 FUNC_4(VAR_0, VAR_1->widgets);

 FUNC_3(VAR_0, VAR_1->obj);

 FUNC_0(VAR_0, &VAR_1->doc->super);
}
