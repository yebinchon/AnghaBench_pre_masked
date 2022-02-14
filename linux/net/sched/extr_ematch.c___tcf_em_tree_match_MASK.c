
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_pkt_info {int dummy; } ;
struct TYPE_2__ {int nmatches; } ;
struct tcf_ematch_tree {TYPE_1__ hdr; } ;
struct tcf_ematch {int data; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct tcf_ematch*,int) ;
 struct tcf_ematch* FUNC_2 (struct tcf_ematch_tree*,int) ;
 scalar_t__ FUNC_3 (struct tcf_ematch*) ;
 scalar_t__ FUNC_4 (struct tcf_ematch*) ;
 int FUNC_5 (struct sk_buff*,struct tcf_ematch*,struct tcf_pkt_info*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sk_buff *VAR_1, struct tcf_ematch_tree *VAR_2,
   struct tcf_pkt_info *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 struct tcf_ematch *VAR_7;
 int VAR_8[VAR_0];

proceed:
 while (VAR_5 < VAR_2->hdr.nmatches) {
  VAR_7 = FUNC_2(VAR_2, VAR_5);

  if (FUNC_3(VAR_7)) {
   if (FUNC_6(VAR_4 >= VAR_0))
    goto stack_overflow;

   VAR_8[VAR_4++] = VAR_5;
   VAR_5 = VAR_7->data;
   goto proceed;
  }

  VAR_6 = FUNC_5(VAR_1, VAR_7, VAR_3);

  if (FUNC_1(VAR_7, VAR_6))
   break;

  VAR_5++;
 }

pop_stack:
 if (VAR_4 > 0) {
  VAR_5 = VAR_8[--VAR_4];
  VAR_7 = FUNC_2(VAR_2, VAR_5);

  if (FUNC_4(VAR_7))
   VAR_6 = !VAR_6;

  if (FUNC_1(VAR_7, VAR_6)) {
   goto pop_stack;
  } else {
   VAR_5++;
   goto proceed;
  }
 }

 return VAR_6;

stack_overflow:
 FUNC_0("tc ematch: local stack overflow, increase NET_EMATCH_STACK\n");
 return -1;
}
