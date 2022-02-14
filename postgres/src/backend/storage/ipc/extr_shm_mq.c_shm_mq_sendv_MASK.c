
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ shm_mq_result ;
struct TYPE_8__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ shm_mq_iovec ;
struct TYPE_9__ {int mqh_length_word_complete; int mqh_partial_bytes; int mqh_counterparty_attached; TYPE_3__* mqh_queue; } ;
typedef TYPE_2__ shm_mq_handle ;
struct TYPE_10__ {scalar_t__ mq_sender; int mq_mutex; TYPE_4__* mq_receiver; scalar_t__ mq_detached; } ;
typedef TYPE_3__ shm_mq ;
struct TYPE_11__ {int procLatch; } ;
typedef scalar_t__ Size ;
typedef TYPE_4__ PGPROC ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,char*,int,scalar_t__*) ;

shm_mq_result
FUNC_6(shm_mq_handle *VAR_4, shm_mq_iovec *VAR_5, int VAR_6, bool VAR_7)
{
 shm_mq_result VAR_8;
 shm_mq *VAR_9 = VAR_4->mqh_queue;
 PGPROC *VAR_10;
 Size VAR_11 = 0;
 Size VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 Size VAR_15;

 FUNC_0(VAR_9->mq_sender == VAR_1);


 for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13)
  VAR_11 += VAR_5[VAR_13].len;


 while (!VAR_4->mqh_length_word_complete)
 {
  FUNC_0(VAR_4->mqh_partial_bytes < sizeof(Size));
  VAR_8 = FUNC_5(VAR_4, sizeof(Size) - VAR_4->mqh_partial_bytes,
        ((char *) &VAR_11) + VAR_4->mqh_partial_bytes,
        VAR_7, &VAR_12);

  if (VAR_8 == VAR_2)
  {

   VAR_4->mqh_partial_bytes = 0;
   VAR_4->mqh_length_word_complete = 0;
   return VAR_8;
  }
  VAR_4->mqh_partial_bytes += VAR_12;

  if (VAR_4->mqh_partial_bytes >= sizeof(Size))
  {
   FUNC_0(VAR_4->mqh_partial_bytes == sizeof(Size));

   VAR_4->mqh_partial_bytes = 0;
   VAR_4->mqh_length_word_complete = 1;
  }

  if (VAR_8 != VAR_3)
   return VAR_8;


  FUNC_0(VAR_4->mqh_length_word_complete || sizeof(Size) > VAR_0);
 }


 FUNC_0(VAR_4->mqh_partial_bytes <= VAR_11);
 VAR_15 = VAR_4->mqh_partial_bytes;
 do
 {
  Size VAR_16;


  if (VAR_15 >= VAR_5[VAR_14].len)
  {
   VAR_15 -= VAR_5[VAR_14].len;
   ++VAR_14;
   if (VAR_14 >= VAR_6)
    break;
   continue;
  }
  if (VAR_14 + 1 < VAR_6 &&
   VAR_15 + VAR_0 > VAR_5[VAR_14].len)
  {
   char VAR_17[VAR_0];
   int VAR_18 = 0;

   for (;;)
   {
    if (VAR_15 < VAR_5[VAR_14].len)
    {
     VAR_17[VAR_18] = VAR_5[VAR_14].data[VAR_15];
     VAR_18++;
     VAR_15++;
     if (VAR_18 == VAR_0)
      break;
    }
    else
    {
     VAR_15 -= VAR_5[VAR_14].len;
     VAR_14++;
     if (VAR_14 >= VAR_6)
      break;
    }
   }

   VAR_8 = FUNC_5(VAR_4, VAR_18, VAR_17, VAR_7, &VAR_12);

   if (VAR_8 == VAR_2)
   {

    VAR_4->mqh_partial_bytes = 0;
    VAR_4->mqh_length_word_complete = 0;
    return VAR_8;
   }

   VAR_4->mqh_partial_bytes += VAR_12;
   if (VAR_8 != VAR_3)
    return VAR_8;
   continue;
  }






  VAR_16 = VAR_5[VAR_14].len - VAR_15;
  if (VAR_14 + 1 < VAR_6)
   VAR_16 = FUNC_1(VAR_16);
  VAR_8 = FUNC_5(VAR_4, VAR_16, &VAR_5[VAR_14].data[VAR_15],
        VAR_7, &VAR_12);

  if (VAR_8 == VAR_2)
  {

   VAR_4->mqh_length_word_complete = 0;
   VAR_4->mqh_partial_bytes = 0;
   return VAR_8;
  }

  VAR_4->mqh_partial_bytes += VAR_12;
  VAR_15 += VAR_12;
  if (VAR_8 != VAR_3)
   return VAR_8;
 } while (VAR_4->mqh_partial_bytes < VAR_11);


 VAR_4->mqh_partial_bytes = 0;
 VAR_4->mqh_length_word_complete = 0;


 if (VAR_9->mq_detached)
  return VAR_2;






 if (VAR_4->mqh_counterparty_attached)
  VAR_10 = VAR_9->mq_receiver;
 else
 {
  FUNC_3(&VAR_9->mq_mutex);
  VAR_10 = VAR_9->mq_receiver;
  FUNC_4(&VAR_9->mq_mutex);
  if (VAR_10 == ((void*)0))
   return VAR_3;
  VAR_4->mqh_counterparty_attached = 1;
 }


 FUNC_2(&VAR_10->procLatch);
 return VAR_3;
}
