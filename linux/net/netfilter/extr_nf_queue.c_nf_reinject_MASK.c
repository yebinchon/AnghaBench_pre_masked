
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int sk; struct net* net; int (* okfn ) (struct net*,int ,struct sk_buff*) ;int hook; int pf; } ;
struct nf_queue_entry {unsigned int hook_index; TYPE_1__ state; struct sk_buff* skb; } ;
struct nf_hook_entry {int dummy; } ;
struct nf_hook_entries {unsigned int num_hook_entries; struct nf_hook_entry* hooks; } ;
struct net {int dummy; } ;



 unsigned int VAR_0 ;

 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nf_queue_entry*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct nf_hook_entries* FUNC_5 (struct net const*,int ,int ) ;
 unsigned int FUNC_6 (struct nf_hook_entry const*,struct sk_buff*,TYPE_1__*) ;
 unsigned int FUNC_7 (struct sk_buff*,TYPE_1__*,struct nf_hook_entries const*,unsigned int*) ;
 int FUNC_8 (struct sk_buff*,TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_9 (struct nf_queue_entry*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct nf_queue_entry*) ;
 int FUNC_11 (struct net*,int ,struct sk_buff*) ;

void FUNC_12(struct nf_queue_entry *VAR_3, unsigned int VAR_4)
{
 const struct nf_hook_entry *VAR_5;
 const struct nf_hook_entries *VAR_6;
 struct sk_buff *VAR_7 = VAR_3->skb;
 const struct net *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 u8 VAR_11;

 VAR_8 = VAR_3->state.net;
 VAR_11 = VAR_3->state.pf;

 VAR_6 = FUNC_5(VAR_8, VAR_11, VAR_3->state.hook);

 FUNC_9(VAR_3);

 VAR_9 = VAR_3->hook_index;
 if (FUNC_0(!VAR_6 || VAR_9 >= VAR_6->num_hook_entries)) {
  FUNC_2(VAR_7);
  FUNC_1(VAR_3);
  return;
 }

 VAR_5 = &VAR_6->hooks[VAR_9];


 if (VAR_4 == VAR_1)
  VAR_4 = FUNC_6(VAR_5, VAR_7, &VAR_3->state);

 if (VAR_4 == 131) {
  if (FUNC_10(VAR_7, VAR_3) < 0)
   VAR_4 = VAR_0;
 }

 if (VAR_4 == 131) {
next_hook:
  ++VAR_9;
  VAR_4 = FUNC_7(VAR_7, &VAR_3->state, VAR_6, &VAR_9);
 }

 switch (VAR_4 & VAR_2) {
 case 131:
 case 128:
  FUNC_3();
  VAR_3->state.okfn(VAR_3->state.net, VAR_3->state.sk, VAR_7);
  FUNC_4();
  break;
 case 130:
  VAR_10 = FUNC_8(VAR_7, &VAR_3->state, VAR_9, VAR_4);
  if (VAR_10 == 1)
   goto next_hook;
  break;
 case 129:
  break;
 default:
  FUNC_2(VAR_7);
 }

 FUNC_1(VAR_3);
}
