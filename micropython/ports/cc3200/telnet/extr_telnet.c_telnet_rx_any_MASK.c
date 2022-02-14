
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ n_sd; scalar_t__ rxRindex; scalar_t__ rxWindex; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

bool FUNC_0 (void) {
    return (VAR_1.n_sd > 0) ? (VAR_1.rxRindex != VAR_1.rxWindex &&
            VAR_1.state == VAR_0) : 0;
}
