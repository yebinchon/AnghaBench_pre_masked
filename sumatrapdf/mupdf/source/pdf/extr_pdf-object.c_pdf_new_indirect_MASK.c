
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int refs; scalar_t__ flags; int kind; } ;
struct TYPE_5__ {int num; int gen; TYPE_2__ super; int * doc; } ;
typedef TYPE_1__ pdf_obj_ref ;
typedef TYPE_2__ pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char*,int) ;

pdf_obj *
FUNC_3(fz_context *VAR_4, pdf_document *VAR_5, int VAR_6, int VAR_7)
{
 pdf_obj_ref *VAR_8;
 if (VAR_6 < 0 || VAR_6 > VAR_3)
  FUNC_2(VAR_4, VAR_0, "invalid object number (%d)", VAR_6);
 if (VAR_7 < 0 || VAR_7 > VAR_2)
  FUNC_2(VAR_4, VAR_0, "invalid generation number (%d)", VAR_7);
 VAR_8 = FUNC_0(FUNC_1(VAR_4, sizeof(pdf_obj_ref)), "pdf_obj(indirect)");
 VAR_8->super.refs = 1;
 VAR_8->super.kind = VAR_1;
 VAR_8->super.flags = 0;
 VAR_8->doc = VAR_5;
 VAR_8->num = VAR_6;
 VAR_8->gen = VAR_7;
 return &VAR_8->super;
}
