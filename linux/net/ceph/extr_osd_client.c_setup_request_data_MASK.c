
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ceph_osd_request {size_t r_num_ops; struct ceph_osd_req_op* r_ops; struct ceph_msg* r_reply; struct ceph_msg* r_request; } ;
struct TYPE_14__ {int response_data; int request_data; } ;
struct TYPE_13__ {int response_data; int request_data; int request_info; scalar_t__ indata_len; scalar_t__ method_len; scalar_t__ class_len; } ;
struct TYPE_12__ {int response_data; } ;
struct TYPE_11__ {int osd_data; scalar_t__ length; } ;
struct TYPE_10__ {int osd_data; } ;
struct TYPE_9__ {int request_data; } ;
struct TYPE_8__ {int osd_data; scalar_t__ value_len; scalar_t__ name_len; } ;
struct ceph_osd_req_op {int op; TYPE_7__ notify; TYPE_6__ cls; scalar_t__ indata_len; TYPE_5__ list_watchers; TYPE_4__ extent; int raw_data_in; TYPE_3__ copy_from; TYPE_2__ notify_ack; TYPE_1__ xattr; } ;
struct ceph_msg {scalar_t__ data_length; scalar_t__ num_data_items; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_msg*,int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_request *VAR_0)
{
 struct ceph_msg *VAR_1 = VAR_0->r_request;
 struct ceph_msg *VAR_2 = VAR_0->r_reply;
 struct ceph_osd_req_op *VAR_3;

 if (VAR_0->r_request->num_data_items || VAR_0->r_reply->num_data_items)
  return;

 FUNC_0(VAR_1->data_length || VAR_2->data_length);
 for (VAR_3 = VAR_0->r_ops; VAR_3 != &VAR_0->r_ops[VAR_0->r_num_ops]; VAR_3++) {
  switch (VAR_3->op) {

  case 129:
  case 128:
   FUNC_0(VAR_3->indata_len != VAR_3->extent.length);
   FUNC_1(VAR_1,
            &VAR_3->extent.osd_data);
   break;
  case 131:
  case 137:
   FUNC_0(VAR_3->indata_len != VAR_3->xattr.name_len +
        VAR_3->xattr.value_len);
   FUNC_1(VAR_1,
            &VAR_3->xattr.osd_data);
   break;
  case 133:
   FUNC_1(VAR_1,
            &VAR_3->notify_ack.request_data);
   break;
  case 136:
   FUNC_1(VAR_1,
            &VAR_3->copy_from.osd_data);
   break;


  case 130:
   FUNC_1(VAR_2,
            &VAR_3->raw_data_in);
   break;
  case 132:
   FUNC_1(VAR_2,
            &VAR_3->extent.osd_data);
   break;
  case 135:
   FUNC_1(VAR_2,
            &VAR_3->list_watchers.response_data);
   break;


  case 138:
   FUNC_0(VAR_3->indata_len != VAR_3->cls.class_len +
        VAR_3->cls.method_len +
        VAR_3->cls.indata_len);
   FUNC_1(VAR_1,
            &VAR_3->cls.request_info);

   FUNC_1(VAR_1,
            &VAR_3->cls.request_data);

   FUNC_1(VAR_2,
            &VAR_3->cls.response_data);
   break;
  case 134:
   FUNC_1(VAR_1,
            &VAR_3->notify.request_data);
   FUNC_1(VAR_2,
            &VAR_3->notify.response_data);
   break;
  }
 }
}
