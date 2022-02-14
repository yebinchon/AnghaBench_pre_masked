
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ip6t_reject_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ip6t_reject_info {int with; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct net*,struct sk_buff*,int ) ;
 int FUNC_1 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct xt_action_param const*) ;
 struct net* FUNC_3 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_8, const struct xt_action_param *VAR_9)
{
 const struct ip6t_reject_info *VAR_10 = VAR_9->targinfo;
 struct net *VAR_11 = FUNC_3(VAR_9);

 switch (VAR_10->with) {
 case 132:
  FUNC_1(VAR_11, VAR_8, VAR_2, FUNC_2(VAR_9));
  break;
 case 135:
  FUNC_1(VAR_11, VAR_8, VAR_1,
     FUNC_2(VAR_9));
  break;
 case 133:
  FUNC_1(VAR_11, VAR_8, VAR_3,
     FUNC_2(VAR_9));
  break;
 case 136:
  FUNC_1(VAR_11, VAR_8, VAR_0,
     FUNC_2(VAR_9));
  break;
 case 130:
  FUNC_1(VAR_11, VAR_8, VAR_5,
     FUNC_2(VAR_9));
  break;
 case 134:

  break;
 case 128:
  FUNC_0(VAR_11, VAR_8, FUNC_2(VAR_9));
  break;
 case 131:
  FUNC_1(VAR_11, VAR_8, VAR_4, FUNC_2(VAR_9));
  break;
 case 129:
  FUNC_1(VAR_11, VAR_8, VAR_6,
     FUNC_2(VAR_9));
  break;
 }

 return VAR_7;
}
