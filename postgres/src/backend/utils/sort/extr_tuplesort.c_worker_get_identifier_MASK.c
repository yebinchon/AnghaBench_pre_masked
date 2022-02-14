
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* shared; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_6__ {int mutex; int currentWorker; } ;
typedef TYPE_2__ Sharedsort ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(Tuplesortstate *VAR_0)
{
 Sharedsort *VAR_1 = VAR_0->shared;
 int VAR_2;

 FUNC_0(FUNC_3(VAR_0));

 FUNC_1(&VAR_1->mutex);
 VAR_2 = VAR_1->currentWorker++;
 FUNC_2(&VAR_1->mutex);

 return VAR_2;
}
