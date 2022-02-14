
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_common* data; } ;
struct tc_u_knode {int rwork; int exts; int handle; int res; int next; } ;
struct tc_u_hnode {unsigned int divisor; int handle_idr; int * ht; } ;
struct tc_u_common {int knodes; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (int ,struct tc_u_knode*) ;
 int FUNC_1 (int *,int ) ;
 struct tc_u_knode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct tcf_proto*,int *) ;
 int VAR_0 ;
 int FUNC_6 (struct tc_u_knode*,int) ;
 int FUNC_7 (struct tcf_proto*,struct tc_u_knode*,struct netlink_ext_ack*) ;

__attribute__((used)) static void FUNC_8(struct tcf_proto *VAR_1, struct tc_u_hnode *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct tc_u_common *VAR_4 = VAR_1->data;
 struct tc_u_knode *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_2->divisor; VAR_6++) {
  while ((VAR_5 = FUNC_2(VAR_2->ht[VAR_6])) != ((void*)0)) {
   FUNC_0(VAR_2->ht[VAR_6],
      FUNC_2(VAR_5->next));
   VAR_4->knodes--;
   FUNC_5(VAR_1, &VAR_5->res);
   FUNC_7(VAR_1, VAR_5, VAR_3);
   FUNC_1(&VAR_2->handle_idr, VAR_5->handle);
   if (FUNC_3(&VAR_5->exts))
    FUNC_4(&VAR_5->rwork, VAR_0);
   else
    FUNC_6(VAR_5, 1);
  }
 }
}
