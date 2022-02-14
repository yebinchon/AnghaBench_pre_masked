
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
typedef int func_info_t ;
struct TYPE_5__ {int func_cnt; TYPE_2__* funcs; } ;
typedef TYPE_1__ dispex_data_t ;
struct TYPE_6__ {scalar_t__ id; int tid; int name; } ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int *,int *,int *,int *) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(dispex_data_t *VAR_0, DWORD *VAR_1, tid_t VAR_2, DISPID VAR_3, ITypeInfo *VAR_4)
{
    HRESULT VAR_5;

    if(VAR_0->func_cnt && VAR_0->funcs[VAR_0->func_cnt-1].id == VAR_3)
        return;

    if(VAR_0->func_cnt == *VAR_1)
        VAR_0->funcs = FUNC_2(VAR_0->funcs, (*VAR_1 <<= 1)*sizeof(func_info_t));

    VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_0->funcs[VAR_0->func_cnt].name, ((void*)0), ((void*)0), ((void*)0));
    if(FUNC_0(VAR_5))
        return;

    VAR_0->funcs[VAR_0->func_cnt].id = VAR_3;
    VAR_0->funcs[VAR_0->func_cnt].tid = VAR_2;

    VAR_0->func_cnt++;
}
