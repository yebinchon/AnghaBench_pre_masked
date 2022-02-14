
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* prev; struct TYPE_8__* next; struct TYPE_8__* iep; struct TYPE_8__* filename; } ;
typedef TYPE_2__ pp_entry_t ;
struct TYPE_9__ {TYPE_2__** defines; } ;
struct TYPE_7__ {TYPE_2__* next; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1( pp_entry_t *VAR_2, int VAR_3 )
{
 if(VAR_2->iep)
 {
  if(VAR_2->iep == VAR_1)
  {
   VAR_1 = VAR_2->iep->next;
   if(VAR_1)
    VAR_1->prev = ((void*)0);
  }
  else
  {
   VAR_2->iep->prev->next = VAR_2->iep->next;
   if(VAR_2->iep->next)
    VAR_2->iep->next->prev = VAR_2->iep->prev;
  }
  FUNC_0(VAR_2->iep->filename);
  FUNC_0(VAR_2->iep);
 }

 if(VAR_0->defines[VAR_3] == VAR_2)
 {
  VAR_0->defines[VAR_3] = VAR_2->next;
  if(VAR_0->defines[VAR_3])
   VAR_0->defines[VAR_3]->prev = ((void*)0);
 }
 else
 {
  VAR_2->prev->next = VAR_2->next;
  if(VAR_2->next)
   VAR_2->next->prev = VAR_2->prev;
 }

 FUNC_0(VAR_2);
}
