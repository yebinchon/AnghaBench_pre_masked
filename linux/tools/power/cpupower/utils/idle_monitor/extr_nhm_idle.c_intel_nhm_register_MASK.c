
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_monitor {int name; int name_len; } ;
struct TYPE_2__ {scalar_t__ vendor; int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 void** VAR_6 ;
 struct cpuidle_monitor VAR_7 ;
 void* VAR_8 ;
 void** VAR_9 ;
 int FUNC_1 (int ) ;

struct cpuidle_monitor *FUNC_2(void)
{
 int VAR_10;

 if (VAR_5.vendor != VAR_3)
  return ((void*)0);

 if (!(VAR_5.caps & VAR_1))
  return ((void*)0);

 if (!(VAR_5.caps & VAR_0))
  return ((void*)0);


 VAR_8 = FUNC_0(VAR_4, sizeof(int));
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9[VAR_10] = FUNC_0(VAR_4,
     sizeof(unsigned long long));
  VAR_6[VAR_10] = FUNC_0(VAR_4,
     sizeof(unsigned long long));
 }

 VAR_7.name_len = FUNC_1(VAR_7.name);
 return &VAR_7;
}
