
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int origin_cv; scalar_t__ acquired_by; } ;
typedef int ConditionVariable ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_7(void)
{
 ConditionVariable *VAR_6;

 FUNC_0(VAR_4 != 0);

 if (VAR_5 == ((void*)0))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("no replication origin is configured")));

 FUNC_2(VAR_3, VAR_2);

 VAR_5->acquired_by = 0;
 VAR_6 = &VAR_5->origin_cv;
 VAR_5 = ((void*)0);

 FUNC_3(VAR_3);

 FUNC_1(VAR_6);
}
