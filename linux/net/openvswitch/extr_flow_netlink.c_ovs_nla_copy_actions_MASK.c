
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tci; } ;
struct TYPE_4__ {TYPE_1__ vlan; int type; } ;
struct sw_flow_key {TYPE_2__ eth; } ;
struct sw_flow_actions {int orig_len; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct sw_flow_actions*) ;
 int VAR_0 ;
 int FUNC_1 (struct sw_flow_actions*) ;
 int FUNC_2 (struct net*,struct nlattr const*,struct sw_flow_key const*,struct sw_flow_actions**,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 struct sw_flow_actions* FUNC_4 (int ) ;
 int FUNC_5 (struct nlattr const*) ;
 int FUNC_6 (struct sw_flow_actions*) ;

int FUNC_7(struct net *VAR_1, const struct nlattr *VAR_2,
    const struct sw_flow_key *VAR_3,
    struct sw_flow_actions **VAR_4, bool VAR_5)
{
 int VAR_6;

 *VAR_4 = FUNC_4(FUNC_3(FUNC_5(VAR_2), VAR_0));
 if (FUNC_0(*VAR_4))
  return FUNC_1(*VAR_4);

 (*VAR_4)->orig_len = FUNC_5(VAR_2);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_3->eth.type,
         VAR_3->eth.vlan.tci, VAR_5);
 if (VAR_6)
  FUNC_6(*VAR_4);

 return VAR_6;
}
