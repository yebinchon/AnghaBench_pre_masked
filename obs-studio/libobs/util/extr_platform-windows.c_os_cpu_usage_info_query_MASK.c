
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union time_data {scalar_t__ val; int ft; } ;
struct TYPE_8__ {scalar_t__ val; } ;
struct TYPE_7__ {scalar_t__ val; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_9__ {TYPE_3__ last_user_time; TYPE_2__ last_sys_time; TYPE_1__ last_time; scalar_t__ core_count; } ;
typedef TYPE_4__ os_cpu_usage_info_t ;
typedef int FILETIME ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;

double FUNC_3(os_cpu_usage_info_t *VAR_0)
{
 union time_data VAR_1, VAR_2, VAR_3;
 FILETIME VAR_4;
 double VAR_5;

 if (!VAR_0)
  return 0.0;

 FUNC_2(&VAR_1.ft);
 FUNC_1(FUNC_0(), &VAR_4, &VAR_4, &VAR_2.ft,
   &VAR_3.ft);

 VAR_5 = (double)(VAR_2.val - VAR_0->last_sys_time.val +
      (VAR_3.val - VAR_0->last_user_time.val));
 VAR_5 /= (double)(VAR_1.val - VAR_0->last_time.val);
 VAR_5 /= (double)VAR_0->core_count;

 VAR_0->last_time.val = VAR_1.val;
 VAR_0->last_sys_time.val = VAR_2.val;
 VAR_0->last_user_time.val = VAR_3.val;

 return VAR_5 * 100.0;
}
