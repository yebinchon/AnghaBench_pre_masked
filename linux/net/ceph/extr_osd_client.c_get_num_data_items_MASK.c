
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {size_t r_num_ops; struct ceph_osd_req_op* r_ops; } ;
struct ceph_osd_req_op {int op; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_request *VAR_0,
          int *VAR_1,
          int *VAR_2)
{
 struct ceph_osd_req_op *VAR_3;

 *VAR_1 = 0;
 *VAR_2 = 0;

 for (VAR_3 = VAR_0->r_ops; VAR_3 != &VAR_0->r_ops[VAR_0->r_num_ops]; VAR_3++) {
  switch (VAR_3->op) {

  case 129:
  case 128:
  case 131:
  case 137:
  case 133:
  case 136:
   *VAR_1 += 1;
   break;


  case 130:
  case 132:
  case 135:
   *VAR_2 += 1;
   break;


  case 134:
   *VAR_1 += 1;
   *VAR_2 += 1;
   break;
  case 138:
   *VAR_1 += 2;
   *VAR_2 += 1;
   break;

  default:
   FUNC_0(!FUNC_1(VAR_3->op));
   break;
  }
 }
}
