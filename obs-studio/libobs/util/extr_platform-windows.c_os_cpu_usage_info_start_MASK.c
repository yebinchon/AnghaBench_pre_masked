
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ft; } ;
struct TYPE_7__ {int ft; } ;
struct TYPE_6__ {int ft; } ;
struct os_cpu_usage_info {int core_count; TYPE_3__ last_user_time; TYPE_2__ last_sys_time; TYPE_1__ last_time; } ;
typedef struct os_cpu_usage_info os_cpu_usage_info_t ;
struct TYPE_9__ {int dwNumberOfProcessors; } ;
typedef TYPE_4__ SYSTEM_INFO ;
typedef int FILETIME ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 struct os_cpu_usage_info* FUNC_4 (int) ;

os_cpu_usage_info_t *FUNC_5(void)
{
 struct os_cpu_usage_info *VAR_0 = FUNC_4(sizeof(*VAR_0));
 SYSTEM_INFO VAR_1;
 FILETIME VAR_2;

 FUNC_2(&VAR_1);
 FUNC_3(&VAR_0->last_time.ft);
 FUNC_1(FUNC_0(), &VAR_2, &VAR_2,
   &VAR_0->last_sys_time.ft, &VAR_0->last_user_time.ft);
 VAR_0->core_count = VAR_1.dwNumberOfProcessors;

 return VAR_0;
}
