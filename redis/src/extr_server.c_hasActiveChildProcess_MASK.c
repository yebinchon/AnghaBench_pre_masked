
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdb_child_pid; int aof_child_pid; int module_child_pid; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0() {
    return VAR_0.rdb_child_pid != -1 ||
           VAR_0.aof_child_pid != -1 ||
           VAR_0.module_child_pid != -1;
}
