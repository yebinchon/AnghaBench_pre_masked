
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WNDPROC ;
struct TYPE_3__ {int member_0; int hInstance; int lpszClassName; int member_2; int member_1; } ;
typedef TYPE_1__ WNDCLASSEXA ;
typedef int WNDCLASSEX ;
typedef int UINT ;
typedef int LPCSTR ;
typedef int HINSTANCE ;
typedef int ATOM ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static ATOM FUNC_1(LPCSTR VAR_0, HINSTANCE VAR_1, UINT VAR_2, WNDPROC VAR_3)
{
    WNDCLASSEXA VAR_4 = {sizeof(WNDCLASSEX), VAR_2, VAR_3};
    VAR_4.lpszClassName = VAR_0;
    VAR_4.hInstance = VAR_1;
    return FUNC_0(&VAR_4);
}
