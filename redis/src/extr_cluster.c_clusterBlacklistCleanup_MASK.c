
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_4__ {scalar_t__ unixtime; TYPE_1__* cluster; } ;
struct TYPE_3__ {int nodes_black_list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_6(void) {
    dictIterator *VAR_1;
    dictEntry *VAR_2;

    VAR_1 = FUNC_2(VAR_0.cluster->nodes_black_list);
    while((VAR_2 = FUNC_4(VAR_1)) != ((void*)0)) {
        int64_t VAR_3 = FUNC_3(VAR_2);

        if (VAR_3 < VAR_0.unixtime)
            FUNC_0(VAR_0.cluster->nodes_black_list,FUNC_1(VAR_2));
    }
    FUNC_5(VAR_1);
}
