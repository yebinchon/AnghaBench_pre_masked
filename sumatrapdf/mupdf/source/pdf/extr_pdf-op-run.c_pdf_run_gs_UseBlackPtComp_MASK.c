
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
typedef int pdf_obj ;
struct TYPE_9__ {int bp; } ;
struct TYPE_10__ {TYPE_3__ color_params; } ;
struct TYPE_7__ {int bp; } ;
struct TYPE_8__ {TYPE_1__ color_params; } ;
struct TYPE_11__ {TYPE_4__ fill; TYPE_2__ stroke; } ;
typedef TYPE_5__ pdf_gstate ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_1, pdf_processor *VAR_2, pdf_obj *VAR_3)
{
 pdf_run_processor *VAR_4 = (pdf_run_processor *)VAR_2;
 pdf_gstate *VAR_5 = FUNC_1(VAR_1, VAR_4);
 int VAR_6 = FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_0));


 VAR_5->stroke.color_params.bp = VAR_6;
 VAR_5->fill.color_params.bp = VAR_6;
}
