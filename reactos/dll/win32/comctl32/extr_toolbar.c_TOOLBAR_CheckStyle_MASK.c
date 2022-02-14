
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; int hwndSelf; } ;
typedef TYPE_1__ TOOLBAR_INFO ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (const TOOLBAR_INFO *VAR_1)
{
    if (VAR_1->dwStyle & VAR_0)
 FUNC_0("[%p] TBSTYLE_REGISTERDROP not implemented\n", VAR_1->hwndSelf);
}
