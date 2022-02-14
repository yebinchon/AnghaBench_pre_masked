
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_exp_event_notifier {int dummy; } ;
struct TYPE_2__ {int nf_expect_event_cb; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct nf_exp_event_notifier*) ;
 struct nf_exp_event_notifier* FUNC_4 (int ,int ) ;

int FUNC_5(struct net *VAR_2,
       struct nf_exp_event_notifier *VAR_3)
{
 int VAR_4;
 struct nf_exp_event_notifier *VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = FUNC_4(VAR_2->ct.nf_expect_event_cb,
        FUNC_0(&VAR_1));
 if (VAR_5 != ((void*)0)) {
  VAR_4 = -VAR_0;
  goto out_unlock;
 }
 FUNC_3(VAR_2->ct.nf_expect_event_cb, VAR_3);
 VAR_4 = 0;

out_unlock:
 FUNC_2(&VAR_1);
 return VAR_4;
}
