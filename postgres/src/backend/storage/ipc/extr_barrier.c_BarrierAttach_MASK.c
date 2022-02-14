
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phase; int mutex; int participants; int static_party; } ;
typedef TYPE_1__ Barrier ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(Barrier *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0->static_party);

 FUNC_1(&VAR_0->mutex);
 ++VAR_0->participants;
 VAR_1 = VAR_0->phase;
 FUNC_2(&VAR_0->mutex);

 return VAR_1;
}
