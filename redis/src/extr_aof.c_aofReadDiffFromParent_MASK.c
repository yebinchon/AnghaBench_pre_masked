
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int buf ;
struct TYPE_2__ {int aof_child_diff; int aof_pipe_read_data_from_parent; } ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 TYPE_1__ VAR_0 ;

ssize_t FUNC_2(void) {
    char VAR_1[65536];
    ssize_t VAR_2, VAR_3 = 0;

    while ((VAR_2 =
            FUNC_0(VAR_0.aof_pipe_read_data_from_parent,VAR_1,sizeof(VAR_1))) > 0) {
        VAR_0.aof_child_diff = FUNC_1(VAR_0.aof_child_diff,VAR_1,VAR_2);
        VAR_3 += VAR_2;
    }
    return VAR_3;
}
