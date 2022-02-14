
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IEnumVARIANT_iface; int * mc; int count; int pos; } ;
typedef TYPE_1__ MatchCollectionEnum ;
typedef int IMatchCollection2 ;
typedef TYPE_2__ IEnumVARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3(IMatchCollection2 *VAR_3, ULONG VAR_4, IEnumVARIANT **VAR_5)
{
    MatchCollectionEnum *VAR_6;

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IEnumVARIANT_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->pos = VAR_4;
    FUNC_1(VAR_3, &VAR_6->count);
    VAR_6->mc = VAR_3;
    FUNC_0(VAR_3);

    *VAR_5 = &VAR_6->IEnumVARIANT_iface;
    return VAR_2;
}
