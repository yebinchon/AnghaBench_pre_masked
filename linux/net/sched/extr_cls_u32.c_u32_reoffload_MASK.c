
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {scalar_t__ prio; struct tc_u_common* data; } ;
struct tc_u_knode {int flags; int next; } ;
struct tc_u_hnode {scalar_t__ prio; unsigned int divisor; int flags; int * ht; int next; } ;
struct tc_u_common {int hlist; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int flow_setup_cb_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_proto*,struct tc_u_hnode*,int,int *,void*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct tcf_proto*,struct tc_u_knode*,int,int *,void*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_0, bool VAR_1, flow_setup_cb_t *VAR_2,
    void *VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct tc_u_common *VAR_5 = VAR_0->data;
 struct tc_u_hnode *VAR_6;
 struct tc_u_knode *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_6 = FUNC_0(VAR_5->hlist);
      VAR_6;
      VAR_6 = FUNC_0(VAR_6->next)) {
  if (VAR_6->prio != VAR_0->prio)
   continue;





  if (VAR_1 && !FUNC_1(VAR_6->flags)) {
   VAR_9 = FUNC_2(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3,
        VAR_4);
   if (VAR_9)
    return VAR_9;
  }

  for (VAR_8 = 0; VAR_8 <= VAR_6->divisor; VAR_8++) {
   for (VAR_7 = FUNC_0(VAR_6->ht[VAR_8]);
        VAR_7;
        VAR_7 = FUNC_0(VAR_7->next)) {
    if (FUNC_1(VAR_7->flags))
     continue;

    VAR_9 = FUNC_3(VAR_0, VAR_7, VAR_1, VAR_2,
         VAR_3, VAR_4);
    if (VAR_9)
     return VAR_9;
   }
  }

  if (!VAR_1 && !FUNC_1(VAR_6->flags))
   FUNC_2(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
