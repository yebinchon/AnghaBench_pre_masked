
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_mirred {int tcfm_dev; int tcfm_list; } ;
struct tc_action {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct net_device* FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tcf_mirred* FUNC_5 (struct tc_action*) ;

__attribute__((used)) static void FUNC_6(struct tc_action *VAR_1)
{
 struct tcf_mirred *VAR_2 = FUNC_5(VAR_1);
 struct net_device *VAR_3;

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_2->tcfm_list);
 FUNC_4(&VAR_0);


 VAR_3 = FUNC_2(VAR_2->tcfm_dev, 1);
 if (VAR_3)
  FUNC_0(VAR_3);
}
