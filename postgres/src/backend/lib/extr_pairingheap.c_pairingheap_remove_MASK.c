
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* prev_or_parent; struct TYPE_9__* next_sibling; struct TYPE_9__* first_child; } ;
typedef TYPE_1__ pairingheap_node ;
struct TYPE_10__ {TYPE_1__* ph_root; } ;
typedef TYPE_2__ pairingheap ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(pairingheap *VAR_0, pairingheap_node *VAR_1)
{
 pairingheap_node *VAR_2;
 pairingheap_node *VAR_3;
 pairingheap_node *VAR_4;
 pairingheap_node **VAR_5;





 if (VAR_1 == VAR_0->ph_root)
 {
  (void) FUNC_2(VAR_0);
  return;
 }





 VAR_2 = VAR_1->first_child;
 VAR_4 = VAR_1->next_sibling;





 if (VAR_1->prev_or_parent->first_child == VAR_1)
  VAR_5 = &VAR_1->prev_or_parent->first_child;
 else
  VAR_5 = &VAR_1->prev_or_parent->next_sibling;
 FUNC_0(*VAR_5 == VAR_1);






 if (VAR_2)
 {
  VAR_3 = FUNC_1(VAR_0, VAR_2);

  VAR_3->prev_or_parent = VAR_1->prev_or_parent;
  VAR_3->next_sibling = VAR_1->next_sibling;
  *VAR_5 = VAR_3;
  if (VAR_4)
   VAR_4->prev_or_parent = VAR_3;
 }
 else
 {
  *VAR_5 = VAR_4;
  if (VAR_4)
   VAR_4->prev_or_parent = VAR_1->prev_or_parent;
 }
}
