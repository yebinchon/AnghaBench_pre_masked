
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psz; int flags; } ;
typedef TYPE_1__ LVFINDINFO ;
typedef int LPCTSTR ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_1(HWND VAR_3, LPCTSTR VAR_4)
{
    LVFINDINFO VAR_5;
    int VAR_6;

    VAR_5.flags = VAR_1;
    VAR_5.psz = VAR_4;


    VAR_6 = FUNC_0(VAR_3, -1, &VAR_5);
    if (VAR_6 != -1)
        return VAR_2;

    return VAR_0;
}
