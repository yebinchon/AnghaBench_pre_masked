
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numslaves; TYPE_2__** slaves; } ;
typedef TYPE_1__ clusterNode ;
struct TYPE_6__ {long long repl_offset; TYPE_1__* slaveof; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 long long FUNC_2 () ;
 int FUNC_3 (int ) ;

int FUNC_4(void) {
    long long VAR_1;
    int VAR_2, VAR_3 = 0;
    clusterNode *VAR_4;

    FUNC_3(FUNC_1(VAR_0));
    VAR_4 = VAR_0->slaveof;
    if (VAR_4 == ((void*)0)) return 0;

    VAR_1 = FUNC_2();
    for (VAR_2 = 0; VAR_2 < VAR_4->numslaves; VAR_2++)
        if (VAR_4->slaves[VAR_2] != VAR_0 &&
            !FUNC_0(VAR_4->slaves[VAR_2]) &&
            VAR_4->slaves[VAR_2]->repl_offset > VAR_1) VAR_3++;
    return VAR_3;
}
