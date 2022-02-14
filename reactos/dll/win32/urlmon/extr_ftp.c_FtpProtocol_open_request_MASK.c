
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
typedef TYPE_2__ FtpProtocol ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,scalar_t__) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(Protocol *VAR_5, IUri *VAR_6, DWORD VAR_7,
        HINTERNET VAR_8, IInternetBindInfo *VAR_9)
{
    FtpProtocol *VAR_10 = FUNC_6(VAR_5);
    BSTR VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_2(VAR_6, &VAR_11);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_10->base.request = FUNC_3(VAR_8, VAR_11, ((void*)0), 0,
            VAR_7|VAR_2|VAR_3,
            (DWORD_PTR)&VAR_10->base);
    FUNC_4(VAR_11);
    if (!VAR_10->base.request && FUNC_1() != VAR_0) {
        FUNC_5("InternetOpenUrl failed: %d\n", FUNC_1());
        return VAR_1;
    }

    return VAR_4;
}
