
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_states_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,int,int,int ) ;
 int ** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5, VAR_6;
 FUNC_0(VAR_0, &VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2.hw_states_num;
       VAR_6++) {
   VAR_3[VAR_5][VAR_6] =
    FUNC_1(VAR_5, VAR_6);
   FUNC_2("CPU %d - State: %d - Val: %llu\n",
          VAR_5, VAR_6, VAR_3[VAR_5][VAR_6]);
  }
 };
 return 0;
}
