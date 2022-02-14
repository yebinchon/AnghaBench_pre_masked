
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tms {int tms_utime; int tms_stime; } ;
struct os_cpu_usage_info {int core_count; int last_user_time; int last_sys_time; int last_cpu_time; } ;
typedef struct os_cpu_usage_info os_cpu_usage_info_t ;


 int VAR_0 ;
 struct os_cpu_usage_info* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tms*) ;

os_cpu_usage_info_t *FUNC_3(void)
{
 struct os_cpu_usage_info *VAR_1 = FUNC_0(sizeof(*VAR_1));
 struct tms VAR_2;

 VAR_1->last_cpu_time = FUNC_2(&VAR_2);
 VAR_1->last_sys_time = VAR_2.tms_stime;
 VAR_1->last_user_time = VAR_2.tms_utime;
 VAR_1->core_count = FUNC_1(VAR_0);
 return VAR_1;
}
