
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ceph_osd_request {unsigned int r_num_ops; struct ceph_osd_req_op* r_ops; } ;
struct ceph_osd_req_op {int flags; int op; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_osd_req_op*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ceph_osd_req_op *
FUNC_3(struct ceph_osd_request *VAR_0, unsigned int VAR_1,
   u16 VAR_2, u32 VAR_3)
{
 struct ceph_osd_req_op *VAR_4;

 FUNC_0(VAR_1 >= VAR_0->r_num_ops);
 FUNC_0(!FUNC_2(VAR_2));

 VAR_4 = &VAR_0->r_ops[VAR_1];
 FUNC_1(VAR_4, 0, sizeof (*VAR_4));
 VAR_4->op = VAR_2;
 VAR_4->flags = VAR_3;

 return VAR_4;
}
