
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int manager; } ;
typedef TYPE_1__ Unit ;
typedef int ManagerState ;
typedef int CGroupContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static uint64_t FUNC_3(Unit *VAR_1) {
        ManagerState VAR_2 = FUNC_1(VAR_1->manager);
        CGroupContext *VAR_3;

        VAR_3 = FUNC_2(VAR_1);
        return VAR_3 ? FUNC_0(VAR_3, VAR_2) : VAR_0;
}
