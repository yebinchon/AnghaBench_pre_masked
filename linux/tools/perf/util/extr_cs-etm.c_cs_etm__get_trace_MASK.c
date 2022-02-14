
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cs_etm_queue {size_t queue_nr; int buf_len; scalar_t__ buf; scalar_t__ buf_used; TYPE_3__* etm; struct auxtrace_buffer* buffer; } ;
struct auxtrace_queue {int dummy; } ;
struct auxtrace_buffer {int size; scalar_t__ data; } ;
struct TYPE_4__ {struct auxtrace_queue* queue_array; } ;
struct TYPE_6__ {TYPE_2__* session; TYPE_1__ queues; } ;
struct TYPE_5__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct auxtrace_buffer*) ;
 scalar_t__ FUNC_1 (struct auxtrace_buffer*,int) ;
 struct auxtrace_buffer* FUNC_2 (struct auxtrace_queue*,struct auxtrace_buffer*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct cs_etm_queue *VAR_1)
{
 struct auxtrace_buffer *VAR_2 = VAR_1->buffer;
 struct auxtrace_buffer *VAR_3 = VAR_2;
 struct auxtrace_queue *VAR_4;

 VAR_4 = &VAR_1->etm->queues.queue_array[VAR_1->queue_nr];

 VAR_2 = FUNC_2(VAR_4, VAR_2);


 if (!VAR_2) {
  if (VAR_3)
   FUNC_0(VAR_3);
  VAR_1->buf_len = 0;
  return 0;
 }

 VAR_1->buffer = VAR_2;


 if (!VAR_2->data) {

  int VAR_5 = FUNC_3(VAR_1->etm->session->data);

  VAR_2->data = FUNC_1(VAR_2, VAR_5);
  if (!VAR_2->data)
   return -VAR_0;
 }


 if (VAR_3)
  FUNC_0(VAR_3);

 VAR_1->buf_used = 0;
 VAR_1->buf_len = VAR_2->size;
 VAR_1->buf = VAR_2->data;

 return VAR_1->buf_len;
}
