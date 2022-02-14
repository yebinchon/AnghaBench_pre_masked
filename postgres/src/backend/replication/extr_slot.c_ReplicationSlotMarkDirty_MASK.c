
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int just_dirtied; int dirty; int mutex; } ;
typedef TYPE_1__ ReplicationSlot ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 ReplicationSlot *VAR_1 = VAR_0;

 FUNC_0(VAR_0 != ((void*)0));

 FUNC_1(&VAR_1->mutex);
 VAR_0->just_dirtied = 1;
 VAR_0->dirty = 1;
 FUNC_2(&VAR_1->mutex);
}
