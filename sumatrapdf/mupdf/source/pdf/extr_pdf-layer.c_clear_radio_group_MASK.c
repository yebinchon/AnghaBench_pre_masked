
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; int obj; } ;
typedef TYPE_2__ pdf_ocg_entry ;
typedef int pdf_obj ;
struct TYPE_8__ {TYPE_1__* ocg; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;
struct TYPE_6__ {int len; TYPE_2__* ocgs; } ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{
 pdf_obj *VAR_3 = FUNC_3(VAR_0, FUNC_5(VAR_0, VAR_1), "Root/OCProperties/RBGroups");
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  pdf_obj *VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_5);

  if (FUNC_0(VAR_0, VAR_2, VAR_6))
  {
   int VAR_7 = FUNC_2(VAR_0, VAR_6);
   int VAR_8;

   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   {
    pdf_obj *VAR_9 = FUNC_1(VAR_0, VAR_6, VAR_8);
    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_1->ocg->len; VAR_10++)
    {
     pdf_ocg_entry *VAR_11 = &VAR_1->ocg->ocgs[VAR_10];

     if (!FUNC_4(VAR_0, VAR_11->obj, VAR_9))
      VAR_11->state = 0;
    }
   }
  }
 }
}
