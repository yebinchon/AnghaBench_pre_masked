
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_monitor {int name; int name_len; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct cpuidle_monitor VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (int ) ;

struct cpuidle_monitor *FUNC_3(void)
{
 if (!(VAR_4.caps & VAR_0))
  return ((void*)0);

 if (FUNC_1())
  return ((void*)0);


 VAR_5 = FUNC_0(VAR_3, sizeof(int));
 VAR_8 = FUNC_0(VAR_3, sizeof(unsigned long long));
 VAR_2 = FUNC_0(VAR_3, sizeof(unsigned long long));
 VAR_6 = FUNC_0(VAR_3, sizeof(unsigned long long));
 VAR_1 = FUNC_0(VAR_3, sizeof(unsigned long long));

 VAR_7.name_len = FUNC_2(VAR_7.name);
 return &VAR_7;
}
