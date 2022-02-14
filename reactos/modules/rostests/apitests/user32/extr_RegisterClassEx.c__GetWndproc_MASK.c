
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * WNDPROC ;
struct TYPE_3__ {int member_0; int * lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef int LPCWSTR ;
typedef int HINSTANCE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static WNDPROC FUNC_1(LPCWSTR VAR_0, HINSTANCE VAR_1)
{
    WNDCLASSEXW VAR_2 = {sizeof(WNDCLASSEXW)};
    BOOL VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
    return VAR_3 ? VAR_2.lpfnWndProc : ((void*)0);
}
