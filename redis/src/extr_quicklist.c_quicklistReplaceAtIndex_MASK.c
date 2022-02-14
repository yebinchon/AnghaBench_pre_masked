
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* node; int zi; } ;
typedef TYPE_1__ quicklistEntry ;
typedef int quicklist ;
struct TYPE_6__ {int zl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,long,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,void*,int) ;

int FUNC_6(quicklist *VAR_0, long VAR_1, void *VAR_2,
                            int VAR_3) {
    quicklistEntry VAR_4;
    if (FUNC_0(FUNC_2(VAR_0, VAR_1, &VAR_4))) {

        VAR_4.node->zl = FUNC_4(VAR_4.node->zl, &VAR_4.zi);
        VAR_4.node->zl = FUNC_5(VAR_4.node->zl, VAR_4.zi, VAR_2, VAR_3);
        FUNC_3(VAR_4.node);
        FUNC_1(VAR_0, VAR_4.node);
        return 1;
    } else {
        return 0;
    }
}
