
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int request; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int Protocol ;
typedef int IUri ;
typedef int IInternetBindInfo ;
typedef int HRESULT ;
typedef int HINTERNET ;
typedef TYPE_2__ GopherProtocol ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,scalar_t__) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(Protocol *VAR_3, IUri *VAR_4, DWORD VAR_5,
        HINTERNET VAR_6, IInternetBindInfo *VAR_7)
{
    GopherProtocol *VAR_8 = FUNC_6(VAR_3);
    BSTR VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_2(VAR_4, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_8->base.request = FUNC_3(VAR_6, VAR_9, ((void*)0), 0,
            VAR_5, (DWORD_PTR)&VAR_8->base);
    FUNC_4(VAR_9);
    if (!VAR_8->base.request && FUNC_1() != VAR_0) {
        FUNC_5("InternetOpenUrl failed: %d\n", FUNC_1());
        return VAR_1;
    }

    return VAR_2;
}
