
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* shared; } ;
struct TYPE_6__ {scalar_t__* page_status; int* page_dirty; TYPE_1__* buffer_locks; int * ControlLock; } ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__* SlruShared ;
typedef TYPE_3__* SlruCtl ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3(SlruCtl VAR_6, int VAR_7)
{
 SlruShared VAR_8 = VAR_6->shared;


 FUNC_2(VAR_8->ControlLock);
 FUNC_0(&VAR_8->buffer_locks[VAR_7].lock, VAR_1);
 FUNC_2(&VAR_8->buffer_locks[VAR_7].lock);
 FUNC_0(VAR_8->ControlLock, VAR_0);
 if (VAR_8->page_status[VAR_7] == VAR_3 ||
  VAR_8->page_status[VAR_7] == VAR_5)
 {
  if (FUNC_1(&VAR_8->buffer_locks[VAR_7].lock, VAR_1))
  {

   if (VAR_8->page_status[VAR_7] == VAR_3)
    VAR_8->page_status[VAR_7] = VAR_2;
   else
   {
    VAR_8->page_status[VAR_7] = VAR_4;
    VAR_8->page_dirty[VAR_7] = 1;
   }
   FUNC_2(&VAR_8->buffer_locks[VAR_7].lock);
  }
 }
}
