
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lParam; int mask; } ;
typedef TYPE_1__ TCITEMW ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HCERTSTORE ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HCERTSTORE FUNC_1(HWND VAR_2, int VAR_3)
{
    TCITEMW VAR_4;

    VAR_4.mask = VAR_0;
    FUNC_0(VAR_2, VAR_1, VAR_3, (LPARAM)&VAR_4);
    return (HCERTSTORE)VAR_4.lParam;
}
