
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mqh_length_word_complete; int mqh_counterparty_attached; int mqh_context; scalar_t__ mqh_expected_bytes; scalar_t__ mqh_partial_bytes; scalar_t__ mqh_consume_pending; scalar_t__ mqh_buflen; int * mqh_buffer; int * mqh_handle; int * mqh_segment; TYPE_2__* mqh_queue; } ;
typedef TYPE_1__ shm_mq_handle ;
struct TYPE_8__ {scalar_t__ mq_receiver; scalar_t__ mq_sender; } ;
typedef TYPE_2__ shm_mq ;
typedef int dsm_segment ;
typedef int BackgroundWorkerHandle ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_2 ;

shm_mq_handle *
FUNC_4(shm_mq *VAR_3, dsm_segment *VAR_4, BackgroundWorkerHandle *VAR_5)
{
 shm_mq_handle *VAR_6 = FUNC_3(sizeof(shm_mq_handle));

 FUNC_0(VAR_3->mq_receiver == VAR_1 || VAR_3->mq_sender == VAR_1);
 VAR_6->mqh_queue = VAR_3;
 VAR_6->mqh_segment = VAR_4;
 VAR_6->mqh_handle = VAR_5;
 VAR_6->mqh_buffer = ((void*)0);
 VAR_6->mqh_buflen = 0;
 VAR_6->mqh_consume_pending = 0;
 VAR_6->mqh_partial_bytes = 0;
 VAR_6->mqh_expected_bytes = 0;
 VAR_6->mqh_length_word_complete = 0;
 VAR_6->mqh_counterparty_attached = 0;
 VAR_6->mqh_context = VAR_0;

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4, VAR_2, FUNC_1(VAR_3));

 return VAR_6;
}
