
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ceph_osd_request {unsigned int r_num_ops; struct ceph_osd_req_op* r_ops; } ;
struct TYPE_2__ {int length; int offset; } ;
struct ceph_osd_req_op {scalar_t__ op; int indata_len; TYPE_1__ extent; int outdata_len; int flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ceph_osd_req_op* FUNC_1 (struct ceph_osd_request*,unsigned int,scalar_t__,int ) ;

void FUNC_2(struct ceph_osd_request *VAR_2,
    unsigned int VAR_3, u64 VAR_4)
{
 struct ceph_osd_req_op *VAR_5, *VAR_6;

 FUNC_0(VAR_3 + 1 >= VAR_2->r_num_ops);

 VAR_6 = &VAR_2->r_ops[VAR_3];
 VAR_5 = FUNC_1(VAR_2, VAR_3 + 1, VAR_6->op, VAR_6->flags);

 VAR_5->indata_len = VAR_6->indata_len;
 VAR_5->outdata_len = VAR_6->outdata_len;
 VAR_5->extent = VAR_6->extent;

 VAR_5->extent.offset += VAR_4;
 VAR_5->extent.length -= VAR_4;

 if (VAR_5->op == VAR_0 || VAR_5->op == VAR_1)
  VAR_5->indata_len -= VAR_4;
}
