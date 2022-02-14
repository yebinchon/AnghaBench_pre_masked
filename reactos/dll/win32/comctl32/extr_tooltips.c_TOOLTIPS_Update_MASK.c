
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nCurrentTool; int hwndSelf; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;

__attribute__((used)) static LRESULT
FUNC_1 (TOOLTIPS_INFO *VAR_0)
{
    if (VAR_0->nCurrentTool != -1)
 FUNC_0 (VAR_0->hwndSelf);

    return 0;
}
