
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_monitor {int name; int name_len; } ;
struct TYPE_2__ {scalar_t__ vendor; int family; int model; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 void** VAR_4 ;
 struct cpuidle_monitor VAR_5 ;
 void* VAR_6 ;
 void** VAR_7 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct cpuidle_monitor *FUNC_2(void)
{
 int VAR_8;

 if (VAR_3.vendor != VAR_1
     || VAR_3.family != 6)
  return ((void*)0);

 switch (VAR_3.model) {
 case 0x45:
  break;
 default:
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_2, sizeof(int));
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7[VAR_8] = FUNC_0(VAR_2,
     sizeof(unsigned long long));
  VAR_4[VAR_8] = FUNC_0(VAR_2,
     sizeof(unsigned long long));
 }
 VAR_5.name_len = FUNC_1(VAR_5.name);
 return &VAR_5;
}
