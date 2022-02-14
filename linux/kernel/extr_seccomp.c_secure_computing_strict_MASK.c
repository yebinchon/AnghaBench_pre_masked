
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {int ptrace; TYPE_1__ seccomp; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(int VAR_5)
{
 int VAR_6 = VAR_4->seccomp.mode;

 if (FUNC_1(VAR_0) &&
     FUNC_3(VAR_4->ptrace & VAR_1))
  return;

 if (VAR_6 == VAR_2)
  return;
 else if (VAR_6 == VAR_3)
  FUNC_2(VAR_5);
 else
  FUNC_0();
}
