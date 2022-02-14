
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct CLRRuntimeInfo {TYPE_1__ ICLRRuntimeInfo_iface; } ;
typedef int RuntimeHost ;
typedef int ICLRRuntimeInfo ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (struct CLRRuntimeInfo*,int **) ;
 int FUNC_1 (int) ;
 struct CLRRuntimeInfo* FUNC_2 (int *) ;

HRESULT FUNC_3(ICLRRuntimeInfo *VAR_1, RuntimeHost **VAR_2)
{
    struct CLRRuntimeInfo *VAR_3 = FUNC_2(VAR_1);

    FUNC_1(VAR_3->ICLRRuntimeInfo_iface.lpVtbl == &VAR_0);

    return FUNC_0(VAR_3, VAR_2);
}
