
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int task_info_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {scalar_t__ microseconds; scalar_t__ seconds; } ;
struct task_thread_times_info {TYPE_1__ user_time; } ;
typedef int mach_msg_type_number_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;

uint64_t
FUNC_3(void) {

 struct timespec VAR_6;
 FUNC_0(VAR_0, &VAR_6);

 return (uint64_t)VAR_6.tv_sec * VAR_2 + (uint64_t)VAR_6.tv_nsec / (VAR_3 / VAR_2);
}
