
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct held_lock {int dummy; } ;
struct TYPE_3__ {int held_locks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(void)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_4(VAR_8);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3->held_locks, 0, VAR_1*sizeof(struct held_lock));
 VAR_5 = 0;
 VAR_7 = 0;
 VAR_6 = 0;
 VAR_4 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_0(VAR_2 + VAR_9);
 FUNC_3(VAR_8);
}
