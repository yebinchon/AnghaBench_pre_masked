
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int * gcdata; int storage; int std; } ;
typedef TYPE_1__ spl_SplObjectStorage ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zend_object *VAR_0)
{
 spl_SplObjectStorage *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->std);

 FUNC_2(&VAR_1->storage);

 if (VAR_1->gcdata != ((void*)0)) {
  FUNC_0(VAR_1->gcdata);
 }

}
