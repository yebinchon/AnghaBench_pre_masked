
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct dictionary_enum {int ref; TYPE_1__ IEnumVARIANT_iface; TYPE_2__* dict; int notify; int cur; } ;
struct TYPE_5__ {int IDictionary_iface; int notifier; int pairs; } ;
typedef TYPE_2__ dictionary ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dictionary_enum* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(dictionary *VAR_3, IUnknown **VAR_4)
{
    struct dictionary_enum *VAR_5;

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->IEnumVARIANT_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;
    VAR_5->cur = FUNC_3(&VAR_3->pairs);
    FUNC_2(&VAR_3->notifier, &VAR_5->notify);
    VAR_5->dict = VAR_3;
    FUNC_0(&VAR_3->IDictionary_iface);

    *VAR_4 = (IUnknown*)&VAR_5->IEnumVARIANT_iface;
    return VAR_1;
}
