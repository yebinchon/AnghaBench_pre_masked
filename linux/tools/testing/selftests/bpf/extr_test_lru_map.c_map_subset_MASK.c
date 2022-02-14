
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long long*,unsigned long long*) ;
 int FUNC_2 (int,unsigned long long*,unsigned long long*) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 unsigned long long FUNC_4 (unsigned long long) ;

__attribute__((used)) static int FUNC_5(int VAR_2, int VAR_3)
{
 unsigned long long VAR_4 = 0;
 unsigned long long VAR_5[VAR_1], VAR_6[VAR_1];
 int VAR_7;

 while (!FUNC_1(VAR_3, &VAR_4, &VAR_4)) {
  FUNC_0(!FUNC_2(VAR_3, &VAR_4, VAR_6));
  VAR_7 = FUNC_2(VAR_2, &VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_3("key:%llu not found from map. %s(%d)\n",
          VAR_4, FUNC_4(VAR_0), VAR_0);
   return 0;
  }
  if (VAR_5[0] != VAR_6[0]) {
   FUNC_3("key:%llu value0:%llu != value1:%llu\n",
          VAR_4, VAR_5[0], VAR_6[0]);
   return 0;
  }
 }
 return 1;
}
