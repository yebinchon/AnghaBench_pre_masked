
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* allowed_commands; int flags; } ;
typedef TYPE_1__ user ;
typedef size_t uint64_t ;


 scalar_t__ FUNC_0 (unsigned long,size_t*,size_t*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_1(user *VAR_2, unsigned long VAR_3, int VAR_4) {
    uint64_t VAR_5, VAR_6;
    if (VAR_4 == 0) VAR_2->flags &= ~VAR_1;
    if (FUNC_0(VAR_3,&VAR_5,&VAR_6) == VAR_0) return;
    if (VAR_4)
        VAR_2->allowed_commands[VAR_5] |= VAR_6;
    else
        VAR_2->allowed_commands[VAR_5] &= ~VAR_6;
}
