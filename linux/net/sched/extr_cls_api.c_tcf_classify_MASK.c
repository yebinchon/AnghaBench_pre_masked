
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_result {struct tcf_proto* goto_tp; } ;
struct tcf_proto {scalar_t__ protocol; int (* classify ) (struct sk_buff*,struct tcf_proto const*,struct tcf_result*) ;int prio; TYPE_2__* chain; int next; } ;
struct tc_skb_ext {int chain; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {TYPE_1__* block; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 struct tcf_proto* FUNC_5 (int ) ;
 struct tc_skb_ext* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,struct tcf_proto const*,struct tcf_result*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct sk_buff *VAR_7, const struct tcf_proto *VAR_8,
   struct tcf_result *VAR_9, bool VAR_10)
{
 for (; VAR_8; VAR_8 = FUNC_5(VAR_8->next)) {
  __be16 VAR_11 = FUNC_8(VAR_7);
  int VAR_12;

  if (VAR_8->protocol != VAR_11 &&
      VAR_8->protocol != FUNC_2(VAR_0))
   continue;

  VAR_12 = VAR_8->classify(VAR_7, VAR_8, VAR_9);
  if (VAR_12 >= 0)
   return VAR_12;
 }

 return VAR_5;
}
