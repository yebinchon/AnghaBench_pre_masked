
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int active; int indicator; scalar_t__ fin_time; scalar_t__ start_time; int * timeout_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void)
{
 int VAR_6;


 FUNC_0();

 VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 {
  VAR_2[VAR_6].index = VAR_6;
  VAR_2[VAR_6].active = 0;
  VAR_2[VAR_6].indicator = 0;
  VAR_2[VAR_6].timeout_handler = ((void*)0);
  VAR_2[VAR_6].start_time = 0;
  VAR_2[VAR_6].fin_time = 0;
 }

 VAR_3 = 1;


 FUNC_1(VAR_1, VAR_4);
}
