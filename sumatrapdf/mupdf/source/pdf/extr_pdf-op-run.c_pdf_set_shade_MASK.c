
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gparent; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_8__ {int gstate_num; int shade; int kind; } ;
typedef TYPE_2__ pdf_material ;
struct TYPE_9__ {TYPE_2__ stroke; TYPE_2__ fill; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_shade ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, pdf_run_processor *VAR_3, int VAR_4, fz_shade *VAR_5)
{
 pdf_gstate *VAR_6;
 pdf_material *VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3);

 VAR_7 = VAR_4 == VAR_0 ? &VAR_6->fill : &VAR_6->stroke;

 FUNC_0(VAR_2, VAR_7->shade);

 VAR_7->kind = VAR_1;
 VAR_7->shade = FUNC_1(VAR_2, VAR_5);

 VAR_7->gstate_num = VAR_3->gparent;
}
