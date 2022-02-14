
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {scalar_t__ reserved; TYPE_1__ root_item; } ;
typedef TYPE_2__ root ;
struct TYPE_8__ {scalar_t__ RequestorMode; } ;
typedef TYPE_3__* PIRP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) __inline static bool FUNC_1(root* VAR_2, PIRP VAR_3) {
    if (!(VAR_2->root_item.flags & VAR_0))
        return 0;

    if (!VAR_2->reserved)
        return 1;

    return (!VAR_3 || VAR_3->RequestorMode == VAR_1) && FUNC_0() != VAR_2->reserved ? 1 : 0;
}
