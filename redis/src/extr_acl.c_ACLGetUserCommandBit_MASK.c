
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* allowed_commands; } ;
typedef TYPE_1__ user ;
typedef size_t uint64_t ;


 scalar_t__ FUNC_0 (unsigned long,size_t*,size_t*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(user *VAR_1, unsigned long VAR_2) {
    uint64_t VAR_3, VAR_4;
    if (FUNC_0(VAR_2,&VAR_3,&VAR_4) == VAR_0) return 0;
    return (VAR_1->allowed_commands[VAR_3] & VAR_4) != 0;
}
