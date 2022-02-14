
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct TYPE_8__ {int entry; } ;
typedef TYPE_2__ wait_queue_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(wait_queue_head_t *VAR_3, wait_queue_entry_t *VAR_4)
{
 if (FUNC_1(FUNC_2(&VAR_4->entry)))
  FUNC_0(VAR_3, VAR_4);

 FUNC_4(VAR_1);
 if (FUNC_5(VAR_2))
  return -VAR_0;

 FUNC_7(&VAR_3->lock);
 FUNC_3();
 FUNC_6(&VAR_3->lock);

 return 0;
}
