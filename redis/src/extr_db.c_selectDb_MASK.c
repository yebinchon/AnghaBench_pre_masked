
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int dbnum; int * db; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

int FUNC_0(client *VAR_3, int VAR_4) {
    if (VAR_4 < 0 || VAR_4 >= VAR_2.dbnum)
        return VAR_0;
    VAR_3->db = &VAR_2.db[VAR_4];
    return VAR_1;
}
