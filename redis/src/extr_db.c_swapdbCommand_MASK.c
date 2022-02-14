
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int dirty; scalar_t__ cluster_enabled; } ;
struct TYPE_9__ {int ok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (long,long) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,long*,char*) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_4(client *VAR_4) {
    long VAR_5, VAR_6;


    if (VAR_2.cluster_enabled) {
        FUNC_1(VAR_4,"SWAPDB is not allowed in cluster mode");
        return;
    }


    if (FUNC_3(VAR_4, VAR_4->argv[1], &VAR_5,
        "invalid first DB index") != VAR_1)
        return;

    if (FUNC_3(VAR_4, VAR_4->argv[2], &VAR_6,
        "invalid second DB index") != VAR_1)
        return;


    if (FUNC_2(VAR_5,VAR_6) == VAR_0) {
        FUNC_1(VAR_4,"DB index is out of range");
        return;
    } else {
        VAR_2.dirty++;
        FUNC_0(VAR_4,VAR_3.ok);
    }
}
