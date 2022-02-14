
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_19__ {int src_fadvise_flags; int flags; int src_version; int snapid; } ;
struct TYPE_17__ {int cmp_mode; int cmp_op; int value_len; int name_len; } ;
struct TYPE_15__ {int expected_write_size; int expected_object_size; } ;
struct TYPE_27__ {int cookie; } ;
struct TYPE_25__ {int gen; int op; int cookie; } ;
struct TYPE_23__ {int indata_len; int method_len; int class_len; } ;
struct TYPE_21__ {int truncate_seq; int truncate_size; int length; int offset; } ;
struct ceph_osd_req_op {int op; int indata_len; int flags; TYPE_14__ copy_from; TYPE_12__ xattr; TYPE_10__ alloc_hint; TYPE_8__ notify; TYPE_6__ watch; TYPE_4__ cls; TYPE_2__ extent; } ;
struct TYPE_18__ {void* src_fadvise_flags; int flags; void* src_version; void* snapid; } ;
struct TYPE_16__ {int cmp_mode; int cmp_op; void* value_len; void* name_len; } ;
struct TYPE_28__ {void* expected_write_size; void* expected_object_size; } ;
struct TYPE_26__ {void* cookie; } ;
struct TYPE_24__ {void* gen; int op; void* ver; void* cookie; } ;
struct TYPE_22__ {void* indata_len; int method_len; int class_len; } ;
struct TYPE_20__ {void* truncate_seq; void* truncate_size; void* length; void* offset; } ;
struct ceph_osd_op {void* payload_len; void* flags; int op; TYPE_13__ copy_from; TYPE_11__ xattr; TYPE_9__ alloc_hint; TYPE_7__ notify; TYPE_5__ watch; TYPE_3__ cls; TYPE_1__ extent; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static u32 FUNC_6(struct ceph_osd_op *VAR_0,
        const struct ceph_osd_req_op *VAR_1)
{
 switch (VAR_1->op) {
 case 133:
  break;
 case 136:
 case 130:
 case 129:
 case 128:
 case 132:
  VAR_0->extent.offset = FUNC_4(VAR_1->extent.offset);
  VAR_0->extent.length = FUNC_4(VAR_1->extent.length);
  VAR_0->extent.truncate_size =
   FUNC_4(VAR_1->extent.truncate_size);
  VAR_0->extent.truncate_seq =
   FUNC_3(VAR_1->extent.truncate_seq);
  break;
 case 144:
  VAR_0->cls.class_len = VAR_1->cls.class_len;
  VAR_0->cls.method_len = VAR_1->cls.method_len;
  VAR_0->cls.indata_len = FUNC_3(VAR_1->cls.indata_len);
  break;
 case 131:
  VAR_0->watch.cookie = FUNC_4(VAR_1->watch.cookie);
  VAR_0->watch.ver = FUNC_4(0);
  VAR_0->watch.op = VAR_1->watch.op;
  VAR_0->watch.gen = FUNC_3(VAR_1->watch.gen);
  break;
 case 137:
  break;
 case 138:
  VAR_0->notify.cookie = FUNC_4(VAR_1->notify.cookie);
  break;
 case 139:
  break;
 case 135:
  VAR_0->alloc_hint.expected_object_size =
      FUNC_4(VAR_1->alloc_hint.expected_object_size);
  VAR_0->alloc_hint.expected_write_size =
      FUNC_4(VAR_1->alloc_hint.expected_write_size);
  break;
 case 134:
 case 143:
  VAR_0->xattr.name_len = FUNC_3(VAR_1->xattr.name_len);
  VAR_0->xattr.value_len = FUNC_3(VAR_1->xattr.value_len);
  VAR_0->xattr.cmp_op = VAR_1->xattr.cmp_op;
  VAR_0->xattr.cmp_mode = VAR_1->xattr.cmp_mode;
  break;
 case 141:
 case 140:
  break;
 case 142:
  VAR_0->copy_from.snapid = FUNC_4(VAR_1->copy_from.snapid);
  VAR_0->copy_from.src_version =
   FUNC_4(VAR_1->copy_from.src_version);
  VAR_0->copy_from.flags = VAR_1->copy_from.flags;
  VAR_0->copy_from.src_fadvise_flags =
   FUNC_3(VAR_1->copy_from.src_fadvise_flags);
  break;
 default:
  FUNC_5("unsupported osd opcode %s\n",
   FUNC_1(VAR_1->op));
  FUNC_0(1);

  return 0;
 }

 VAR_0->op = FUNC_2(VAR_1->op);
 VAR_0->flags = FUNC_3(VAR_1->flags);
 VAR_0->payload_len = FUNC_3(VAR_1->indata_len);

 return VAR_1->indata_len;
}
