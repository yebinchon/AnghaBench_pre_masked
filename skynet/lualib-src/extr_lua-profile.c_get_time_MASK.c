
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_info_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_2__ {int seconds; int microseconds; } ;
struct task_thread_times_info {TYPE_1__ user_time; } ;
typedef int mach_msg_type_number_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static double
FUNC_3() {

 struct timespec VAR_6;
 FUNC_0(VAR_0, &VAR_6);

 int VAR_7 = VAR_6.tv_sec & 0xffff;
 int VAR_8 = VAR_6.tv_nsec;

 return (double)VAR_7 + (double)VAR_8 / VAR_3;
}
