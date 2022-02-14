
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ age; int evicted; int outofmemory; } ;
typedef TYPE_1__ item_stats_automove ;
struct TYPE_7__ {int evicted; int outofmemory; } ;
struct TYPE_6__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__** VAR_6 ;

void FUNC_2(item_stats_automove *VAR_7) {
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        item_stats_automove *VAR_9 = &VAR_7[VAR_8];


        int VAR_10 = VAR_8 | VAR_1;
        FUNC_0(&VAR_5[VAR_10]);
        VAR_9->outofmemory = VAR_4[VAR_10].outofmemory;
        FUNC_1(&VAR_5[VAR_10]);


        VAR_10 = VAR_8 | VAR_0;
        FUNC_0(&VAR_5[VAR_10]);
        VAR_9->evicted = VAR_4[VAR_10].evicted;
        if (VAR_6[VAR_10]) {
            VAR_9->age = VAR_3 - VAR_6[VAR_10]->time;
        } else {
            VAR_9->age = 0;
        }
        FUNC_1(&VAR_5[VAR_10]);
     }
}
