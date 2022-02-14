
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int IOleClientSite_iface; } ;
typedef int LPOLESTR ;
typedef int LPCWSTR ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_1__ DocHost ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *,void**) ;
 int FUNC_6 (int *,int ,int *,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int **) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static HRESULT FUNC_13(DocHost *VAR_3, IMoniker *VAR_4, LPCWSTR VAR_5, IBindCtx *VAR_6,
                              IBindStatusCallback *VAR_7)
{
    IUnknown *VAR_8 = ((void*)0);
    WCHAR *VAR_9;
    HRESULT VAR_10;

    if(VAR_4) {
        FUNC_4(VAR_4);
    }else {
        VAR_10 = FUNC_10(VAR_5, &VAR_4);
        if(FUNC_1(VAR_10))
            return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_4, 0, ((void*)0), &VAR_9);
    if(FUNC_1(VAR_10)) {
        FUNC_2("GetDisplayName failed: %08x\n", VAR_10);
        FUNC_7(VAR_4);
        return VAR_10;
    }

    VAR_10 = FUNC_11(VAR_3, VAR_9);
    FUNC_0(VAR_9);
    if(FUNC_1(VAR_10)) {
        FUNC_7(VAR_4);
        return VAR_10;
    }

    FUNC_3(VAR_6, (LPOLESTR)VAR_1,
                                 (IUnknown*)&VAR_3->IOleClientSite_iface);

    VAR_10 = FUNC_5(VAR_4, VAR_6, ((void*)0), &VAR_0, (void**)&VAR_8);
    if(FUNC_9(VAR_10)) {
        VAR_10 = VAR_2;
        if(VAR_8)
            FUNC_8(VAR_8);
    }else if(FUNC_12(VAR_5)) {
        VAR_10 = VAR_2;
    }else {
        FUNC_2("BindToObject failed: %08x\n", VAR_10);
    }

    FUNC_7(VAR_4);
    return VAR_2;
}
