
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lines; scalar_t__ bpcount; int* bp; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_2) {
    if (VAR_2 <= 0 || VAR_2 > VAR_1.lines) return 0;
    if (!FUNC_0(VAR_2) && VAR_1.bpcount != VAR_0) {
        VAR_1.bp[VAR_1.bpcount++] = VAR_2;
        return 1;
    }
    return 0;
}
