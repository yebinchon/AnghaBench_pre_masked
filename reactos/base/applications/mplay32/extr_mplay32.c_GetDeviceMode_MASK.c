
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwReturn; int dwItem; } ;
typedef TYPE_1__ MCI_STATUS_PARMS ;
typedef scalar_t__ MCIERROR ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static DWORD
FUNC_2(HWND VAR_6)
{
    MCIERROR VAR_7;
    MCI_STATUS_PARMS VAR_8;

    VAR_8.dwItem = VAR_3;
    VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_4 | VAR_2, (DWORD_PTR)&VAR_8);
    if (VAR_7 != 0)
    {
        FUNC_0(VAR_6, VAR_7);
        return VAR_0;
    }

    return VAR_8.dwReturn;
}
