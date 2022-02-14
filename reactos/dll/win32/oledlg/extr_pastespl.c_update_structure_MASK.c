
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* ps; } ;
typedef TYPE_2__ ps_struct_t ;
struct TYPE_7__ {int dwScratchSpace; } ;
struct TYPE_5__ {int dwFlags; int fLink; int nSelectedIndex; } ;
typedef TYPE_3__ OLEUIPASTEENTRYW ;
typedef int LONG ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(HWND VAR_4, ps_struct_t *VAR_5)
{
    LONG VAR_6 = FUNC_1(FUNC_0(VAR_4, VAR_0), VAR_1, 0, 0);
    if(VAR_6 != -1)
    {
        OLEUIPASTEENTRYW *VAR_7;
        VAR_7 = (OLEUIPASTEENTRYW *)FUNC_1(FUNC_0(VAR_4, VAR_0), VAR_2, VAR_6, 0);
        VAR_5->ps->nSelectedIndex = VAR_7->dwScratchSpace;
    }
    VAR_5->ps->dwFlags = VAR_5->flags;
    VAR_5->ps->fLink = (VAR_5->flags & VAR_3) != 0;
}
