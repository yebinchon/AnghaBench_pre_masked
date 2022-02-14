
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gparent; } ;
typedef TYPE_1__ pdf_run_processor ;
typedef int pdf_pattern ;
struct TYPE_9__ {int gstate_num; int * pattern; int kind; } ;
typedef TYPE_2__ pdf_material ;
struct TYPE_10__ {TYPE_2__ stroke; TYPE_2__ fill; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,float*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, pdf_run_processor *VAR_3, int VAR_4, pdf_pattern *VAR_5, float *VAR_6)
{
 pdf_gstate *VAR_7;
 pdf_material *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3);

 VAR_8 = VAR_4 == VAR_0 ? &VAR_7->fill : &VAR_7->stroke;

 FUNC_0(VAR_2, VAR_8->pattern);
 VAR_8->pattern = ((void*)0);

 VAR_8->kind = VAR_1;
 if (VAR_5)
  VAR_8->pattern = FUNC_2(VAR_2, VAR_5);

 if (VAR_6)
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6);

 VAR_8->gstate_num = VAR_3->gparent;
}
