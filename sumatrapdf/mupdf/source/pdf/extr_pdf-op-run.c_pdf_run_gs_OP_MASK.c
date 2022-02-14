
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_9__ {int op; } ;
struct TYPE_10__ {TYPE_3__ color_params; } ;
struct TYPE_7__ {int op; } ;
struct TYPE_8__ {TYPE_1__ color_params; } ;
struct TYPE_11__ {TYPE_4__ fill; TYPE_2__ stroke; } ;
typedef TYPE_5__ pdf_gstate ;
typedef int fz_context ;


 TYPE_5__* FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, int VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_4->stroke.color_params.op = VAR_2;
 VAR_4->fill.color_params.op = VAR_2;
}
