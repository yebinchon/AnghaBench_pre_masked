
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_11__ {scalar_t__ cluster_enabled; } ;
struct TYPE_10__ {int ok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,long*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,long) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_4(client *VAR_4) {
    long VAR_5;

    if (FUNC_2(VAR_4, VAR_4->argv[1], &VAR_5,
        "invalid DB index") != VAR_1)
        return;

    if (VAR_2.cluster_enabled && VAR_5 != 0) {
        FUNC_1(VAR_4,"SELECT is not allowed in cluster mode");
        return;
    }
    if (FUNC_3(VAR_4,VAR_5) == VAR_0) {
        FUNC_1(VAR_4,"DB index is out of range");
    } else {
        FUNC_0(VAR_4,VAR_3.ok);
    }
}
