
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_common* data; int root; int prio; } ;
struct tc_u_hnode {int handle; int is_root; int refcnt; int next; int handle_idr; int prio; } ;
struct tc_u_common {int hlist; int refcnt; int hnode; int handle_idr; void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tc_u_common*,struct tc_u_hnode*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tc_u_hnode*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct tc_u_hnode*) ;
 struct tc_u_common* FUNC_8 (void*) ;
 void* FUNC_9 (struct tcf_proto*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(struct tcf_proto *VAR_2)
{
 struct tc_u_hnode *VAR_3;
 void *VAR_4 = FUNC_9(VAR_2);
 struct tc_u_common *VAR_5 = FUNC_8(VAR_4);

 VAR_3 = FUNC_6(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->refcnt++;
 VAR_3->handle = VAR_5 ? FUNC_2(VAR_5, VAR_3) : 0x80000000;
 VAR_3->prio = VAR_2->prio;
 VAR_3->is_root = 1;
 FUNC_4(&VAR_3->handle_idr);

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
  if (VAR_5 == ((void*)0)) {
   FUNC_5(VAR_3);
   return -VAR_0;
  }
  VAR_5->ptr = VAR_4;
  FUNC_0(&VAR_5->hnode);
  FUNC_4(&VAR_5->handle_idr);

  FUNC_3(&VAR_5->hnode, FUNC_10(VAR_4));
 }

 VAR_5->refcnt++;
 FUNC_1(VAR_3->next, VAR_5->hlist);
 FUNC_7(VAR_5->hlist, VAR_3);

 VAR_3->refcnt++;
 FUNC_7(VAR_2->root, VAR_3);
 VAR_2->data = VAR_5;
 return 0;
}
