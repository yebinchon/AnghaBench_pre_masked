
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int more_data_arg; int (* more_data ) (int ,int) ;scalar_t__ kill_thread; int complete; } ;
typedef TYPE_1__ curlstate ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(curlstate *VAR_0)
{



 while (1) {
  int VAR_1;
  FUNC_1(VAR_0);
  VAR_1 = VAR_0->complete || VAR_0->kill_thread;
  FUNC_4(VAR_0);
  if (VAR_1)
   break;
  FUNC_0(VAR_0);
  if (VAR_0->more_data)
   VAR_0->more_data(VAR_0->more_data_arg, 0);
 }
 if (VAR_0->more_data)
  VAR_0->more_data(VAR_0->more_data_arg, 1);
}
