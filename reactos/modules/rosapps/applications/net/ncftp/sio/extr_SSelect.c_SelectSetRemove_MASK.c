
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numfds; int fds; } ;
typedef TYPE_1__* SelectSetPtr ;


 int FUNC_0 (int const,int *) ;
 scalar_t__ FUNC_1 (int const,int *) ;

void
FUNC_2(SelectSetPtr const VAR_0, const int VAR_1)
{
 if ((VAR_1 >= 0) && (FUNC_1(VAR_1, &VAR_0->fds))) {
  FUNC_0(VAR_1, &VAR_0->fds);



  --VAR_0->numfds;
 }
}
