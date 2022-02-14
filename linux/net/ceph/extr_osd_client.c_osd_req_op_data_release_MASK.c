
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


struct ceph_osd_request {unsigned int r_num_ops; struct ceph_osd_req_op* r_ops; } ;
struct TYPE_14__ {int osd_data; } ;
struct TYPE_13__ {int response_data; } ;
struct TYPE_12__ {int response_data; int request_data; } ;
struct TYPE_11__ {int request_data; } ;
struct TYPE_10__ {int osd_data; } ;
struct TYPE_9__ {int response_data; int request_data; int request_info; } ;
struct TYPE_8__ {int osd_data; } ;
struct ceph_osd_req_op {int op; TYPE_7__ copy_from; TYPE_6__ list_watchers; TYPE_5__ notify; TYPE_4__ notify_ack; int raw_data_in; TYPE_3__ xattr; TYPE_2__ cls; TYPE_1__ extent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_request *VAR_0,
   unsigned int VAR_1)
{
 struct ceph_osd_req_op *VAR_2;

 FUNC_0(VAR_1 >= VAR_0->r_num_ops);
 VAR_2 = &VAR_0->r_ops[VAR_1];

 switch (VAR_2->op) {
 case 132:
 case 129:
 case 128:
  FUNC_1(&VAR_2->extent.osd_data);
  break;
 case 138:
  FUNC_1(&VAR_2->cls.request_info);
  FUNC_1(&VAR_2->cls.request_data);
  FUNC_1(&VAR_2->cls.response_data);
  break;
 case 131:
 case 137:
  FUNC_1(&VAR_2->xattr.osd_data);
  break;
 case 130:
  FUNC_1(&VAR_2->raw_data_in);
  break;
 case 133:
  FUNC_1(&VAR_2->notify_ack.request_data);
  break;
 case 134:
  FUNC_1(&VAR_2->notify.request_data);
  FUNC_1(&VAR_2->notify.response_data);
  break;
 case 135:
  FUNC_1(&VAR_2->list_watchers.response_data);
  break;
 case 136:
  FUNC_1(&VAR_2->copy_from.osd_data);
  break;
 default:
  break;
 }
}
