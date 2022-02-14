
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int counter; int timer; int uri; } ;
typedef TYPE_1__ install_ctx_t ;
typedef int WPARAM ;
typedef int WCHAR ;
typedef int HWND ;
typedef int HRESULT ;
typedef int BSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_9(HWND VAR_7, install_ctx_t *VAR_8)
{
    BSTR VAR_9;
    HRESULT VAR_10;

    if(!FUNC_5(VAR_7, VAR_6, VAR_8))
        return VAR_0;

    VAR_10 = FUNC_1(VAR_8->uri, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_0;

    FUNC_4(VAR_7, VAR_2, VAR_9);
    FUNC_7(VAR_9);

    FUNC_3(VAR_7, VAR_1, VAR_4,
            (WPARAM)FUNC_2(0, (const WCHAR*)VAR_3), 0);

    VAR_8->counter = 4;
    FUNC_8(VAR_8, VAR_7);
    VAR_8->timer = FUNC_6(VAR_7, 1, 1000, ((void*)0));
    return VAR_5;
}
