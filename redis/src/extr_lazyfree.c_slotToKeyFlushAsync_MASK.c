
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numele; } ;
typedef TYPE_2__ rax ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int slots_keys_count; TYPE_2__* slots_to_keys; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int *,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_2__* FUNC_3 () ;
 TYPE_3__ VAR_2 ;

void FUNC_4(void) {
    rax *VAR_3 = VAR_2.cluster->slots_to_keys;

    VAR_2.cluster->slots_to_keys = FUNC_3();
    FUNC_2(VAR_2.cluster->slots_keys_count,0,
           sizeof(VAR_2.cluster->slots_keys_count));
    FUNC_0(VAR_1,VAR_3->numele);
    FUNC_1(VAR_0,((void*)0),((void*)0),VAR_3);
}
