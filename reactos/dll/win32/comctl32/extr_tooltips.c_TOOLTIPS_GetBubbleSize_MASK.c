
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cy; int cx; } ;
struct TYPE_6__ {scalar_t__ cbSize; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef int TOOLTIPS_INFO ;
typedef TYPE_2__ SIZE ;
typedef int LRESULT ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 (int const*,TYPE_1__ const*) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4 (const TOOLTIPS_INFO *VAR_2, const TTTOOLINFOW *VAR_3)
{
    INT VAR_4;
    SIZE VAR_5;

    if (VAR_3 == ((void*)0))
 return VAR_0;
    if (VAR_3->cbSize < VAR_1)
 return VAR_0;

    VAR_4 = FUNC_2 (VAR_2, VAR_3);
    if (VAR_4 == -1) return 0;

    FUNC_3("tool %d\n", VAR_4);

    FUNC_1 (VAR_2, &VAR_5);
    FUNC_3("size %d x %d\n", VAR_5.cx, VAR_5.cy);

    return FUNC_0(VAR_5.cx, VAR_5.cy);
}
