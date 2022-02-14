
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* max_pending; scalar_t__ nr_pending; TYPE_2__* pending_writebacks; } ;
typedef TYPE_1__ WritebackContext ;
struct TYPE_6__ {int tag; } ;
typedef TYPE_2__ PendingWriteback ;
typedef int BufferTag ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(WritebackContext *VAR_1, BufferTag *VAR_2)
{
 PendingWriteback *VAR_3;





 if (*VAR_1->max_pending > 0)
 {
  FUNC_0(*VAR_1->max_pending <= VAR_0);

  VAR_3 = &VAR_1->pending_writebacks[VAR_1->nr_pending++];

  VAR_3->tag = *VAR_2;
 }






 if (VAR_1->nr_pending >= *VAR_1->max_pending)
  FUNC_1(VAR_1);
}
