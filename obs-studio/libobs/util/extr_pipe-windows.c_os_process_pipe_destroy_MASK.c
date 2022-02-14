
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int process; int handle_err; int handle; } ;
typedef TYPE_1__ os_process_pipe_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(os_process_pipe_t *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  DWORD VAR_3;

  FUNC_0(VAR_1->handle);
  FUNC_0(VAR_1->handle_err);

  FUNC_2(VAR_1->process, VAR_0);
  if (FUNC_1(VAR_1->process, &VAR_3))
   VAR_2 = (int)VAR_3;

  FUNC_0(VAR_1->process);
  FUNC_3(VAR_1);
 }

 return VAR_2;
}
