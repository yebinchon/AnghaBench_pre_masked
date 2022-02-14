
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_6__ {scalar_t__ kind; int * pattern; } ;
typedef TYPE_2__ pdf_material ;
struct TYPE_7__ {TYPE_2__ stroke; TYPE_2__ fill; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_3, pdf_run_processor *VAR_4, int VAR_5)
{
 pdf_gstate *VAR_6 = VAR_4->gstate + VAR_4->gtop;
 pdf_material *VAR_7;
 VAR_7 = VAR_5 == VAR_0 ? &VAR_6->fill : &VAR_6->stroke;
 if (VAR_7->kind == VAR_2)
 {
  FUNC_0(VAR_3, VAR_7->pattern);
  VAR_7->pattern = ((void*)0);
  VAR_7->kind = VAR_1;
 }
}
