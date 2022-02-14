
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {struct ebt_nflog_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ flags; int qthreshold; int group; int copy_len; } ;
struct TYPE_4__ {TYPE_1__ ulog; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;
struct net {int dummy; } ;
struct ebt_nflog_info {int prefix; int threshold; int group; int len; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,char*,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;
 int FUNC_2 (struct xt_action_param const*) ;
 struct net* FUNC_3 (struct xt_action_param const*) ;
 int FUNC_4 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_3, const struct xt_action_param *VAR_4)
{
 const struct ebt_nflog_info *VAR_5 = VAR_4->targinfo;
 struct net *VAR_6 = FUNC_3(VAR_4);
 struct nf_loginfo VAR_7;

 VAR_7.type = VAR_1;
 VAR_7.u.ulog.copy_len = VAR_5->len;
 VAR_7.u.ulog.group = VAR_5->group;
 VAR_7.u.ulog.qthreshold = VAR_5->threshold;
 VAR_7.u.ulog.flags = 0;

 FUNC_0(VAR_6, VAR_2, FUNC_1(VAR_4), VAR_3, FUNC_2(VAR_4),
        FUNC_4(VAR_4), &VAR_7, "%s", VAR_5->prefix);
 return VAR_0;
}
