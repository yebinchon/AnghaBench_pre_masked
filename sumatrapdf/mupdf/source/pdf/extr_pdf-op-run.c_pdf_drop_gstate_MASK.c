
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int font; } ;
struct TYPE_5__ {int stroke_state; int softmask_resources; int softmask; TYPE_1__ text; int fill; int stroke; } ;
typedef TYPE_2__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_gstate *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->stroke);
 FUNC_2(VAR_0, &VAR_1->fill);
 FUNC_1(VAR_0, VAR_1->text.font);
 FUNC_3(VAR_0, VAR_1->softmask);
 FUNC_3(VAR_0, VAR_1->softmask_resources);
 FUNC_0(VAR_0, VAR_1->stroke_state);
}
