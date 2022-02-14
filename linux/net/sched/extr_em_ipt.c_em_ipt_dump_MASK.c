
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_ematch {scalar_t__ data; } ;
struct sk_buff {int dummy; } ;
struct em_ipt_match {int match_data; TYPE_1__* match; int nfproto; int hook; } ;
struct TYPE_2__ {int matchsize; scalar_t__ usersize; int revision; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6, struct tcf_ematch *VAR_7)
{
 struct em_ipt_match *VAR_8 = (void *)VAR_7->data;

 if (FUNC_1(VAR_6, VAR_3, VAR_8->match->name) < 0)
  return -VAR_0;
 if (FUNC_2(VAR_6, VAR_1, VAR_8->hook) < 0)
  return -VAR_0;
 if (FUNC_3(VAR_6, VAR_4, VAR_8->match->revision) < 0)
  return -VAR_0;
 if (FUNC_3(VAR_6, VAR_5, VAR_8->nfproto) < 0)
  return -VAR_0;
 if (FUNC_0(VAR_6, VAR_2,
      VAR_8->match->usersize ?: VAR_8->match->matchsize,
      VAR_8->match_data) < 0)
  return -VAR_0;

 return 0;
}
