
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IEnumGUID_iface; int key; } ;
typedef int REFCLSID ;
typedef char* LPCWSTR ;
typedef TYPE_1__ IEnumGUID ;
typedef int HRESULT ;
typedef TYPE_2__ CATID_IEnumGUIDImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,char*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(REFCLSID VAR_7, LPCWSTR VAR_8, IEnumGUID **VAR_9)
{
    static const WCHAR VAR_10[] = {'C','L','S','I','D','\\',0};
    WCHAR VAR_11[100], VAR_12[VAR_1];
    CATID_IEnumGUIDImpl *VAR_13;

    *VAR_9 = ((void*)0);

    VAR_13 = FUNC_1(FUNC_0(), VAR_3, sizeof(CATID_IEnumGUIDImpl));
    if (!VAR_13) return VAR_2;

    FUNC_2(VAR_7, VAR_12, VAR_1);

    VAR_13->IEnumGUID_iface.lpVtbl = &VAR_0;
    VAR_13->ref = 1;
    FUNC_4(VAR_11, VAR_10);
    FUNC_3(VAR_11, VAR_12);
    FUNC_3(VAR_11, VAR_8);

    FUNC_5(VAR_4, VAR_11, VAR_5, &VAR_13->key);

    *VAR_9 = &VAR_13->IEnumGUID_iface;
    return VAR_6;
}
