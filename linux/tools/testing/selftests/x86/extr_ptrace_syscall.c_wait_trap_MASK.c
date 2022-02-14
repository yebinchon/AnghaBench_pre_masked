
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ si_pid; scalar_t__ si_code; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,TYPE_1__*,int) ;

__attribute__((used)) static siginfo_t FUNC_3(pid_t VAR_4)
{
 siginfo_t VAR_5;
 if (FUNC_2(VAR_1, VAR_4, &VAR_5, VAR_2|VAR_3) != 0)
  FUNC_0(1, "waitid");
 if (VAR_5.si_pid != VAR_4)
  FUNC_1(1, "got unexpected pid in event\n");
 if (VAR_5.si_code != VAR_0)
  FUNC_1(1, "got unexpected event type %d\n", VAR_5.si_code);
 return VAR_5;
}
