
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next_sibling; } ;
typedef TYPE_1__ pairingheap_node ;
typedef int pairingheap ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static pairingheap_node *
FUNC_1(pairingheap *VAR_0, pairingheap_node *VAR_1)
{
 pairingheap_node *VAR_2,
      *VAR_3;
 pairingheap_node *VAR_4;
 pairingheap_node *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_1->next_sibling == ((void*)0))
  return VAR_1;


 VAR_3 = VAR_1;
 VAR_4 = ((void*)0);
 for (;;)
 {
  VAR_2 = VAR_3;

  if (VAR_2 == ((void*)0))
   break;

  if (VAR_2->next_sibling == ((void*)0))
  {

   VAR_2->next_sibling = VAR_4;
   VAR_4 = VAR_2;
   break;
  }

  VAR_3 = VAR_2->next_sibling->next_sibling;



  VAR_2 = FUNC_0(VAR_0, VAR_2, VAR_2->next_sibling);
  VAR_2->next_sibling = VAR_4;
  VAR_4 = VAR_2;
 }




 VAR_5 = VAR_4;
 VAR_3 = VAR_4->next_sibling;
 while (VAR_3)
 {
  VAR_2 = VAR_3;
  VAR_3 = VAR_2->next_sibling;

  VAR_5 = FUNC_0(VAR_0, VAR_5, VAR_2);
 }

 return VAR_5;
}
