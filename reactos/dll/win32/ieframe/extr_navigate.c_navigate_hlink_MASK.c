
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int bindinfo ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_16__ {int * hGlobal; } ;
struct TYPE_17__ {TYPE_1__ u; } ;
struct TYPE_20__ {int cbSize; scalar_t__ dwBindVerb; TYPE_2__ stgmedData; scalar_t__ cbstgmedData; } ;
struct TYPE_19__ {int IBindStatusCallback_iface; } ;
struct TYPE_18__ {scalar_t__ doc_navigate; } ;
typedef int * PBYTE ;
typedef int * LPWSTR ;
typedef int IMoniker ;
typedef int IHttpNegotiate ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_3__ DocHost ;
typedef int DWORD ;
typedef TYPE_4__ BindStatusCallback ;
typedef TYPE_5__ BINDINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *,TYPE_5__*) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int const*,int ,int **) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ,int *,int **) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_3__*,int *,int *,int *,scalar_t__,int ) ;
 TYPE_4__* FUNC_13 (TYPE_3__*,int *,int *,scalar_t__,int *) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (TYPE_3__*,TYPE_4__*,int *) ;

__attribute__((used)) static HRESULT FUNC_17(DocHost *VAR_3, IMoniker *VAR_4, IBindCtx *VAR_5,
                              IBindStatusCallback *VAR_6)
{
    IHttpNegotiate *VAR_7;
    BindStatusCallback *VAR_8;
    PBYTE VAR_9 = ((void*)0);
    ULONG VAR_10 = 0;
    LPWSTR VAR_11 = ((void*)0), VAR_12;
    BINDINFO VAR_13;
    DWORD VAR_14 = 0;
    HRESULT VAR_15;

    FUNC_11("\n");

    VAR_15 = FUNC_8(VAR_4, 0, ((void*)0), &VAR_12);
    if(FUNC_1(VAR_15))
        FUNC_2("GetDisplayName failed: %08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_6, &VAR_2,
                                              (void**)&VAR_7);
    if(FUNC_10(VAR_15)) {
        static const WCHAR VAR_16[] = {0};

        FUNC_6(VAR_7, VAR_16, VAR_16, 0,
                                            &VAR_11);
        FUNC_7(VAR_7);
    }

    FUNC_15(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.cbSize = sizeof(VAR_13);

    VAR_15 = FUNC_3(VAR_6, &VAR_14, &VAR_13);
    FUNC_14(&VAR_13);
    if(VAR_13.dwBindVerb == VAR_0) {
        VAR_10 = VAR_13.cbstgmedData;
        if(VAR_10)
            VAR_9 = VAR_13.stgmedData.u.hGlobal;
    }

    if(VAR_3->doc_navigate) {
        VAR_15 = FUNC_12(VAR_3, VAR_12, VAR_11, VAR_9, VAR_10, VAR_1);
    }else {
        VAR_8 = FUNC_13(VAR_3, VAR_12, VAR_9, VAR_10, VAR_11);
        VAR_15 = FUNC_16(VAR_3, VAR_8, VAR_4);
        FUNC_5(&VAR_8->IBindStatusCallback_iface);
    }

    FUNC_0(VAR_12);
    FUNC_0(VAR_11);
    FUNC_9(&VAR_13);

    return VAR_15;
}
