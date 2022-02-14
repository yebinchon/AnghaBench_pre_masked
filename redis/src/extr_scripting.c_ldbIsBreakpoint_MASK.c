
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpcount; int* bp; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(int VAR_1) {
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0.bpcount; VAR_2++)
        if (VAR_0.bp[VAR_2] == VAR_1) return 1;
    return 0;
}
