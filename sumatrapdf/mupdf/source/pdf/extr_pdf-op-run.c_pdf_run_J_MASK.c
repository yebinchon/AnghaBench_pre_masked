
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dev; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_10__ {TYPE_6__* stroke_state; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;
struct TYPE_11__ {int start_cap; int dash_cap; int end_cap; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (int *,TYPE_6__*) ;
 TYPE_3__* FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_3, pdf_processor *VAR_4, int VAR_5)
{
 pdf_run_processor *VAR_6 = (pdf_run_processor *)VAR_4;
 pdf_gstate *VAR_7 = FUNC_1(VAR_3, VAR_6);

 VAR_6->dev->flags &= ~(VAR_2 | VAR_0 | VAR_1);
 VAR_7->stroke_state = FUNC_0(VAR_3, VAR_7->stroke_state);
 VAR_7->stroke_state->start_cap = VAR_5;
 VAR_7->stroke_state->dash_cap = VAR_5;
 VAR_7->stroke_state->end_cap = VAR_5;
}
