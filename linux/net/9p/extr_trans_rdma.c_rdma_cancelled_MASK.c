
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_rdma {int excess_rc; } ;
struct p9_req_t {int dummy; } ;
struct p9_client {struct p9_trans_rdma* trans; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct p9_client *VAR_0, struct p9_req_t *VAR_1)
{
 struct p9_trans_rdma *VAR_2 = VAR_0->trans;
 FUNC_0(&VAR_2->excess_rc);
 return 0;
}
