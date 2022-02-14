
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uInternalFlags; int hwnd; scalar_t__ uId; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef int HWND ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1 (const TTTOOL_INFO *VAR_3)
{

    if (VAR_3->uInternalFlags & VAR_2)
        FUNC_0(VAR_3->uInternalFlags & VAR_1 ? (HWND)VAR_3->uId : VAR_3->hwnd,
            VAR_0, 1, 0);
}
