
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dbnum; TYPE_1__* db; } ;
struct TYPE_3__ {int dict; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

long long FUNC_1() {
    long long VAR_1 = 0;
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0.dbnum; VAR_2++) {
        VAR_1 += FUNC_0(VAR_0.db[VAR_2].dict);
    }
    return VAR_1;
}
