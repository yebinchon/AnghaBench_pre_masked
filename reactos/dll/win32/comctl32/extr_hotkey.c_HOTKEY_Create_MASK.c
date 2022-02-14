
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hwndParent; } ;
struct TYPE_6__ {int hwndNotify; } ;
typedef int LRESULT ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef TYPE_2__ CREATESTRUCTW ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_2 (HOTKEY_INFO *VAR_1, const CREATESTRUCTW *VAR_2)
{
    VAR_1->hwndNotify = VAR_2->hwndParent;

    FUNC_1(VAR_1, FUNC_0(VAR_0), 0);

    return 0;
}
