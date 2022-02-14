
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bindopts ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int cbStruct; scalar_t__ grfFlags; int grfMode; int dwTickCountDeadline; } ;
typedef int IUnknown ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_1__ BIND_OPTS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,void**) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    IBindCtx *VAR_9 = (IBindCtx*)0x0ff00ff0;
    IUnknown *VAR_10;
    HRESULT VAR_11;
    ULONG VAR_12;
    BIND_OPTS VAR_13;

    VAR_11 = FUNC_1(0, ((void*)0), ((void*)0), &VAR_9);
    FUNC_8(VAR_11 == VAR_1, "CreateAsyncBindCtx failed. expected: E_INVALIDARG, got: %08x\n", VAR_11);
    FUNC_8(VAR_9 == (IBindCtx*)0x0ff00ff0, "bctx should not be changed\n");

    VAR_11 = FUNC_1(0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_11 == VAR_1, "CreateAsyncBindCtx failed. expected: E_INVALIDARG, got: %08x\n", VAR_11);

    FUNC_6(VAR_4);
    VAR_11 = FUNC_1(0, (IBindStatusCallback*)&VAR_8, ((void*)0), &VAR_9);
    FUNC_8(VAR_11 == VAR_7, "CreateAsyncBindCtx failed: %08x\n", VAR_11);
    FUNC_0(VAR_4);

    VAR_13.cbStruct = sizeof(VAR_13);
    VAR_11 = FUNC_2(VAR_9, &VAR_13);
    FUNC_8(VAR_11 == VAR_7, "IBindCtx_GetBindOptions failed: %08x\n", VAR_11);
    FUNC_8(VAR_13.grfFlags == VAR_0,
                "bindopts.grfFlags = %08x, expected: BIND_MAYBOTHERUSER\n", VAR_13.grfFlags);
    FUNC_8(VAR_13.grfMode == (VAR_5 | VAR_6),
                "bindopts.grfMode = %08x, expected: STGM_READWRITE | STGM_SHARE_EXCLUSIVE\n",
                VAR_13.grfMode);
    FUNC_8(VAR_13.dwTickCountDeadline == 0,
                "bindopts.dwTickCountDeadline = %08x, expected: 0\n", VAR_13.dwTickCountDeadline);

    VAR_11 = FUNC_3(VAR_9, &VAR_3, (void**)&VAR_10);
    FUNC_8(VAR_11 == VAR_2, "QueryInterface(IID_IAsyncBindCtx) failed: %08x, expected E_NOINTERFACE\n", VAR_11);
    if(FUNC_7(VAR_11))
        FUNC_5(VAR_10);

    VAR_12 = FUNC_4(VAR_9);
    FUNC_8(VAR_12 == 0, "bctx should be destroyed here\n");
}
