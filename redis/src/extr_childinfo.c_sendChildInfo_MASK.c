
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int process_type; int magic; } ;
struct TYPE_4__ {int* child_info_pipe; TYPE_1__ child_info_data; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,scalar_t__) ;

void FUNC_1(int VAR_2) {
    if (VAR_1.child_info_pipe[1] == -1) return;
    VAR_1.child_info_data.magic = VAR_0;
    VAR_1.child_info_data.process_type = VAR_2;
    ssize_t VAR_3 = sizeof(VAR_1.child_info_data);
    if (FUNC_0(VAR_1.child_info_pipe[1],&VAR_1.child_info_data,VAR_3) != VAR_3) {

    }
}
