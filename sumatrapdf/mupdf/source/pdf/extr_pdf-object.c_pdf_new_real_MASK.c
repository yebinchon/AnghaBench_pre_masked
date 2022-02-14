
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int refs; scalar_t__ flags; int kind; } ;
struct TYPE_6__ {float f; } ;
struct TYPE_7__ {TYPE_3__ super; TYPE_1__ u; } ;
typedef TYPE_2__ pdf_obj_num ;
typedef TYPE_3__ pdf_obj ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

pdf_obj *
FUNC_2(fz_context *VAR_1, float VAR_2)
{
 pdf_obj_num *VAR_3;
 VAR_3 = FUNC_0(FUNC_1(VAR_1, sizeof(pdf_obj_num)), "pdf_obj(real)");
 VAR_3->super.refs = 1;
 VAR_3->super.kind = VAR_0;
 VAR_3->super.flags = 0;
 VAR_3->u.f = VAR_2;
 return &VAR_3->super;
}
