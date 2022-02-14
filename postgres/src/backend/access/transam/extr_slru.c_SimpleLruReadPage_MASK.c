
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_13__ {TYPE_2__* shared; } ;
struct TYPE_12__ {int* page_number; scalar_t__* page_status; int* page_dirty; TYPE_1__* buffer_locks; int * ControlLock; } ;
struct TYPE_11__ {int lock; } ;
typedef TYPE_2__* SlruShared ;
typedef TYPE_3__* SlruCtl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int) ;

int
FUNC_9(SlruCtl VAR_5, int VAR_6, bool VAR_7,
      TransactionId VAR_8)
{
 SlruShared VAR_9 = VAR_5->shared;


 for (;;)
 {
  int VAR_10;
  bool VAR_11;


  VAR_10 = FUNC_8(VAR_5, VAR_6);


  if (VAR_9->page_number[VAR_10] == VAR_6 &&
   VAR_9->page_status[VAR_10] != VAR_1)
  {




   if (VAR_9->page_status[VAR_10] == VAR_2 ||
    (VAR_9->page_status[VAR_10] == VAR_4 &&
     !VAR_7))
   {
    FUNC_3(VAR_5, VAR_10);

    continue;
   }

   FUNC_6(VAR_9, VAR_10);
   return VAR_10;
  }


  FUNC_0(VAR_9->page_status[VAR_10] == VAR_1 ||
      (VAR_9->page_status[VAR_10] == VAR_3 &&
    !VAR_9->page_dirty[VAR_10]));


  VAR_9->page_number[VAR_10] = VAR_6;
  VAR_9->page_status[VAR_10] = VAR_2;
  VAR_9->page_dirty[VAR_10] = 0;


  FUNC_1(&VAR_9->buffer_locks[VAR_10].lock, VAR_0);


  FUNC_2(VAR_9->ControlLock);


  VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_10);


  FUNC_4(VAR_5, VAR_10);


  FUNC_1(VAR_9->ControlLock, VAR_0);

  FUNC_0(VAR_9->page_number[VAR_10] == VAR_6 &&
      VAR_9->page_status[VAR_10] == VAR_2 &&
      !VAR_9->page_dirty[VAR_10]);

  VAR_9->page_status[VAR_10] = VAR_11 ? VAR_3 : VAR_1;

  FUNC_2(&VAR_9->buffer_locks[VAR_10].lock);


  if (!VAR_11)
   FUNC_7(VAR_5, VAR_6, VAR_8);

  FUNC_6(VAR_9, VAR_10);
  return VAR_10;
 }
}
