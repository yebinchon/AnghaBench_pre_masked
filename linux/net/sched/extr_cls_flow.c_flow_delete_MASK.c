
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_head {int filters; } ;
struct flow_filter {int rwork; int exts; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct flow_head* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct tcf_proto *VAR_1, void *VAR_2, bool *VAR_3,
         bool VAR_4, struct netlink_ext_ack *VAR_5)
{
 struct flow_head *VAR_6 = FUNC_2(VAR_1->root);
 struct flow_filter *VAR_7 = VAR_2;

 FUNC_0(&VAR_7->list);
 FUNC_3(&VAR_7->exts);
 FUNC_4(&VAR_7->rwork, VAR_0);
 *VAR_3 = FUNC_1(&VAR_6->filters);
 return 0;
}
