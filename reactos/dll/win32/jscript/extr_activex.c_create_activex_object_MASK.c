
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
typedef int IObjectWithSite ;
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
 int VAR_6 ;
 int FUNC_8 (int *,int ,int *,int,int *,int,int ,int ) ;
 int FUNC_9 (int *,int *,int **,scalar_t__*,int *,int,int ) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (scalar_t__*) ;
 int FUNC_18 (int const*) ;
 int * FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static IUnknown *FUNC_20(script_ctx_t *VAR_11, const WCHAR *VAR_12)
{
    IInternetHostSecurityManager *VAR_13 = ((void*)0);
    IObjectWithSite *VAR_14;
    struct CONFIRMSAFETY VAR_15;
    IClassFactoryEx *VAR_16;
    IClassFactory *VAR_17;
    DWORD VAR_18;
    BYTE *VAR_19;
    IUnknown *VAR_20;
    DWORD VAR_21;
    GUID VAR_22;
    HRESULT VAR_23;

    FUNC_15("%s\n", FUNC_18(VAR_12));

    VAR_23 = FUNC_0(VAR_12, &VAR_22);
    if(FUNC_3(VAR_23))
        return ((void*)0);

    FUNC_15("GUID %s\n", FUNC_17(&VAR_22));

    if(VAR_11->safeopt & VAR_7) {
        VAR_13 = FUNC_19(VAR_11);
        if(!VAR_13)
            return ((void*)0);

        VAR_21 = 0;
        VAR_23 = FUNC_8(VAR_13, VAR_8,
                (BYTE*)&VAR_21, sizeof(VAR_21), (BYTE*)&VAR_22, sizeof(GUID), 0, 0);
        if(FUNC_3(VAR_23) || VAR_21 != VAR_9)
            return ((void*)0);
    }

    VAR_23 = FUNC_1(&VAR_22, VAR_0|VAR_1, ((void*)0), &VAR_3, (void**)&VAR_17);
    if(FUNC_3(VAR_23))
        return ((void*)0);

    VAR_23 = FUNC_7(VAR_17, &VAR_4, (void**)&VAR_16);
    if(FUNC_14(VAR_23)) {
        FUNC_4("Use IClassFactoryEx\n");
        FUNC_5(VAR_16);
    }

    VAR_23 = FUNC_6(VAR_17, ((void*)0), &VAR_6, (void**)&VAR_20);
    if(FUNC_3(VAR_23))
        return ((void*)0);

    if(VAR_13) {
        VAR_15.clsid = VAR_22;
        VAR_15.pUnk = VAR_20;
        VAR_15.dwFlags = 0;
        VAR_23 = FUNC_9(VAR_13, &VAR_2,
                &VAR_19, &VAR_18, (BYTE*)&VAR_15, sizeof(VAR_15), 0);
        if(FUNC_14(VAR_23)) {
            VAR_21 = VAR_18 >= sizeof(DWORD) ? *(DWORD*)VAR_19 : VAR_10;
            FUNC_2(VAR_19);
        }

        if(FUNC_3(VAR_23) || VAR_21 != VAR_9) {
            FUNC_13(VAR_20);
            return ((void*)0);
        }
    }

    VAR_23 = FUNC_12(VAR_20, &VAR_5, (void**)&VAR_14);
    if(FUNC_14(VAR_23)) {
        IUnknown *VAR_24;

        VAR_24 = FUNC_16(VAR_11);
        if(VAR_24) {
            VAR_23 = FUNC_11(VAR_14, VAR_24);
            FUNC_13(VAR_24);
        }
        FUNC_10(VAR_14);
        if(!VAR_24 || FUNC_3(VAR_23)) {
            FUNC_13(VAR_20);
            return ((void*)0);
        }
    }

    return VAR_20;
}
