
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_common* data; int root; } ;
struct tc_u_hnode {int refcnt; int next; } ;
struct tc_u_common {scalar_t__ refcnt; int handle_idr; int hlist; int hnode; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tc_u_common*) ;
 int FUNC_5 (struct tc_u_hnode*,int ) ;
 int VAR_0 ;
 struct tc_u_hnode* FUNC_6 (int ) ;
 int FUNC_7 (struct tcf_proto*,struct tc_u_hnode*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct tcf_proto*,struct tc_u_hnode*,struct netlink_ext_ack*) ;

__attribute__((used)) static void FUNC_9(struct tcf_proto *VAR_1, bool VAR_2,
   struct netlink_ext_ack *VAR_3)
{
 struct tc_u_common *VAR_4 = VAR_1->data;
 struct tc_u_hnode *VAR_5 = FUNC_6(VAR_1->root);

 FUNC_1(VAR_5 == ((void*)0));

 if (VAR_5 && --VAR_5->refcnt == 1)
  FUNC_8(VAR_1, VAR_5, VAR_3);

 if (--VAR_4->refcnt == 0) {
  struct tc_u_hnode *VAR_6;

  FUNC_2(&VAR_4->hnode);

  while ((VAR_6 = FUNC_6(VAR_4->hlist)) != ((void*)0)) {
   FUNC_7(VAR_1, VAR_6, VAR_3);
   FUNC_0(VAR_4->hlist, VAR_6->next);




   if (--VAR_6->refcnt == 0)
    FUNC_5(VAR_6, VAR_0);
  }

  FUNC_3(&VAR_4->handle_idr);
  FUNC_4(VAR_4);
 }

 VAR_1->data = ((void*)0);
}
