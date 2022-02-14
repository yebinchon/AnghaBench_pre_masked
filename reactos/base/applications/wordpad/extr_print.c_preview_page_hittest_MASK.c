
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_6__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_9__ {int pages_shown; int page; TYPE_2__ spacing; TYPE_1__ bmScaledSize; } ;
struct TYPE_8__ {scalar_t__ right; scalar_t__ left; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_3__ RECT ;
typedef int POINT ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static int FUNC_2(POINT VAR_1)
{
    RECT VAR_2;
    VAR_2.left = VAR_0.spacing.cx;
    VAR_2.right = VAR_2.left + VAR_0.bmScaledSize.cx;
    VAR_2.top = VAR_0.spacing.cy;
    VAR_2.bottom = VAR_2.top + VAR_0.bmScaledSize.cy;
    if (FUNC_0(&VAR_2, VAR_1))
        return 1;

    if (VAR_0.pages_shown <= 1)
        return 0;

    VAR_2.left += VAR_0.bmScaledSize.cx + VAR_0.spacing.cx;
    VAR_2.right += VAR_0.bmScaledSize.cx + VAR_0.spacing.cx;
    if (FUNC_0(&VAR_2, VAR_1))
        return FUNC_1(VAR_0.page) ? 1 : 2;

    return 0;
}
