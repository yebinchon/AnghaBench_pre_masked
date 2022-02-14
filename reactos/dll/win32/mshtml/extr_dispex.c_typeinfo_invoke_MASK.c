
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t tid; int id; } ;
typedef TYPE_1__ func_info_t ;
typedef int WORD ;
typedef int VARIANT ;
typedef int UINT ;
struct TYPE_6__ {int outer; } ;
typedef int IUnknown ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef TYPE_2__ DispatchEx ;
typedef int DISPPARAMS ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int ,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t,int **) ;
 int * VAR_1 ;

__attribute__((used)) static HRESULT FUNC_7(DispatchEx *VAR_2, func_info_t *VAR_3, WORD VAR_4, DISPPARAMS *VAR_5, VARIANT *VAR_6,
        EXCEPINFO *VAR_7)
{
    ITypeInfo *VAR_8;
    IUnknown *VAR_9;
    UINT VAR_10=0;
    HRESULT VAR_11;

    VAR_11 = FUNC_6(VAR_3->tid, &VAR_8);
    if(FUNC_1(VAR_11)) {
        FUNC_0("Could not get type info: %08x\n", VAR_11);
        return VAR_11;
    }

    VAR_11 = FUNC_3(VAR_2->outer, VAR_1[VAR_3->tid], (void**)&VAR_9);
    if(FUNC_1(VAR_11)) {
        FUNC_0("Could not get iface %s: %08x\n", FUNC_5(VAR_1[VAR_3->tid]), VAR_11);
        return VAR_0;
    }

    VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_3->id, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10);

    FUNC_4(VAR_9);
    return VAR_11;
}
