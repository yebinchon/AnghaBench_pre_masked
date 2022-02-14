
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int hw_states_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 (char*,int,int,int ) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,struct timespec) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_7, VAR_8;
 struct timespec VAR_9;
 FUNC_0(VAR_0, &VAR_9);
 VAR_6 = FUNC_3(VAR_5, VAR_9);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_2.hw_states_num;
       VAR_8++) {
   VAR_3[VAR_7][VAR_8] =
    FUNC_1(VAR_7, VAR_8);
   FUNC_2("CPU %d - State: %d - Val: %llu\n",
          VAR_7, VAR_8, VAR_4[VAR_7][VAR_8]);
  }
 };
 return 0;
}
