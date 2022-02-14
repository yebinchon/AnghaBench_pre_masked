
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aof_pipe_read_ack_from_parent; int aof_pipe_write_ack_to_child; int aof_pipe_read_ack_from_child; int aof_pipe_write_ack_to_parent; int aof_pipe_read_data_from_parent; int aof_pipe_write_data_to_child; int el; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;

void FUNC_2(void) {
    FUNC_0(VAR_2.el,VAR_2.aof_pipe_read_ack_from_child,VAR_0);
    FUNC_0(VAR_2.el,VAR_2.aof_pipe_write_data_to_child,VAR_1);
    FUNC_1(VAR_2.aof_pipe_write_data_to_child);
    FUNC_1(VAR_2.aof_pipe_read_data_from_parent);
    FUNC_1(VAR_2.aof_pipe_write_ack_to_parent);
    FUNC_1(VAR_2.aof_pipe_read_ack_from_child);
    FUNC_1(VAR_2.aof_pipe_write_ack_to_child);
    FUNC_1(VAR_2.aof_pipe_read_ack_from_parent);
}
