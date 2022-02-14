
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {scalar_t__ cluster_enabled; } ;
struct TYPE_8__ {int ok; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_2(client *VAR_3) {
    if (VAR_1.cluster_enabled == 0) {
        FUNC_1(VAR_3,"This instance has cluster support disabled");
        return;
    }
    VAR_3->flags |= VAR_0;
    FUNC_0(VAR_3,VAR_2.ok);
}
