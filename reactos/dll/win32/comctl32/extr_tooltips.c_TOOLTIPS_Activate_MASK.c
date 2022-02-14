
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nCurrentTool; int bActive; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_2 (TOOLTIPS_INFO *VAR_0, BOOL VAR_1)
{
    VAR_0->bActive = VAR_1;

    FUNC_1("activate %d\n", VAR_1);

    if (!(VAR_0->bActive) && (VAR_0->nCurrentTool != -1))
 FUNC_0 (VAR_0);

    return 0;
}
