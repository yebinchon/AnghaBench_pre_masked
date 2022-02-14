
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file; } ;
typedef TYPE_1__ os_process_pipe_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

int FUNC_4(os_process_pipe_t *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0) {
  int VAR_2 = FUNC_3(VAR_0->file);
  if (FUNC_1(VAR_2))
   VAR_1 = (int)(char)FUNC_0(VAR_2);
  FUNC_2(VAR_0);
 }

 return VAR_1;
}
