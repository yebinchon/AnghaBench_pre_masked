
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_log_info {int prefix; int logflags; int level; } ;
struct xt_action_param {struct xt_log_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int logflags; int level; } ;
struct TYPE_4__ {TYPE_1__ log; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct net*,int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,char*,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;
 int FUNC_2 (struct xt_action_param const*) ;
 int FUNC_3 (struct xt_action_param const*) ;
 struct net* FUNC_4 (struct xt_action_param const*) ;
 int FUNC_5 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_2, const struct xt_action_param *VAR_3)
{
 const struct xt_log_info *VAR_4 = VAR_3->targinfo;
 struct net *VAR_5 = FUNC_4(VAR_3);
 struct nf_loginfo VAR_6;

 VAR_6.type = VAR_0;
 VAR_6.u.log.level = VAR_4->level;
 VAR_6.u.log.logflags = VAR_4->logflags;

 FUNC_0(VAR_5, FUNC_1(VAR_3), FUNC_2(VAR_3), VAR_2, FUNC_3(VAR_3),
        FUNC_5(VAR_3), &VAR_6, "%s", VAR_4->prefix);
 return VAR_1;
}
