
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int shm_mq_result ;
struct TYPE_9__ {int mqh_counterparty_attached; int mqh_handle; TYPE_2__* mqh_queue; } ;
typedef TYPE_1__ shm_mq_handle ;
struct TYPE_10__ {scalar_t__ mq_ring_size; int mq_detached; scalar_t__ mq_ring_offset; int * mq_ring; TYPE_4__* mq_receiver; int mq_bytes_written; int mq_bytes_read; } ;
typedef TYPE_2__ shm_mq ;
struct TYPE_11__ {int procLatch; } ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ) ;
 int * FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,TYPE_4__**,int ) ;

__attribute__((used)) static shm_mq_result
FUNC_15(shm_mq_handle *VAR_7, Size VAR_8, const void *VAR_9,
      bool VAR_10, Size *VAR_11)
{
 shm_mq *VAR_12 = VAR_7->mqh_queue;
 Size VAR_13 = 0;
 uint64 VAR_14;
 Size VAR_15 = VAR_12->mq_ring_size;
 Size VAR_16;

 while (VAR_13 < VAR_8)
 {
  uint64 VAR_17;
  uint64 VAR_18;


  VAR_17 = FUNC_8(&VAR_12->mq_bytes_read);
  VAR_18 = FUNC_8(&VAR_12->mq_bytes_written);
  FUNC_0(VAR_18 >= VAR_17);
  VAR_14 = VAR_18 - VAR_17;
  FUNC_0(VAR_14 <= VAR_15);
  VAR_16 = FUNC_3(VAR_15 - VAR_14, VAR_8 - VAR_13);
  FUNC_9();
  if (VAR_12->mq_detached)
  {
   *VAR_11 = VAR_13;
   return VAR_1;
  }

  if (VAR_16 == 0 && !VAR_7->mqh_counterparty_attached)
  {




   if (VAR_10)
   {
    if (FUNC_11(VAR_12, VAR_7->mqh_handle))
    {
     *VAR_11 = VAR_13;
     return VAR_1;
    }
    if (FUNC_12(VAR_12) == ((void*)0))
    {
     *VAR_11 = VAR_13;
     return VAR_3;
    }
   }
   else if (!FUNC_14(VAR_12, &VAR_12->mq_receiver,
             VAR_7->mqh_handle))
   {
    VAR_12->mq_detached = 1;
    *VAR_11 = VAR_13;
    return VAR_1;
   }
   VAR_7->mqh_counterparty_attached = 1;





  }
  else if (VAR_16 == 0)
  {





   FUNC_0(VAR_7->mqh_counterparty_attached);
   FUNC_5(&VAR_12->mq_receiver->procLatch);


   if (VAR_10)
   {
    *VAR_11 = VAR_13;
    return VAR_3;
   }
   (void) FUNC_6(VAR_0, VAR_6 | VAR_5, 0,
        VAR_4);


   FUNC_4(VAR_0);


   FUNC_1();
  }
  else
  {
   Size VAR_19;
   Size VAR_20;

   VAR_19 = VAR_18 % (uint64) VAR_15;
   VAR_20 = FUNC_3(VAR_16, VAR_15 - VAR_19);
   FUNC_10();
   FUNC_7(&VAR_12->mq_ring[VAR_12->mq_ring_offset + VAR_19],
       (char *) VAR_9 + VAR_13, VAR_20);
   VAR_13 += VAR_20;







   FUNC_0(VAR_13 == VAR_8 || VAR_20 == FUNC_2(VAR_20));
   FUNC_13(VAR_12, FUNC_2(VAR_20));






  }
 }

 *VAR_11 = VAR_13;
 return VAR_2;
}
