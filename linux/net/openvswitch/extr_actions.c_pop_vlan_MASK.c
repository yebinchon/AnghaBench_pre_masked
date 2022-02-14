
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tpid; scalar_t__ tci; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct sw_flow_key {TYPE_2__ eth; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sw_flow_key*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_2(VAR_0)) {
  FUNC_0(VAR_1);
 } else {
  VAR_1->eth.vlan.tci = 0;
  VAR_1->eth.vlan.tpid = 0;
 }
 return VAR_2;
}
