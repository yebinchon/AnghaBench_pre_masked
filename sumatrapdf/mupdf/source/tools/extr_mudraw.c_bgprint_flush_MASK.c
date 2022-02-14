
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ started; int stop; int active; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 if (!VAR_0.active || !VAR_0.started)
  return;


 FUNC_0(&VAR_0.stop);

 VAR_0.started = 0;
}
