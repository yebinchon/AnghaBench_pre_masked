
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * first_child; } ;
typedef TYPE_1__ pairingheap_node ;
struct TYPE_10__ {TYPE_5__* ph_root; } ;
typedef TYPE_2__ pairingheap ;
struct TYPE_11__ {int * next_sibling; int * prev_or_parent; } ;


 TYPE_5__* FUNC_0 (TYPE_2__*,TYPE_5__*,TYPE_1__*) ;

void
FUNC_1(pairingheap *VAR_0, pairingheap_node *VAR_1)
{
 VAR_1->first_child = ((void*)0);


 VAR_0->ph_root = FUNC_0(VAR_0, VAR_0->ph_root, VAR_1);
 VAR_0->ph_root->prev_or_parent = ((void*)0);
 VAR_0->ph_root->next_sibling = ((void*)0);
}
