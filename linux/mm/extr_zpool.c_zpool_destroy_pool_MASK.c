
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpool {TYPE_1__* driver; int pool; int list; } ;
struct TYPE_2__ {int (* destroy ) (int ) ;int type; } ;


 int FUNC_0 (struct zpool*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct zpool *VAR_1)
{
 FUNC_2("destroying pool type %s\n", VAR_1->driver->type);

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_4(&VAR_0);
 VAR_1->driver->destroy(VAR_1->pool);
 FUNC_6(VAR_1->driver);
 FUNC_0(VAR_1);
}
