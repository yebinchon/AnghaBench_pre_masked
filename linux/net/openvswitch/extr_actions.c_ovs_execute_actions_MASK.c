
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_key {int dummy; } ;
struct sw_flow_actions {int actions_len; int actions; int orig_len; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;
struct TYPE_2__ {int acts_origlen; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct datapath*) ;
 int FUNC_7 (struct datapath*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct datapath *VAR_3, struct sk_buff *VAR_4,
   const struct sw_flow_actions *VAR_5,
   struct sw_flow_key *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_2);
 if (FUNC_8(VAR_8 > VAR_1)) {
  FUNC_5("ovs: recursion limit reached on datapath %s, probable configuration error\n",
         FUNC_6(VAR_3));
  FUNC_4(VAR_4);
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_4)->acts_origlen = VAR_5->orig_len;
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_6,
     VAR_5->actions, VAR_5->actions_len);

 if (VAR_8 == 1)
  FUNC_7(VAR_3);

out:
 FUNC_1(VAR_2);
 return VAR_7;
}
