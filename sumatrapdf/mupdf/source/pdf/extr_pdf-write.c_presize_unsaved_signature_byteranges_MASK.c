
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* unsaved_sigs; } ;
typedef TYPE_1__ pdf_xref ;
struct TYPE_6__ {int field; struct TYPE_6__* next; } ;
typedef TYPE_2__ pdf_unsaved_sig ;
typedef int pdf_obj ;
struct TYPE_7__ {int num_incremental_sections; TYPE_1__* xref_sections; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_3, pdf_document *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_incremental_sections; VAR_5++)
 {
  pdf_xref *VAR_6 = &VAR_4->xref_sections[VAR_5];

  if (VAR_6->unsaved_sigs)
  {



   pdf_unsaved_sig *VAR_7;
   int VAR_8 = 0;

   for (VAR_7 = VAR_6->unsaved_sigs; VAR_7; VAR_7 = VAR_7->next)
    VAR_8++;

   for (VAR_7 = VAR_6->unsaved_sigs; VAR_7; VAR_7 = VAR_7->next)
   {



    int VAR_9;
    pdf_obj *VAR_10 = FUNC_2(VAR_3, VAR_7->field, FUNC_0(VAR_2), FUNC_0(VAR_0), ((void*)0));

    for (VAR_9 = 0; VAR_9 < VAR_8+1; VAR_9++)
    {
     FUNC_1(VAR_3, VAR_10, VAR_1);
     FUNC_1(VAR_3, VAR_10, VAR_1);
    }
   }
  }
 }
}
