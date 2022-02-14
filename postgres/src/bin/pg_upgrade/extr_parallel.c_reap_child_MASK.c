
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int jobs; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int *,int,int ) ;
 void** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int * VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_5 (int,int*,int ) ;

bool
FUNC_6(bool VAR_10)
{

 int VAR_11;
 pid_t VAR_12;





 if (VAR_9.jobs <= 1 || VAR_7 == 0)
  return 0;


 VAR_12 = FUNC_5(-1, &VAR_11, VAR_10 ? 0 : VAR_4);
 if (VAR_12 == (pid_t) -1)
  FUNC_3("waitpid() failed: %s\n", FUNC_4(VAR_6));
 if (VAR_12 == 0)
  return 0;
 if (VAR_11 != 0)
  FUNC_3("child process exited abnormally: status %d\n", VAR_11);
 VAR_7--;

 return 1;
}
