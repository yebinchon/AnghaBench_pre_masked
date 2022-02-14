
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct class_categories {int dummy; } ;
typedef char WCHAR ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IEnumGUID_iface; int key; struct class_categories* categories; } ;
typedef TYPE_1__ IEnumCLSID ;
typedef int HRESULT ;
typedef TYPE_2__ CLSID_IEnumGUIDImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char const*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_3(struct class_categories *VAR_6, IEnumCLSID **VAR_7)
{
    static const WCHAR VAR_8[] = {'C','L','S','I','D',0};
    CLSID_IEnumGUIDImpl *VAR_9;

    *VAR_7 = ((void*)0);

    VAR_9 = FUNC_1(FUNC_0(), VAR_2, sizeof(CLSID_IEnumGUIDImpl));
    if (!VAR_9) return VAR_1;

    VAR_9->IEnumGUID_iface.lpVtbl = &VAR_0;
    VAR_9->ref = 1;
    VAR_9->categories = VAR_6;
    FUNC_2(VAR_3, VAR_8, VAR_4, &VAR_9->key);

    *VAR_7 = &VAR_9->IEnumGUID_iface;

    return VAR_5;
}
