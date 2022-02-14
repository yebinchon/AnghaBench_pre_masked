
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int deleting; struct tcf_proto* next; } ;
struct tcf_chain_info {struct tcf_proto** pprev; struct tcf_proto* next; } ;
struct tcf_chain {int filter_chain_lock; struct tcf_proto* filter_chain; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (struct tcf_proto*,struct tcf_proto*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcf_chain*,struct tcf_proto*) ;
 struct tcf_proto* FUNC_5 (struct tcf_proto*,struct tcf_chain*) ;
 int FUNC_6 (struct tcf_proto*,int) ;
 int FUNC_7 (struct tcf_proto*,int,struct netlink_ext_ack*) ;
 int FUNC_8 (struct tcf_chain*,struct tcf_proto*) ;

__attribute__((used)) static void FUNC_9(struct tcf_chain *VAR_0,
          struct tcf_proto *VAR_1, bool VAR_2,
          struct netlink_ext_ack *VAR_3)
{
 struct tcf_chain_info VAR_4;
 struct tcf_proto *VAR_5;
 struct tcf_proto **VAR_6;
 struct tcf_proto *VAR_7;

 FUNC_2(&VAR_0->filter_chain_lock);


 for (VAR_6 = &VAR_0->filter_chain;
      (VAR_5 = FUNC_5(*VAR_6, VAR_0));
      VAR_6 = &VAR_5->next) {
  if (VAR_5 == VAR_1) {
   VAR_4.pprev = VAR_6;
   VAR_4.next = VAR_5->next;
   FUNC_1(VAR_5->deleting);
   break;
  }
 }




 if (!VAR_5 || !FUNC_6(VAR_1, VAR_2)) {
  FUNC_3(&VAR_0->filter_chain_lock);
  return;
 }

 FUNC_8(VAR_0, VAR_1);
 VAR_7 = FUNC_5(VAR_4.next, VAR_0);
 if (VAR_1 == VAR_0->filter_chain)
  FUNC_4(VAR_0, VAR_7);
 FUNC_0(*VAR_4.pprev, VAR_7);
 FUNC_3(&VAR_0->filter_chain_lock);

 FUNC_7(VAR_1, VAR_2, VAR_3);
}
