
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ shm_mq_result ;
struct TYPE_9__ {int mqh_counterparty_attached; int mqh_consume_pending; int mqh_length_word_complete; int mqh_partial_bytes; int mqh_expected_bytes; int mqh_buflen; int * mqh_buffer; int mqh_context; int mqh_handle; TYPE_2__* mqh_queue; } ;
typedef TYPE_1__ shm_mq_handle ;
struct TYPE_10__ {scalar_t__ mq_receiver; int mq_detached; int mq_ring_size; int mq_sender; } ;
typedef TYPE_2__ shm_mq ;
typedef int Size ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int,int,int*,void**) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;

shm_mq_result
FUNC_11(shm_mq_handle *VAR_6, Size *VAR_7, void **VAR_8, bool VAR_9)
{
 shm_mq *VAR_10 = VAR_6->mqh_queue;
 shm_mq_result VAR_11;
 Size VAR_12 = 0;
 Size VAR_13;
 void *VAR_14;

 FUNC_0(VAR_10->mq_receiver == VAR_2);


 if (!VAR_6->mqh_counterparty_attached)
 {
  if (VAR_9)
  {
   int VAR_15;
   VAR_15 = FUNC_6(VAR_10, VAR_6->mqh_handle);
   if (FUNC_7(VAR_10) == ((void*)0))
   {
    if (VAR_15)
     return VAR_3;
    else
     return VAR_5;
   }
  }
  else if (!FUNC_10(VAR_10, &VAR_10->mq_sender, VAR_6->mqh_handle)
     && FUNC_7(VAR_10) == ((void*)0))
  {
   VAR_10->mq_detached = 1;
   return VAR_3;
  }
  VAR_6->mqh_counterparty_attached = 1;
 }
 if (VAR_6->mqh_consume_pending > VAR_10->mq_ring_size / 4)
 {
  FUNC_8(VAR_10, VAR_6->mqh_consume_pending);
  VAR_6->mqh_consume_pending = 0;
 }


 while (!VAR_6->mqh_length_word_complete)
 {

  FUNC_0(VAR_6->mqh_partial_bytes < sizeof(Size));
  VAR_11 = FUNC_9(VAR_6, sizeof(Size) - VAR_6->mqh_partial_bytes,
           VAR_9, &VAR_12, &VAR_14);
  if (VAR_11 != VAR_4)
   return VAR_11;






  if (VAR_6->mqh_partial_bytes == 0 && VAR_12 >= sizeof(Size))
  {
   Size VAR_16;

   VAR_13 = *(Size *) VAR_14;


   VAR_16 = FUNC_1(sizeof(Size)) + FUNC_1(VAR_13);
   if (VAR_12 >= VAR_16)
   {
    VAR_6->mqh_consume_pending += VAR_16;
    *VAR_7 = VAR_13;
    *VAR_8 = ((char *) VAR_14) + FUNC_1(sizeof(Size));
    return VAR_4;
   }





   VAR_6->mqh_expected_bytes = VAR_13;
   VAR_6->mqh_length_word_complete = 1;
   VAR_6->mqh_consume_pending += FUNC_1(sizeof(Size));
   VAR_12 -= FUNC_1(sizeof(Size));
  }
  else
  {
   Size VAR_17;


   FUNC_0(sizeof(Size) > VAR_0);


   if (VAR_6->mqh_buffer == ((void*)0))
   {
    VAR_6->mqh_buffer = FUNC_3(VAR_6->mqh_context,
              VAR_1);
    VAR_6->mqh_buflen = VAR_1;
   }
   FUNC_0(VAR_6->mqh_buflen >= sizeof(Size));


   if (VAR_6->mqh_partial_bytes + VAR_12 > sizeof(Size))
    VAR_17 = sizeof(Size) - VAR_6->mqh_partial_bytes;
   else
    VAR_17 = VAR_12;
   FUNC_4(&VAR_6->mqh_buffer[VAR_6->mqh_partial_bytes], VAR_14,
       VAR_17);
   VAR_6->mqh_partial_bytes += VAR_17;
   VAR_6->mqh_consume_pending += FUNC_1(VAR_17);
   VAR_12 -= VAR_17;


   if (VAR_6->mqh_partial_bytes >= sizeof(Size))
   {
    FUNC_0(VAR_6->mqh_partial_bytes == sizeof(Size));
    VAR_6->mqh_expected_bytes = *(Size *) VAR_6->mqh_buffer;
    VAR_6->mqh_length_word_complete = 1;
    VAR_6->mqh_partial_bytes = 0;
   }
  }
 }
 VAR_13 = VAR_6->mqh_expected_bytes;

 if (VAR_6->mqh_partial_bytes == 0)
 {





  VAR_11 = FUNC_9(VAR_6, VAR_13, VAR_9, &VAR_12, &VAR_14);
  if (VAR_11 != VAR_4)
   return VAR_11;
  if (VAR_12 >= VAR_13)
  {
   VAR_6->mqh_length_word_complete = 0;
   VAR_6->mqh_consume_pending += FUNC_1(VAR_13);
   *VAR_7 = VAR_13;
   *VAR_8 = VAR_14;
   return VAR_4;
  }






  if (VAR_6->mqh_buflen < VAR_13)
  {
   Size VAR_18 = FUNC_2(VAR_6->mqh_buflen, VAR_1);

   while (VAR_18 < VAR_13)
    VAR_18 *= 2;

   if (VAR_6->mqh_buffer != ((void*)0))
   {
    FUNC_5(VAR_6->mqh_buffer);
    VAR_6->mqh_buffer = ((void*)0);
    VAR_6->mqh_buflen = 0;
   }
   VAR_6->mqh_buffer = FUNC_3(VAR_6->mqh_context, VAR_18);
   VAR_6->mqh_buflen = VAR_18;
  }
 }


 for (;;)
 {
  Size VAR_19;


  FUNC_0(VAR_6->mqh_partial_bytes + VAR_12 <= VAR_13);
  FUNC_4(&VAR_6->mqh_buffer[VAR_6->mqh_partial_bytes], VAR_14, VAR_12);
  VAR_6->mqh_partial_bytes += VAR_12;







  FUNC_0(VAR_6->mqh_partial_bytes == VAR_13 || VAR_12 == FUNC_1(VAR_12));
  VAR_6->mqh_consume_pending += FUNC_1(VAR_12);


  if (VAR_6->mqh_partial_bytes >= VAR_13)
   break;


  VAR_19 = VAR_13 - VAR_6->mqh_partial_bytes;
  VAR_11 = FUNC_9(VAR_6, VAR_19, VAR_9, &VAR_12, &VAR_14);
  if (VAR_11 != VAR_4)
   return VAR_11;
  if (VAR_12 > VAR_19)
   VAR_12 = VAR_19;
 }


 *VAR_7 = VAR_13;
 *VAR_8 = VAR_6->mqh_buffer;
 VAR_6->mqh_length_word_complete = 0;
 VAR_6->mqh_partial_bytes = 0;
 return VAR_4;
}
