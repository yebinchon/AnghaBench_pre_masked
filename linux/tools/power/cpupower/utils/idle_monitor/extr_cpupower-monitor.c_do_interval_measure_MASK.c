
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* stop ) () ;int (* start ) () ;int hw_states_num; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;

int FUNC_5(int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_3)
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_0(VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1("HW C-state residency monitor: %s - States: %d\n",
         VAR_2[VAR_5]->name, VAR_2[VAR_5]->hw_states_num);
  VAR_2[VAR_5]->start();
 }

 FUNC_2(VAR_4);

 if (VAR_3)
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_0(VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2[VAR_5]->stop();


 return 0;
}
