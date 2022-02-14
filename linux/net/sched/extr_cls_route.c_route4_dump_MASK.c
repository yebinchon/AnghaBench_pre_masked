
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int classid; } ;
struct route4_filter {int handle; int id; int iif; int exts; TYPE_1__ res; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_5, struct tcf_proto *VAR_6, void *VAR_7,
         struct sk_buff *VAR_8, struct tcmsg *VAR_9, bool VAR_10)
{
 struct route4_filter *VAR_11 = VAR_7;
 struct nlattr *VAR_12;
 u32 VAR_13;

 if (VAR_11 == ((void*)0))
  return VAR_8->len;

 VAR_9->tcm_handle = VAR_11->handle;

 VAR_12 = FUNC_2(VAR_8, VAR_0);
 if (VAR_12 == ((void*)0))
  goto nla_put_failure;

 if (!(VAR_11->handle & 0x8000)) {
  VAR_13 = VAR_11->id & 0xFF;
  if (FUNC_3(VAR_8, VAR_4, VAR_13))
   goto nla_put_failure;
 }
 if (VAR_11->handle & 0x80000000) {
  if ((VAR_11->handle >> 16) != 0xFFFF &&
      FUNC_3(VAR_8, VAR_3, VAR_11->iif))
   goto nla_put_failure;
 } else {
  VAR_13 = VAR_11->id >> 16;
  if (FUNC_3(VAR_8, VAR_2, VAR_13))
   goto nla_put_failure;
 }
 if (VAR_11->res.classid &&
     FUNC_3(VAR_8, VAR_1, VAR_11->res.classid))
  goto nla_put_failure;

 if (FUNC_4(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;

 FUNC_1(VAR_8, VAR_12);

 if (FUNC_5(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;

 return VAR_8->len;

nla_put_failure:
 FUNC_0(VAR_8, VAR_12);
 return -1;
}
