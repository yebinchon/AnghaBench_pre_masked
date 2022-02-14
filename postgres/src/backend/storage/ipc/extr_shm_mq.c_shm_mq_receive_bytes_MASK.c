
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int shm_mq_result ;
struct TYPE_5__ {scalar_t__ mqh_consume_pending; TYPE_2__* mqh_queue; } ;
typedef TYPE_1__ shm_mq_handle ;
struct TYPE_6__ {scalar_t__ mq_ring_size; scalar_t__ mq_ring_offset; int mq_bytes_written; scalar_t__ mq_detached; int * mq_ring; int mq_bytes_read; } ;
typedef TYPE_2__ shm_mq ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static shm_mq_result
FUNC_8(shm_mq_handle *VAR_7, Size VAR_8, bool VAR_9,
      Size *VAR_10, void **VAR_11)
{
 shm_mq *VAR_12 = VAR_7->mqh_queue;
 Size VAR_13 = VAR_12->mq_ring_size;
 uint64 VAR_14;
 uint64 VAR_15;

 for (;;)
 {
  Size VAR_16;
  uint64 VAR_17;


  VAR_15 = FUNC_5(&VAR_12->mq_bytes_written);





  VAR_17 = FUNC_5(&VAR_12->mq_bytes_read) +
   VAR_7->mqh_consume_pending;
  VAR_14 = VAR_15 - VAR_17;
  FUNC_0(VAR_14 <= VAR_13);
  VAR_16 = VAR_17 % (uint64) VAR_13;


  if (VAR_14 >= VAR_8 || VAR_16 + VAR_14 >= VAR_13)
  {
   *VAR_10 = FUNC_2(VAR_14, VAR_13 - VAR_16);
   *VAR_11 = &VAR_12->mq_ring[VAR_12->mq_ring_offset + VAR_16];






   FUNC_6();
   return VAR_2;
  }
  if (VAR_12->mq_detached)
  {






   FUNC_6();
   if (VAR_15 != FUNC_5(&VAR_12->mq_bytes_written))
    continue;

   return VAR_1;
  }





  if (VAR_7->mqh_consume_pending > 0)
  {
   FUNC_7(VAR_12, VAR_7->mqh_consume_pending);
   VAR_7->mqh_consume_pending = 0;
  }


  if (VAR_9)
   return VAR_3;
  (void) FUNC_4(VAR_0, VAR_6 | VAR_5, 0,
       VAR_4);


  FUNC_3(VAR_0);


  FUNC_1();
 }
}
