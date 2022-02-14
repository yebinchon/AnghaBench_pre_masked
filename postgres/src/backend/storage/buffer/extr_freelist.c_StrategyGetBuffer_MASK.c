
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_14__ {TYPE_1__* allProcs; } ;
struct TYPE_13__ {int bgwprocno; scalar_t__ firstFreeBuffer; int buffer_strategy_lock; int numBufferAllocs; } ;
struct TYPE_12__ {scalar_t__ freeNext; } ;
struct TYPE_11__ {int procLatch; } ;
typedef TYPE_2__ BufferDesc ;
typedef int * BufferAccessStrategy ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 TYPE_2__* FUNC_6 (int *,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_5__* VAR_5 ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *,int) ;

BufferDesc *
FUNC_15(BufferAccessStrategy VAR_6, uint32 *VAR_7)
{
 BufferDesc *VAR_8;
 int VAR_9;
 int VAR_10;
 uint32 VAR_11;





 if (VAR_6 != ((void*)0))
 {
  VAR_8 = FUNC_6(VAR_6, VAR_7);
  if (VAR_8 != ((void*)0))
   return VAR_8;
 }
 VAR_9 = FUNC_7(VAR_5->bgwprocno);
 if (VAR_9 != -1)
 {

  VAR_5->bgwprocno = -1;






  FUNC_9(&VAR_4->allProcs[VAR_9].procLatch);
 }






 FUNC_14(&VAR_5->numBufferAllocs, 1);
 if (VAR_5->firstFreeBuffer >= 0)
 {
  while (1)
  {

   FUNC_10(&VAR_5->buffer_strategy_lock);

   if (VAR_5->firstFreeBuffer < 0)
   {
    FUNC_11(&VAR_5->buffer_strategy_lock);
    break;
   }

   VAR_8 = FUNC_5(VAR_5->firstFreeBuffer);
   FUNC_1(VAR_8->freeNext != VAR_2);


   VAR_5->firstFreeBuffer = VAR_8->freeNext;
   VAR_8->freeNext = VAR_2;





   FUNC_11(&VAR_5->buffer_strategy_lock);
   VAR_11 = FUNC_8(VAR_8);
   if (FUNC_2(VAR_11) == 0
    && FUNC_3(VAR_11) == 0)
   {
    if (VAR_6 != ((void*)0))
     FUNC_0(VAR_6, VAR_8);
    *VAR_7 = VAR_11;
    return VAR_8;
   }
   FUNC_12(VAR_8, VAR_11);

  }
 }


 VAR_10 = VAR_3;
 for (;;)
 {
  VAR_8 = FUNC_5(FUNC_4());





  VAR_11 = FUNC_8(VAR_8);

  if (FUNC_2(VAR_11) == 0)
  {
   if (FUNC_3(VAR_11) != 0)
   {
    VAR_11 -= VAR_0;

    VAR_10 = VAR_3;
   }
   else
   {

    if (VAR_6 != ((void*)0))
     FUNC_0(VAR_6, VAR_8);
    *VAR_7 = VAR_11;
    return VAR_8;
   }
  }
  else if (--VAR_10 == 0)
  {







   FUNC_12(VAR_8, VAR_11);
   FUNC_13(VAR_1, "no unpinned buffers available");
  }
  FUNC_12(VAR_8, VAR_11);
 }
}
