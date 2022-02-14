
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_mirred {int tcf_lock; int tcfm_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct net_device* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct net_device *FUNC_2(struct tcf_mirred *VAR_0)
{
 return FUNC_1(VAR_0->tcfm_dev,
      FUNC_0(&VAR_0->tcf_lock));
}
