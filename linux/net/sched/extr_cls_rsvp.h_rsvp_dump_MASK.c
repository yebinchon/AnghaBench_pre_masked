
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct tc_rsvp_pinfo {scalar_t__ pad; int tunnelhdr; int tunnelid; int protocol; int spi; int dpi; } ;
struct sk_buff {int len; } ;
struct rsvp_session {int tunnelid; int protocol; int dpi; struct tc_rsvp_pinfo dst; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct rsvp_filter {int handle; int exts; struct tc_rsvp_pinfo* src; TYPE_1__ res; int tunnelhdr; int spi; struct rsvp_session* sess; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
typedef int pinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tc_rsvp_pinfo*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_5, struct tcf_proto *VAR_6, void *VAR_7,
       struct sk_buff *VAR_8, struct tcmsg *VAR_9, bool VAR_10)
{
 struct rsvp_filter *VAR_11 = VAR_7;
 struct rsvp_session *VAR_12;
 struct nlattr *VAR_13;
 struct tc_rsvp_pinfo VAR_14;

 if (VAR_11 == ((void*)0))
  return VAR_8->len;
 VAR_12 = VAR_11->sess;

 VAR_9->tcm_handle = VAR_11->handle;

 VAR_13 = FUNC_2(VAR_8, VAR_0);
 if (VAR_13 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_8, VAR_2, sizeof(VAR_12->dst), &VAR_12->dst))
  goto nla_put_failure;
 VAR_14.dpi = VAR_12->dpi;
 VAR_14.spi = VAR_11->spi;
 VAR_14.protocol = VAR_12->protocol;
 VAR_14.tunnelid = VAR_12->tunnelid;
 VAR_14.tunnelhdr = VAR_11->tunnelhdr;
 VAR_14.pad = 0;
 if (FUNC_3(VAR_8, VAR_3, sizeof(VAR_14), &VAR_14))
  goto nla_put_failure;
 if (VAR_11->res.classid &&
     FUNC_4(VAR_8, VAR_1, VAR_11->res.classid))
  goto nla_put_failure;
 if (((VAR_11->handle >> 8) & 0xFF) != 16 &&
     FUNC_3(VAR_8, VAR_4, sizeof(VAR_11->src), VAR_11->src))
  goto nla_put_failure;

 if (FUNC_5(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;

 FUNC_1(VAR_8, VAR_13);

 if (FUNC_6(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;
 return VAR_8->len;

nla_put_failure:
 FUNC_0(VAR_8, VAR_13);
 return -1;
}
