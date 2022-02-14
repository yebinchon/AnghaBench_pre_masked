
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ nsISimpleEnumerator_iface; int * value; } ;
typedef TYPE_1__ nsSingletonEnumerator ;
typedef int nsISupports ;
typedef TYPE_2__ nsISimpleEnumerator ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static nsISimpleEnumerator *FUNC_2(nsISupports *VAR_1)
{
    nsSingletonEnumerator *VAR_2;

    VAR_2 = FUNC_0(sizeof(*VAR_2));
    if(!VAR_2)
        return ((void*)0);

    VAR_2->nsISimpleEnumerator_iface.lpVtbl = &VAR_0;
    VAR_2->ref = 1;

    if(VAR_1)
        FUNC_1(VAR_1);
    VAR_2->value = VAR_1;
    return &VAR_2->nsISimpleEnumerator_iface;
}
