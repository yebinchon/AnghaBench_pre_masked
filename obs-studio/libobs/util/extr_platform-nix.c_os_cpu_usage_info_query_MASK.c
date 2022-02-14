
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tms {scalar_t__ tms_stime; scalar_t__ tms_utime; } ;
struct TYPE_3__ {scalar_t__ last_cpu_time; scalar_t__ last_sys_time; scalar_t__ last_user_time; scalar_t__ core_count; } ;
typedef TYPE_1__ os_cpu_usage_info_t ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 (struct tms*) ;

double FUNC_1(os_cpu_usage_info_t *VAR_0)
{
 struct tms VAR_1;
 clock_t VAR_2;
 double VAR_3;

 if (!VAR_0)
  return 0.0;

 VAR_2 = FUNC_0(&VAR_1);
 if (VAR_2 <= VAR_0->last_cpu_time ||
     VAR_1.tms_stime < VAR_0->last_sys_time ||
     VAR_1.tms_utime < VAR_0->last_user_time)
  return 0.0;

 VAR_3 = (double)(VAR_1.tms_stime - VAR_0->last_sys_time +
      (VAR_1.tms_utime - VAR_0->last_user_time));
 VAR_3 /= (double)(VAR_2 - VAR_0->last_cpu_time);
 VAR_3 /= (double)VAR_0->core_count;

 VAR_0->last_cpu_time = VAR_2;
 VAR_0->last_sys_time = VAR_1.tms_stime;
 VAR_0->last_user_time = VAR_1.tms_utime;

 return VAR_3 * 100.0;
}
