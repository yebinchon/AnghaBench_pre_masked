
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_monitor {int hw_states_num; int name; int name_len; } ;
struct TYPE_2__ {scalar_t__ vendor; int family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cpuidle_monitor VAR_3 ;
 int * VAR_4 ;
 void* FUNC_0 (int ,int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 void** VAR_7 ;
 int FUNC_1 () ;
 int * VAR_8 ;
 int * FUNC_2 (int **,int,int) ;
 void** VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

struct cpuidle_monitor *FUNC_5(void)
{
 int VAR_10;

 if (VAR_6.vendor != VAR_2)
  return ((void*)0);

 if (VAR_6.family == 0x14)
  FUNC_4(VAR_3.name, "Fam_14h",
   VAR_1 - 1);
 else if (VAR_6.family == 0x12)
  FUNC_4(VAR_3.name, "Fam_12h",
   VAR_1 - 1);
 else
  return ((void*)0);


 for (VAR_10 = 0; VAR_10 < VAR_0 - 1; VAR_10++) {
  VAR_9[VAR_10] = FUNC_0(VAR_5,
           sizeof(unsigned long long));
  VAR_7[VAR_10] = FUNC_0(VAR_5,
           sizeof(unsigned long long));
 }



 VAR_4 = FUNC_2(&VAR_8, 0x18, 6);
 if (VAR_4 == ((void*)0) || VAR_8 == ((void*)0))
  return ((void*)0);

 if (!FUNC_1())
  VAR_3.hw_states_num = VAR_0 - 1;

 VAR_3.name_len = FUNC_3(VAR_3.name);
 return &VAR_3;
}
