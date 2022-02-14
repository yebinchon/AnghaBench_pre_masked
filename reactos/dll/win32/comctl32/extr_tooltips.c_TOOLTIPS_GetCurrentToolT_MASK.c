
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nCurrentTool; } ;
struct TYPE_7__ {scalar_t__ cbSize; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int,TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_1 (const TOOLTIPS_INFO *VAR_2, TTTOOLINFOW *VAR_3, BOOL VAR_4)
{
    if (VAR_3) {
        if (VAR_3->cbSize < VAR_1)
            return VAR_0;

        if (VAR_2->nCurrentTool != -1)
            FUNC_0 (VAR_2, VAR_2->nCurrentTool, VAR_3, VAR_4);
    }

    return VAR_2->nCurrentTool != -1;
}
