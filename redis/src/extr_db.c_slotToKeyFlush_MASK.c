
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int slots_keys_count; int slots_to_keys; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;

void FUNC_3(void) {
    FUNC_1(VAR_0.cluster->slots_to_keys);
    VAR_0.cluster->slots_to_keys = FUNC_2();
    FUNC_0(VAR_0.cluster->slots_keys_count,0,
           sizeof(VAR_0.cluster->slots_keys_count));
}
