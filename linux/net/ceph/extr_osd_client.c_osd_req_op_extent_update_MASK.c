
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ceph_osd_request {unsigned int r_num_ops; struct ceph_osd_req_op* r_ops; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct ceph_osd_req_op {scalar_t__ op; int indata_len; TYPE_1__ extent; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct ceph_osd_request *VAR_2,
    unsigned int VAR_3, u64 VAR_4)
{
 struct ceph_osd_req_op *VAR_5;
 u64 VAR_6;

 FUNC_0(VAR_3 >= VAR_2->r_num_ops);
 VAR_5 = &VAR_2->r_ops[VAR_3];
 VAR_6 = VAR_5->extent.length;

 if (VAR_4 == VAR_6)
  return;
 FUNC_0(VAR_4 > VAR_6);

 VAR_5->extent.length = VAR_4;
 if (VAR_5->op == VAR_0 || VAR_5->op == VAR_1)
  VAR_5->indata_len -= VAR_6 - VAR_4;
}
