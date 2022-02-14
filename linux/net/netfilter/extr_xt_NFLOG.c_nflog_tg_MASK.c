
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_nflog_info {int flags; int prefix; int threshold; int group; int len; } ;
struct xt_action_param {struct xt_nflog_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flags; int qthreshold; int group; int copy_len; } ;
struct TYPE_4__ {TYPE_1__ ulog; } ;
struct nf_loginfo {TYPE_2__ u; int type; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,int ,int ,struct sk_buff*,int ,int ,struct nf_loginfo*,char*,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;
 int FUNC_2 (struct xt_action_param const*) ;
 int FUNC_3 (struct xt_action_param const*) ;
 struct net* FUNC_4 (struct xt_action_param const*) ;
 int FUNC_5 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_4, const struct xt_action_param *VAR_5)
{
 const struct xt_nflog_info *VAR_6 = VAR_5->targinfo;
 struct net *VAR_7 = FUNC_4(VAR_5);
 struct nf_loginfo VAR_8;

 VAR_8.type = VAR_1;
 VAR_8.u.ulog.copy_len = VAR_6->len;
 VAR_8.u.ulog.group = VAR_6->group;
 VAR_8.u.ulog.qthreshold = VAR_6->threshold;
 VAR_8.u.ulog.flags = 0;

 if (VAR_6->flags & VAR_3)
  VAR_8.u.ulog.flags |= VAR_0;

 FUNC_0(VAR_7, FUNC_1(VAR_5), FUNC_2(VAR_5), VAR_4, FUNC_3(VAR_5),
        FUNC_5(VAR_5), &VAR_8, "%s", VAR_6->prefix);

 return VAR_2;
}
