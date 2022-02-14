
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {int member_2; int right; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_1)
{
    RECT VAR_2 = {0, 0, 103, 0};
    FUNC_0(VAR_1, &VAR_2);

    FUNC_1(VAR_1, VAR_0, (WPARAM)1, (LPARAM)&VAR_2.right);
}
