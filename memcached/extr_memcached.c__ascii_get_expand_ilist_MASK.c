
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int item ;
struct TYPE_4__ {int isize; int ** ilist; } ;
typedef TYPE_1__ conn ;
struct TYPE_5__ {int malloc_fails; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int ** FUNC_2 (int **,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline int FUNC_3(conn *VAR_1, int VAR_2) {
    if (VAR_2 >= VAR_1->isize) {
        item **VAR_3 = FUNC_2(VAR_1->ilist, sizeof(item *) * VAR_1->isize * 2);
        if (VAR_3) {
            VAR_1->isize *= 2;
            VAR_1->ilist = VAR_3;
        } else {
            FUNC_0();
            VAR_0.malloc_fails++;
            FUNC_1();
            return -1;
        }
    }
    return 0;
}
