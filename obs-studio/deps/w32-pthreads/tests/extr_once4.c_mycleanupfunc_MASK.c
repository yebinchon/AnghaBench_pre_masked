
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oncenum; int threadnum; int myPrio; int w32Thread; } ;
typedef TYPE_1__ bag_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int,int,int) ;

void
FUNC_4(void * VAR_1)
{
  bag_t * VAR_2 = (bag_t *) VAR_1;
  FUNC_0(&VAR_0);

  FUNC_3("%4d %4d %4d %4d\n",
  VAR_2->oncenum,
  VAR_2->threadnum,
  VAR_2->myPrio,
  VAR_2->myPrio - FUNC_1(VAR_2->w32Thread));
  FUNC_2(&VAR_0);
}
