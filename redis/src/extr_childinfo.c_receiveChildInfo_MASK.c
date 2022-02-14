
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ process_type; int cow_size; } ;
struct TYPE_3__ {int* child_info_pipe; TYPE_2__ child_info_data; int stat_module_cow_bytes; int stat_aof_cow_bytes; int stat_rdb_cow_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,TYPE_2__*,scalar_t__) ;
 TYPE_1__ VAR_4 ;

void FUNC_1(void) {
    if (VAR_4.child_info_pipe[0] == -1) return;
    ssize_t VAR_5 = sizeof(VAR_4.child_info_data);
    if (FUNC_0(VAR_4.child_info_pipe[0],&VAR_4.child_info_data,VAR_5) == VAR_5 &&
        VAR_4.child_info_data.magic == VAR_0)
    {
        if (VAR_4.child_info_data.process_type == VAR_3) {
            VAR_4.stat_rdb_cow_bytes = VAR_4.child_info_data.cow_size;
        } else if (VAR_4.child_info_data.process_type == VAR_1) {
            VAR_4.stat_aof_cow_bytes = VAR_4.child_info_data.cow_size;
        } else if (VAR_4.child_info_data.process_type == VAR_2) {
            VAR_4.stat_module_cow_bytes = VAR_4.child_info_data.cow_size;
        }
    }
}
