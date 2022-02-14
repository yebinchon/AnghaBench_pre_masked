
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ persistency; } ;
struct TYPE_5__ {int mutex; TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 ReplicationSlot *VAR_2 = VAR_0;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->data.persistency != VAR_1);

 FUNC_3(&VAR_2->mutex);
 VAR_2->data.persistency = VAR_1;
 FUNC_4(&VAR_2->mutex);

 FUNC_1();
 FUNC_2();
}
