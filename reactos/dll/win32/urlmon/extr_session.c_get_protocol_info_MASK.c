
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cf; int urlmon; } ;
typedef TYPE_1__ name_space ;
typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int IInternetProtocolInfo ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int *,void**) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *,int **) ;
 int VAR_2 ;

IInternetProtocolInfo *FUNC_11(LPCWSTR VAR_3)
{
    IInternetProtocolInfo *VAR_4 = ((void*)0);
    IClassFactory *VAR_5;
    name_space *VAR_6;
    WCHAR VAR_7[64];
    DWORD VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_3, VAR_1, 0, VAR_7, FUNC_0(VAR_7), &VAR_8, 0);
    if(FUNC_3(VAR_9) || !VAR_8)
        return ((void*)0);

    FUNC_2(&VAR_2);

    VAR_6 = FUNC_9(VAR_7);
    if(VAR_6 && !VAR_6->urlmon) {
        VAR_9 = FUNC_5(VAR_6->cf, &VAR_0, (void**)&VAR_4);
        if(FUNC_3(VAR_9))
            VAR_9 = FUNC_4(VAR_6->cf, ((void*)0), &VAR_0, (void**)&VAR_4);
    }

    FUNC_7(&VAR_2);

    if(VAR_6 && FUNC_8(VAR_9))
        return VAR_4;

    VAR_9 = FUNC_10(VAR_7, VAR_8, ((void*)0), &VAR_5);
    if(FUNC_3(VAR_9))
        return ((void*)0);

    VAR_9 = FUNC_5(VAR_5, &VAR_0, (void**)&VAR_4);
    if(FUNC_3(VAR_9))
        FUNC_4(VAR_5, ((void*)0), &VAR_0, (void**)&VAR_4);
    FUNC_6(VAR_5);

    return VAR_4;
}
