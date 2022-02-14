
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_timespec {int dummy; } ;
struct TYPE_6__ {scalar_t__ name_len; } ;
struct ceph_osd_request {int r_num_ops; struct ceph_msg* r_reply; scalar_t__ r_mempool; TYPE_3__ r_base_oid; struct ceph_msg* r_request; TYPE_1__* r_snapc; int r_base_oloc; struct ceph_osd_client* r_osdc; } ;
struct ceph_osd_reqid {int dummy; } ;
struct ceph_osd_op {int dummy; } ;
struct ceph_osd_client {int msgpool_op_reply; int msgpool_op; } ;
struct TYPE_5__ {int iov_len; int iov_base; } ;
struct ceph_msg {TYPE_2__ front; } ;
struct ceph_blkin_trace_info {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int num_snaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct ceph_msg* FUNC_1 (int ,int,int,int ,int) ;
 struct ceph_msg* FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ceph_osd_request *VAR_6, gfp_t VAR_7,
          int VAR_8,
          int VAR_9)
{
 struct ceph_osd_client *VAR_10 = VAR_6->r_osdc;
 struct ceph_msg *VAR_11;
 int VAR_12;

 FUNC_0(VAR_6->r_request || VAR_6->r_reply);
 FUNC_0(FUNC_3(&VAR_6->r_base_oid));
 FUNC_0(FUNC_4(&VAR_6->r_base_oloc));


 VAR_12 = VAR_0 +
   VAR_3 + 1;
 VAR_12 += 4 + 4 + 4;
 VAR_12 += VAR_0 +
   sizeof(struct ceph_osd_reqid);
 VAR_12 += sizeof(struct ceph_blkin_trace_info);
 VAR_12 += 4 + sizeof(struct ceph_timespec);
 VAR_12 += VAR_0 +
   FUNC_5(&VAR_6->r_base_oloc);
 VAR_12 += 4 + VAR_6->r_base_oid.name_len;
 VAR_12 += 2 + VAR_6->r_num_ops * sizeof(struct ceph_osd_op);
 VAR_12 += 8;
 VAR_12 += 8;
 VAR_12 += 4 + 8 * (VAR_6->r_snapc ? VAR_6->r_snapc->num_snaps : 0);
 VAR_12 += 4 + 8;

 if (VAR_6->r_mempool)
  VAR_11 = FUNC_2(&VAR_10->msgpool_op, VAR_12,
           VAR_8);
 else
  VAR_11 = FUNC_1(VAR_1, VAR_12,
        VAR_8, VAR_7, 1);
 if (!VAR_11)
  return -VAR_4;

 FUNC_6(VAR_11->front.iov_base, 0, VAR_11->front.iov_len);
 VAR_6->r_request = VAR_11;


 VAR_12 = VAR_5;
 VAR_12 += VAR_6->r_base_oid.name_len;
 VAR_12 += VAR_6->r_num_ops * sizeof(struct ceph_osd_op);

 if (VAR_6->r_mempool)
  VAR_11 = FUNC_2(&VAR_10->msgpool_op_reply, VAR_12,
           VAR_9);
 else
  VAR_11 = FUNC_1(VAR_2, VAR_12,
        VAR_9, VAR_7, 1);
 if (!VAR_11)
  return -VAR_4;

 VAR_6->r_reply = VAR_11;

 return 0;
}
