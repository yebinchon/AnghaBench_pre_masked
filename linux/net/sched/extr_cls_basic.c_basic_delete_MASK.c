
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct basic_head {int flist; int handle_idr; } ;
struct basic_filter {int rwork; int exts; int handle; int res; int link; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct basic_head* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct tcf_proto*,int *) ;

__attribute__((used)) static int FUNC_7(struct tcf_proto *VAR_1, void *VAR_2, bool *VAR_3,
   bool VAR_4, struct netlink_ext_ack *VAR_5)
{
 struct basic_head *VAR_6 = FUNC_3(VAR_1->root);
 struct basic_filter *VAR_7 = VAR_2;

 FUNC_1(&VAR_7->link);
 FUNC_6(VAR_1, &VAR_7->res);
 FUNC_0(&VAR_6->handle_idr, VAR_7->handle);
 FUNC_4(&VAR_7->exts);
 FUNC_5(&VAR_7->rwork, VAR_0);
 *VAR_3 = FUNC_2(&VAR_6->flist);
 return 0;
}
