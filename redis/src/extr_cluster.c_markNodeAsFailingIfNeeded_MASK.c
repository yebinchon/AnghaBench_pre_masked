
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int name; int fail_time; int flags; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_7 (int ,char*,int ) ;

void FUNC_8(clusterNode *VAR_7) {
    int VAR_8;
    int VAR_9 = (VAR_6.cluster->size / 2) + 1;

    if (!FUNC_6(VAR_7)) return;
    if (FUNC_4(VAR_7)) return;

    VAR_8 = FUNC_1(VAR_7);

    if (FUNC_5(VAR_5)) VAR_8++;
    if (VAR_8 < VAR_9) return;

    FUNC_7(VAR_4,
        "Marking node %.40s as failing (quorum reached).", VAR_7->name);


    VAR_7->flags &= ~VAR_1;
    VAR_7->flags |= VAR_0;
    VAR_7->fail_time = FUNC_3();



    if (FUNC_5(VAR_5)) FUNC_2(VAR_7->name);
    FUNC_0(VAR_3|VAR_2);
}
