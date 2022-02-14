
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct sw_flow_key {TYPE_1__ eth; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_2 (struct net*,struct nlattr const**,int,struct sw_flow_key*,int) ;
 int FUNC_3 (struct nlattr const*,struct nlattr const**,int*,int) ;
 scalar_t__ FUNC_4 (struct sw_flow_key*) ;

int FUNC_5(struct net *VAR_6, const struct nlattr *VAR_7,
       struct sk_buff *VAR_8,
       struct sw_flow_key *VAR_9, bool VAR_10)
{
 const struct nlattr *VAR_11[VAR_5 + 1];
 u64 VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, VAR_11, &VAR_12, VAR_10);
 if (VAR_13)
  return -VAR_0;


 VAR_13 = FUNC_2(VAR_6, VAR_11, VAR_12, VAR_9, VAR_10);
 if (VAR_13)
  return VAR_13;
 VAR_8->protocol = VAR_9->eth.type;
 VAR_13 = FUNC_1(VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;





 if (VAR_12 & (1 << VAR_3) &&
     VAR_9->eth.type != FUNC_0(VAR_1))
  return -VAR_0;
 if (VAR_12 & (1 << VAR_4) &&
     (VAR_9->eth.type != FUNC_0(VAR_2) ||
      FUNC_4(VAR_9)))
  return -VAR_0;

 return 0;
}
