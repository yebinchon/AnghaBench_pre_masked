
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* shared; } ;
struct TYPE_11__ {int events; } ;
struct TYPE_10__ {scalar_t__ length; char* data; int dboid; } ;
struct TYPE_9__ {int* page_dirty; scalar_t__* page_buffer; } ;
typedef int QueuePosition ;
typedef int Notification ;
typedef int ListCell ;
typedef TYPE_2__ AsyncQueueEntry ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,int,int,int ) ;
 int FUNC_5 (TYPE_6__*,int) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__,TYPE_2__*,scalar_t__) ;
 TYPE_3__* VAR_9 ;

__attribute__((used)) static ListCell *
FUNC_11(ListCell *VAR_10)
{
 AsyncQueueEntry VAR_11;
 QueuePosition VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 FUNC_0(VAR_1, VAR_4);
 VAR_12 = VAR_6;


 VAR_13 = FUNC_3(VAR_12);
 VAR_15 = FUNC_4(VAR_0, VAR_13, 1, VAR_3);

 VAR_0->shared->page_dirty[VAR_15] = 1;

 while (VAR_10 != ((void*)0))
 {
  Notification *VAR_16 = (Notification *) FUNC_8(VAR_10);


  FUNC_7(VAR_16, &VAR_11);

  VAR_14 = FUNC_2(VAR_12);


  if (VAR_14 + VAR_11.length <= VAR_7)
  {

   VAR_10 = FUNC_9(VAR_9->events, VAR_10);
  }
  else
  {





   VAR_11.length = VAR_7 - VAR_14;
   VAR_11.dboid = VAR_2;
   VAR_11.data[0] = '\0';
   VAR_11.data[1] = '\0';
  }


  FUNC_10(VAR_0->shared->page_buffer[VAR_15] + VAR_14,
      &VAR_11,
      VAR_11.length);


  if (FUNC_6(&(VAR_12), VAR_11.length))
  {
   VAR_15 = FUNC_5(VAR_0, FUNC_3(VAR_12));






   if (FUNC_3(VAR_12) % VAR_5 == 0)
    VAR_8 = 1;


   break;
  }
 }


 VAR_6 = VAR_12;

 FUNC_1(VAR_1);

 return VAR_10;
}
