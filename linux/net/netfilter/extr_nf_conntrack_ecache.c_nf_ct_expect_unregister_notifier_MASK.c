
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_exp_event_notifier {int dummy; } ;
struct TYPE_2__ {int nf_expect_event_cb; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct nf_exp_event_notifier* FUNC_5 (int ,int ) ;

void FUNC_6(struct net *VAR_1,
          struct nf_exp_event_notifier *VAR_2)
{
 struct nf_exp_event_notifier *VAR_3;

 FUNC_3(&VAR_0);
 VAR_3 = FUNC_5(VAR_1->ct.nf_expect_event_cb,
        FUNC_2(&VAR_0));
 FUNC_0(VAR_3 != VAR_2);
 FUNC_1(VAR_1->ct.nf_expect_event_cb, ((void*)0));
 FUNC_4(&VAR_0);

}
