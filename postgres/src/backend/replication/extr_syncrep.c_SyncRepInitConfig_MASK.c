
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_standby_priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int) ;

void
FUNC_5(void)
{
 int VAR_5;





 VAR_5 = FUNC_2();
 if (VAR_2->sync_standby_priority != VAR_5)
 {
  FUNC_0(VAR_3, VAR_1);
  VAR_2->sync_standby_priority = VAR_5;
  FUNC_1(VAR_3);
  FUNC_3(VAR_0,
    (FUNC_4("standby \"%s\" now has synchronous standby priority %u",
      VAR_4, VAR_5)));
 }
}
