
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct CONFIRMSAFETY {scalar_t__ dwFlags; int * pUnk; scalar_t__ clsid; } ;
struct TYPE_5__ {int safeopt; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int policy ;
typedef int cs ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef int IInternetHostSecurityManager ;
typedef int IClassFactoryEx ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef scalar_t__ GUID ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int,int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,void**) ;
 int FUNC_7 (int *,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int *,int,int *,int,int ,int ) ;
 int FUNC_9 (int *,int *,int **,scalar_t__*,int *,int,int ) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (scalar_t__*) ;
 int * FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int *) ;

__attribute__((used)) static IUnknown *FUNC_16(script_ctx_t *VAR_10, const WCHAR *VAR_11)
{
    IInternetHostSecurityManager *VAR_12 = ((void*)0);
    struct CONFIRMSAFETY VAR_13;
    IClassFactoryEx *VAR_14;
    IClassFactory *VAR_15;
    DWORD VAR_16;
    BYTE *VAR_17;
    IUnknown *VAR_18;
    DWORD VAR_19;
    GUID VAR_20;
    HRESULT VAR_21;

    VAR_21 = FUNC_0(VAR_11, &VAR_20);
    if(FUNC_3(VAR_21))
        return ((void*)0);

    FUNC_12("GUID %s\n", FUNC_13(&VAR_20));

    if(VAR_10->safeopt & VAR_6) {
        VAR_12 = FUNC_14(VAR_10);
        if(!VAR_12)
            return ((void*)0);

        VAR_19 = 0;
        VAR_21 = FUNC_8(VAR_12, VAR_7,
                (BYTE*)&VAR_19, sizeof(VAR_19), (BYTE*)&VAR_20, sizeof(GUID), 0, 0);
        if(FUNC_3(VAR_21) || VAR_19 != VAR_8)
            return ((void*)0);
    }

    VAR_21 = FUNC_1(&VAR_20, VAR_0|VAR_1, ((void*)0), &VAR_3, (void**)&VAR_15);
    if(FUNC_3(VAR_21))
        return ((void*)0);

    VAR_21 = FUNC_7(VAR_15, &VAR_4, (void**)&VAR_14);
    if(FUNC_11(VAR_21)) {
        FUNC_4("Use IClassFactoryEx\n");
        FUNC_5(VAR_14);
    }

    VAR_21 = FUNC_6(VAR_15, ((void*)0), &VAR_5, (void**)&VAR_18);
    if(FUNC_3(VAR_21))
        return ((void*)0);

    if(VAR_12) {
        VAR_13.clsid = VAR_20;
        VAR_13.pUnk = VAR_18;
        VAR_13.dwFlags = 0;
        VAR_21 = FUNC_9(VAR_12, &VAR_2,
                &VAR_17, &VAR_16, (BYTE*)&VAR_13, sizeof(VAR_13), 0);
        if(FUNC_11(VAR_21)) {
            VAR_19 = VAR_16 >= sizeof(DWORD) ? *(DWORD*)VAR_17 : VAR_9;
            FUNC_2(VAR_17);
        }

        if(FUNC_3(VAR_21) || VAR_19 != VAR_8) {
            FUNC_10(VAR_18);
            return ((void*)0);
        }
    }

    VAR_21 = FUNC_15(VAR_10, VAR_18);
    if(FUNC_3(VAR_21)) {
        FUNC_10(VAR_18);
        return ((void*)0);
    }

    return VAR_18;
}
