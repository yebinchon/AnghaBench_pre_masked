
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pairingheap_comparator ;
struct TYPE_3__ {int * ph_root; void* ph_arg; int ph_compare; } ;
typedef TYPE_1__ pairingheap ;


 scalar_t__ FUNC_0 (int) ;

pairingheap *
FUNC_1(pairingheap_comparator VAR_0, void *VAR_1)
{
 pairingheap *VAR_2;

 VAR_2 = (pairingheap *) FUNC_0(sizeof(pairingheap));
 VAR_2->ph_compare = VAR_0;
 VAR_2->ph_arg = VAR_1;

 VAR_2->ph_root = ((void*)0);

 return VAR_2;
}
