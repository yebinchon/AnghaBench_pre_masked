
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ WNDCLASSEXA ;
typedef int WNDCLASSEX ;
typedef int LPCSTR ;
typedef int HINSTANCE ;
typedef int ATOM ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static ATOM FUNC_1(LPCSTR VAR_0, HINSTANCE VAR_1)
{
    WNDCLASSEXA VAR_2 = {sizeof(WNDCLASSEX)};
    return (ATOM)FUNC_0(VAR_1, VAR_0, &VAR_2);
}
