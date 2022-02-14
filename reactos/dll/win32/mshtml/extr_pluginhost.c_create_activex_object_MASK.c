
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int policy ;
typedef int nsIDOMHTMLElement ;
struct TYPE_3__ {int window; int IInternetHostSecurityManager_iface; } ;
typedef int IUnknown ;
typedef int IClassFactoryEx ;
typedef int IClassFactory ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef int CLSID ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int *,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,int ,int *,int,int *,int,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static IUnknown *FUNC_14(HTMLDocumentNode *VAR_8, nsIDOMHTMLElement *VAR_9, CLSID *VAR_10)
{
    IClassFactoryEx *VAR_11;
    IClassFactory *VAR_12;
    IUnknown *VAR_13;
    DWORD VAR_14;
    HRESULT VAR_15;

    if(!FUNC_13(VAR_9, VAR_10)) {
        FUNC_10("Could not determine element CLSID\n");
        return ((void*)0);
    }

    FUNC_9("clsid %s\n", FUNC_12(VAR_10));

    VAR_14 = 0;
    VAR_15 = FUNC_7(&VAR_8->IInternetHostSecurityManager_iface,
            VAR_6, (BYTE*)&VAR_14, sizeof(VAR_14), (BYTE*)VAR_10, sizeof(GUID), 0, 0);
    if(FUNC_1(VAR_15) || VAR_14 != VAR_7) {
        FUNC_10("ProcessUrlAction returned %08x %x\n", VAR_15, VAR_14);
        return ((void*)0);
    }

    VAR_15 = FUNC_0(VAR_10, VAR_0|VAR_1, ((void*)0), &VAR_2, (void**)&VAR_12);
    if(VAR_15 == VAR_5)
        FUNC_11(VAR_8->window, VAR_9);
    if(FUNC_1(VAR_15))
        return ((void*)0);

    VAR_15 = FUNC_5(VAR_12, &VAR_3, (void**)&VAR_11);
    if(FUNC_8(VAR_15)) {
        FUNC_2("Use IClassFactoryEx\n");
        FUNC_3(VAR_11);
    }

    VAR_15 = FUNC_4(VAR_12, ((void*)0), &VAR_4, (void**)&VAR_13);
    FUNC_6(VAR_12);
    if(FUNC_1(VAR_15))
        return ((void*)0);

    return VAR_13;
}
