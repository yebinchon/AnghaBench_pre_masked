
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; TYPE_5__* signer; scalar_t__ field; struct TYPE_8__* next; struct TYPE_8__* unsaved_sigs; scalar_t__ trailer; scalar_t__ pre_repair_trailer; struct TYPE_8__* table; int stm_buf; scalar_t__ obj; struct TYPE_8__* subsec; } ;
typedef TYPE_1__ pdf_xref_subsec ;
typedef TYPE_1__ pdf_xref_entry ;
typedef TYPE_1__ pdf_xref ;
typedef TYPE_1__ pdf_unsaved_sig ;
typedef int pdf_document ;
typedef int fz_context ;
struct TYPE_9__ {int (* drop ) (TYPE_5__*) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, pdf_xref *VAR_2, int VAR_3)
{
 pdf_unsaved_sig *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  pdf_xref *VAR_7 = &VAR_2[VAR_5];
  pdf_xref_subsec *VAR_8 = VAR_7->subsec;

  while (VAR_8 != ((void*)0))
  {
   pdf_xref_subsec *VAR_9 = VAR_8->next;
   for (VAR_6 = 0; VAR_6 < VAR_8->len; VAR_6++)
   {
    pdf_xref_entry *VAR_10 = &VAR_8->table[VAR_6];
    if (VAR_10->obj)
    {
     FUNC_2(VAR_0, VAR_10->obj);
     FUNC_0(VAR_0, VAR_10->stm_buf);
    }
   }
   FUNC_1(VAR_0, VAR_8->table);
   FUNC_1(VAR_0, VAR_8);
   VAR_8 = VAR_9;
  }

  FUNC_2(VAR_0, VAR_7->pre_repair_trailer);
  FUNC_2(VAR_0, VAR_7->trailer);

  while ((VAR_4 = VAR_7->unsaved_sigs) != ((void*)0))
  {
   VAR_7->unsaved_sigs = VAR_4->next;
   FUNC_2(VAR_0, VAR_4->field);
   VAR_4->signer->drop(VAR_4->signer);
   FUNC_1(VAR_0, VAR_4);
  }
 }

 FUNC_1(VAR_0, VAR_2);
}
