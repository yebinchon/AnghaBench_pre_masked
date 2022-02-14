
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nf_exp_event_notifier {int (* fcn ) (int,struct nf_exp_event*) ;} ;
struct nf_exp_event {int report; int portid; struct nf_conntrack_expect* exp; } ;
struct nf_conntrack_expect {int master; } ;
struct nf_conntrack_ecache {int expmask; } ;
struct TYPE_2__ {int nf_expect_event_cb; } ;
struct net {TYPE_1__ ct; } ;
typedef enum ip_conntrack_expect_events { ____Placeholder_ip_conntrack_expect_events } ip_conntrack_expect_events ;


 struct nf_conntrack_ecache* FUNC_0 (int ) ;
 struct net* FUNC_1 (struct nf_conntrack_expect*) ;
 struct nf_exp_event_notifier* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,struct nf_exp_event*) ;

void FUNC_6(enum ip_conntrack_expect_events VAR_0,
          struct nf_conntrack_expect *VAR_1,
          u32 VAR_2, int VAR_3)

{
 struct net *VAR_4 = FUNC_1(VAR_1);
 struct nf_exp_event_notifier *VAR_5;
 struct nf_conntrack_ecache *VAR_6;

 FUNC_3();
 VAR_5 = FUNC_2(VAR_4->ct.nf_expect_event_cb);
 if (!VAR_5)
  goto out_unlock;

 VAR_6 = FUNC_0(VAR_1->master);
 if (!VAR_6)
  goto out_unlock;

 if (VAR_6->expmask & (1 << VAR_0)) {
  struct nf_exp_event VAR_7 = {
   .exp = VAR_1,
   .portid = VAR_2,
   .report = VAR_3
  };
  VAR_5->fcn(1 << VAR_0, &VAR_7);
 }
out_unlock:
 FUNC_4();
}
