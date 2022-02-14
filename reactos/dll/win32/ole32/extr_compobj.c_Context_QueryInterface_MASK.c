
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IObjContext_iface; int IContextCallback_iface; int IComThreadingInfo_iface; } ;
typedef int REFIID ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(Context *VAR_6, REFIID VAR_7, LPVOID *VAR_8)
{
    *VAR_8 = ((void*)0);

    if (FUNC_2(VAR_7, &VAR_1) ||
        FUNC_2(VAR_7, &VAR_4))
    {
        *VAR_8 = &VAR_6->IComThreadingInfo_iface;
    }
    else if (FUNC_2(VAR_7, &VAR_2))
    {
        *VAR_8 = &VAR_6->IContextCallback_iface;
    }
    else if (FUNC_2(VAR_7, &VAR_3))
    {
        *VAR_8 = &VAR_6->IObjContext_iface;
    }

    if (*VAR_8)
    {
        FUNC_1((IUnknown*)*VAR_8);
        return VAR_5;
    }

    FUNC_0("interface not implemented %s\n", FUNC_3(VAR_7));
    return VAR_0;
}
