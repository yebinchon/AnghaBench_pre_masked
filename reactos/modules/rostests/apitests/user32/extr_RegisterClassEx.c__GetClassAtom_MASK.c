
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef int LPCWSTR ;
typedef int HINSTANCE ;
typedef int ATOM ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static ATOM FUNC_1(LPCWSTR VAR_0, HINSTANCE VAR_1)
{
    WNDCLASSEXW VAR_2 = {sizeof(WNDCLASSEXW)};
    return (ATOM)FUNC_0(VAR_1, VAR_0, &VAR_2);
}
