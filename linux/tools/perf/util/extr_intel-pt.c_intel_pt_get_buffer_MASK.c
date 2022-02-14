
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {TYPE_2__* pt; } ;
struct intel_pt_buffer {int consecutive; scalar_t__ trace_nr; int ref_timestamp; scalar_t__ buf; int len; } ;
struct auxtrace_buffer {scalar_t__ buffer_nr; int consecutive; int reference; scalar_t__ data; int size; scalar_t__ use_data; int use_size; } ;
struct TYPE_4__ {scalar_t__ sampling_mode; scalar_t__ snapshot_mode; TYPE_1__* session; } ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct auxtrace_buffer*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct auxtrace_buffer*,struct auxtrace_buffer*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_queue *VAR_1,
          struct auxtrace_buffer *VAR_2,
          struct auxtrace_buffer *VAR_3,
          struct intel_pt_buffer *VAR_4)
{
 bool VAR_5;

 if (!VAR_2->data) {
  int VAR_6 = FUNC_2(VAR_1->pt->session->data);

  VAR_2->data = FUNC_0(VAR_2, VAR_6);
  if (!VAR_2->data)
   return -VAR_0;
 }

 VAR_5 = VAR_1->pt->snapshot_mode || VAR_1->pt->sampling_mode;
 if (VAR_5 && !VAR_2->consecutive && VAR_3 &&
     FUNC_1(VAR_1->pt, VAR_3, VAR_2))
  return -VAR_0;

 if (VAR_2->use_data) {
  VAR_4->len = VAR_2->use_size;
  VAR_4->buf = VAR_2->use_data;
 } else {
  VAR_4->len = VAR_2->size;
  VAR_4->buf = VAR_2->data;
 }
 VAR_4->ref_timestamp = VAR_2->reference;

 if (!VAR_3 || (VAR_5 && !VAR_2->consecutive)) {
  VAR_4->consecutive = 0;
  VAR_4->trace_nr = VAR_2->buffer_nr + 1;
 } else {
  VAR_4->consecutive = 1;
 }

 return 0;
}
