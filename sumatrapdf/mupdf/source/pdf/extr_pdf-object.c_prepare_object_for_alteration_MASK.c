
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int kind; } ;
typedef TYPE_1__ pdf_obj ;
struct TYPE_17__ {scalar_t__ repair_attempted; scalar_t__ save_in_progress; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;
struct TYPE_15__ {int parent_num; TYPE_2__* doc; } ;
struct TYPE_14__ {int parent_num; TYPE_2__* doc; } ;


 TYPE_12__* FUNC_0 (TYPE_1__*) ;
 TYPE_10__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,int ,char*) ;
 TYPE_2__* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_2, pdf_obj *VAR_3, pdf_obj *VAR_4)
{
 pdf_document *VAR_5, *VAR_6;
 int VAR_7;





 if (VAR_3 < VAR_1)
  return;

 switch (VAR_3->kind)
 {
 case 128:
  VAR_5 = FUNC_1(VAR_3)->doc;
  VAR_7 = FUNC_1(VAR_3)->parent_num;
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_3)->doc;
  VAR_7 = FUNC_0(VAR_3)->parent_num;
  break;
 default:
  return;
 }

 if (VAR_4)
 {
  VAR_6 = FUNC_3(VAR_2, VAR_4);
  if (VAR_5 && VAR_6 && VAR_6 != VAR_5)
   FUNC_2(VAR_2, VAR_0, "container and item belong to different documents");
 }





 if (VAR_7 == 0 || VAR_5->save_in_progress || VAR_5->repair_attempted)
  return;






 FUNC_5(VAR_2, VAR_5, VAR_7);
 FUNC_4(VAR_2, VAR_4, VAR_7);
}
