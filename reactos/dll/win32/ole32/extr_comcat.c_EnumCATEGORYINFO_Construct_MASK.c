
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IEnumCATEGORYINFO_iface; int key; int lcid; } ;
typedef int LCID ;
typedef TYPE_1__ IEnumCATEGORYINFOImpl ;
typedef TYPE_2__ IEnumCATEGORYINFO ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char const*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_3(LCID VAR_6, IEnumCATEGORYINFO **VAR_7)
{
    static const WCHAR VAR_8[] = {'C','o','m','p','o','n','e','n','t',' ','C','a','t','e','g','o','r','i','e','s',0};
    IEnumCATEGORYINFOImpl *VAR_9;

    *VAR_7 = ((void*)0);

    VAR_9 = FUNC_1(FUNC_0(), VAR_2, sizeof(IEnumCATEGORYINFOImpl));
    if (!VAR_9) return VAR_1;

    VAR_9->IEnumCATEGORYINFO_iface.lpVtbl = &VAR_0;
    VAR_9->ref = 1;
    VAR_9->lcid = VAR_6;
    FUNC_2(VAR_3, VAR_8, VAR_4, &VAR_9->key);

    *VAR_7 = &VAR_9->IEnumCATEGORYINFO_iface;
    return VAR_5;
}
