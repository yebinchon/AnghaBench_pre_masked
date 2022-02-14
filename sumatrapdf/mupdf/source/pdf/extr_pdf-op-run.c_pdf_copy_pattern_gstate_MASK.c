
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int font; } ;
struct TYPE_6__ {int stroke_state; int softmask; TYPE_1__ text; int ctm; } ;
typedef TYPE_2__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, pdf_gstate *VAR_1, const pdf_gstate *VAR_2)
{
 VAR_1->ctm = VAR_2->ctm;

 FUNC_2(VAR_0, VAR_1->text.font);
 VAR_1->text.font = FUNC_4(VAR_0, VAR_2->text.font);

 FUNC_3(VAR_0, VAR_1->softmask);
 VAR_1->softmask = FUNC_5(VAR_0, VAR_2->softmask);

 FUNC_0(VAR_0, VAR_1->stroke_state);
 VAR_1->stroke_state = FUNC_1(VAR_0, VAR_2->stroke_state);
}
