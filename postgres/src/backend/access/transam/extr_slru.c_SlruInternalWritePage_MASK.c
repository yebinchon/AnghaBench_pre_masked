
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* shared; } ;
struct TYPE_13__ {int num_files; int * fd; } ;
struct TYPE_12__ {int* page_number; scalar_t__* page_status; int* page_dirty; TYPE_1__* buffer_locks; int * ControlLock; } ;
struct TYPE_11__ {int lock; } ;
typedef TYPE_2__* SlruShared ;
typedef TYPE_3__* SlruFlush ;
typedef TYPE_4__* SlruCtl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int,int ) ;

__attribute__((used)) static void
FUNC_7(SlruCtl VAR_4, int VAR_5, SlruFlush VAR_6)
{
 SlruShared VAR_7 = VAR_4->shared;
 int VAR_8 = VAR_7->page_number[VAR_5];
 bool VAR_9;


 while (VAR_7->page_status[VAR_5] == VAR_3 &&
     VAR_7->page_number[VAR_5] == VAR_8)
 {
  FUNC_4(VAR_4, VAR_5);
 }





 if (!VAR_7->page_dirty[VAR_5] ||
  VAR_7->page_status[VAR_5] != VAR_2 ||
  VAR_7->page_number[VAR_5] != VAR_8)
  return;





 VAR_7->page_status[VAR_5] = VAR_3;
 VAR_7->page_dirty[VAR_5] = 0;


 FUNC_2(&VAR_7->buffer_locks[VAR_5].lock, VAR_1);


 FUNC_3(VAR_7->ControlLock);


 VAR_9 = FUNC_5(VAR_4, VAR_8, VAR_5, VAR_6);


 if (!VAR_9 && VAR_6)
 {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_6->num_files; VAR_10++)
   FUNC_1(VAR_6->fd[VAR_10]);
 }


 FUNC_2(VAR_7->ControlLock, VAR_1);

 FUNC_0(VAR_7->page_number[VAR_5] == VAR_8 &&
     VAR_7->page_status[VAR_5] == VAR_3);


 if (!VAR_9)
  VAR_7->page_dirty[VAR_5] = 1;

 VAR_7->page_status[VAR_5] = VAR_2;

 FUNC_3(&VAR_7->buffer_locks[VAR_5].lock);


 if (!VAR_9)
  FUNC_6(VAR_4, VAR_8, VAR_0);
}
