
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* first_child; struct TYPE_9__* next_sibling; struct TYPE_9__* prev_or_parent; } ;
typedef TYPE_1__ pairingheap_node ;
struct TYPE_10__ {scalar_t__ (* ph_compare ) (TYPE_1__*,TYPE_1__*,int ) ;int ph_arg; } ;
typedef TYPE_2__ pairingheap ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static pairingheap_node *
FUNC_1(pairingheap *VAR_0, pairingheap_node *VAR_1, pairingheap_node *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return VAR_2;
 if (VAR_2 == ((void*)0))
  return VAR_1;


 if (VAR_0->ph_compare(VAR_1, VAR_2, VAR_0->ph_arg) < 0)
 {
  pairingheap_node *VAR_3;

  VAR_3 = VAR_1;
  VAR_1 = VAR_2;
  VAR_2 = VAR_3;
 }


 if (VAR_1->first_child)
  VAR_1->first_child->prev_or_parent = VAR_2;
 VAR_2->prev_or_parent = VAR_1;
 VAR_2->next_sibling = VAR_1->first_child;
 VAR_1->first_child = VAR_2;

 return VAR_1;
}
