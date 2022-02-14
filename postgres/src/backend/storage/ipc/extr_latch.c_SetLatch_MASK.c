
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {int is_set; scalar_t__ owner_pid; scalar_t__ event; } ;
typedef TYPE_1__ Latch ;
typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;

void
FUNC_4(Latch *VAR_3)
{

 pid_t VAR_4;
 FUNC_2();


 if (VAR_3->is_set)
  return;

 VAR_3->is_set = 1;
 VAR_4 = VAR_3->owner_pid;
 if (VAR_4 == 0)
  return;
 else if (VAR_4 == VAR_0)
 {
  if (VAR_2)
   FUNC_3();
 }
 else
  FUNC_1(VAR_4, VAR_1);
}
