
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tc_action_priv_destructor ;
struct tcf_mirred {int tcfm_dev; } ;
struct tc_action {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 struct tcf_mirred* FUNC_4 (struct tc_action const*) ;

__attribute__((used)) static struct net_device *
FUNC_5(const struct tc_action *VAR_1,
     tc_action_priv_destructor *VAR_2)
{
 struct tcf_mirred *VAR_3 = FUNC_4(VAR_1);
 struct net_device *VAR_4;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_3->tcfm_dev);
 if (VAR_4) {
  FUNC_0(VAR_4);
  *VAR_2 = VAR_0;
 }
 FUNC_3();

 return VAR_4;
}
