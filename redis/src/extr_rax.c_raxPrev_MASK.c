
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ raxIterator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(raxIterator *VAR_3) {
    if (!FUNC_0(VAR_3,0)) {
        VAR_2 = VAR_0;
        return 0;
    }
    if (VAR_3->flags & VAR_1) {
        VAR_2 = 0;
        return 0;
    }
    return 1;
}
