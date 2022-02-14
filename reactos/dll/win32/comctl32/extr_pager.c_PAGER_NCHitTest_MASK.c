
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hwndSelf; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_2 (const PAGER_INFO* VAR_2, INT VAR_3, INT VAR_4)
{
    POINT VAR_5;
    INT VAR_6;

    VAR_5.x = VAR_3;
    VAR_5.y = VAR_4;

    FUNC_1 (VAR_2->hwndSelf, &VAR_5);
    VAR_6 = FUNC_0(VAR_2, &VAR_5);

    return (VAR_6 < 0) ? VAR_1 : VAR_0;
}
