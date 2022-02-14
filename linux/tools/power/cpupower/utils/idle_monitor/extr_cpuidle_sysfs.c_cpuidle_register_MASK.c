
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_monitor {int hw_states_num; int name; int name_len; } ;
struct TYPE_2__ {int id; int get_count_percent; int range; int desc; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int,int) ;
 char* FUNC_2 (int,int) ;
 struct cpuidle_monitor VAR_6 ;
 void** VAR_7 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 void** VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__) ;

__attribute__((used)) static struct cpuidle_monitor *FUNC_10(void)
{
 int VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7();


 VAR_6.hw_states_num = FUNC_0(VAR_11);

 if (VAR_6.hw_states_num <= 0)
  return ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_6.hw_states_num; VAR_9++) {
  VAR_10 = FUNC_2(VAR_11, VAR_9);
  if (VAR_10 == ((void*)0))
   continue;

  FUNC_6(VAR_10);
  FUNC_3(VAR_10, VAR_9);
  FUNC_9(VAR_4[VAR_9].name, VAR_10, VAR_1 - 1);
  FUNC_4(VAR_10);

  VAR_10 = FUNC_1(VAR_11, VAR_9);
  if (VAR_10 == ((void*)0))
   continue;
  FUNC_9(VAR_4[VAR_9].desc, VAR_10, VAR_0 - 1);
  FUNC_4(VAR_10);

  VAR_4[VAR_9].range = VAR_2;
  VAR_4[VAR_9].id = VAR_9;
  VAR_4[VAR_9].get_count_percent =
   VAR_5;
 };


 VAR_8 = FUNC_5(sizeof(long long *) * VAR_3);
 VAR_7 = FUNC_5(sizeof(long long *) * VAR_3);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8[VAR_9] = FUNC_5(sizeof(long long) *
     VAR_6.hw_states_num);
  VAR_7[VAR_9] = FUNC_5(sizeof(long long) *
     VAR_6.hw_states_num);
 }

 VAR_6.name_len = FUNC_8(VAR_6.name);
 return &VAR_6;
}
