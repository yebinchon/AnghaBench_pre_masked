
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ download_state; int mon; int IBinding_iface; int bctx; } ;
typedef int IUnknown ;
typedef int IPersistMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_1__ Binding ;


 int FUNC_0 (int ,int ,int *,int *,int **,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int ,int *,int) ;
 int FUNC_7 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(Binding *VAR_3, IPersistMoniker *VAR_4)
{
    IBindCtx *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(VAR_3->bctx, 0, ((void*)0), ((void*)0), &VAR_5, 0);
    if(FUNC_1(VAR_6)) {
        FUNC_7("CreateAsyncBindCtxEx failed: %08x\n", VAR_6);
        return;
    }

    FUNC_5(VAR_5, VAR_1);
    FUNC_3(VAR_5, VAR_2, (IUnknown*)&VAR_3->IBinding_iface);

    VAR_6 = FUNC_6(VAR_4, VAR_3->download_state == VAR_0, VAR_3->mon, VAR_5, 0x12);
    FUNC_5(VAR_5, VAR_2);
    FUNC_4(VAR_5);
    if(FUNC_1(VAR_6))
        FUNC_2("Load failed: %08x\n", VAR_6);
}
