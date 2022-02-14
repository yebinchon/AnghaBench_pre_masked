
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ robj ;
typedef int client ;
struct TYPE_5__ {int wrongtypeerr; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(client *VAR_1, robj *VAR_2, int VAR_3) {
    if (VAR_2->type != VAR_3) {
        FUNC_0(VAR_1,VAR_0.wrongtypeerr);
        return 1;
    }
    return 0;
}
