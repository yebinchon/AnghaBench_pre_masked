
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {int hotdrop; int targinfo; TYPE_1__* target; struct nf_hook_state const* state; } ;
struct sk_buff {int len; } ;
struct nf_hook_state {unsigned int hook; int out; int in; } ;
struct ebt_table_info {char* entries; struct ebt_entries** hook_entry; struct ebt_chainstack** chainstack; int nentries; int counters; } ;
struct ebt_table {int lock; struct ebt_table_info* private; } ;
struct ebt_standard_target {int verdict; } ;
struct TYPE_4__ {TYPE_1__* target; } ;
struct ebt_entry_target {TYPE_2__ u; int data; } ;
struct ebt_entry {int dummy; } ;
struct ebt_entries {int nentries; int counter_offset; int distinguisher; int policy; scalar_t__ data; } ;
struct ebt_counter {int dummy; } ;
struct ebt_chainstack {int n; struct ebt_entry* e; struct ebt_entries* chaininfo; } ;
struct TYPE_3__ {int (* target ) (struct sk_buff*,struct xt_action_param*) ;} ;


 int FUNC_0 (struct ebt_counter,int ,int) ;
 struct ebt_counter* FUNC_1 (int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ebt_entry*,int ,struct sk_buff*,struct xt_action_param*) ;
 int VAR_3 ;
 int FUNC_3 (struct ebt_entry*,int ,struct sk_buff*,struct xt_action_param*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (struct ebt_entry*,struct sk_buff*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ebt_entry_target* FUNC_6 (struct ebt_entry*) ;
 void* FUNC_7 (struct ebt_entry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,struct xt_action_param*) ;

unsigned int FUNC_12(struct sk_buff *VAR_8,
     const struct nf_hook_state *VAR_9,
     struct ebt_table *VAR_10)
{
 unsigned int VAR_11 = VAR_9->hook;
 int VAR_12, VAR_13;
 struct ebt_entry *VAR_14;
 struct ebt_counter *VAR_15, *VAR_16;
 const struct ebt_entry_target *VAR_17;
 int VAR_18, VAR_19 = 0;
 struct ebt_chainstack *VAR_20;
 struct ebt_entries *VAR_21;
 const char *VAR_22;
 const struct ebt_table_info *VAR_23;
 struct xt_action_param VAR_24;

 VAR_24.state = VAR_9;
 VAR_24.hotdrop = 0;

 FUNC_8(&VAR_10->lock);
 VAR_23 = VAR_10->private;
 VAR_16 = FUNC_1(VAR_23->counters, VAR_23->nentries,
    FUNC_10());
 if (VAR_23->chainstack)
  VAR_20 = VAR_23->chainstack[FUNC_10()];
 else
  VAR_20 = ((void*)0);
 VAR_21 = VAR_23->hook_entry[VAR_11];
 VAR_13 = VAR_23->hook_entry[VAR_11]->nentries;
 VAR_14 = (struct ebt_entry *)(VAR_23->hook_entry[VAR_11]->data);
 VAR_15 = VAR_16 + VAR_23->hook_entry[VAR_11]->counter_offset;

 VAR_22 = VAR_23->entries;
 VAR_12 = 0;
 while (VAR_12 < VAR_13) {
  if (FUNC_5(VAR_14, VAR_8, VAR_9->in, VAR_9->out))
   goto letscontinue;

  if (FUNC_2(VAR_14, VAR_6, VAR_8, &VAR_24) != 0)
   goto letscontinue;
  if (VAR_24.hotdrop) {
   FUNC_9(&VAR_10->lock);
   return VAR_5;
  }

  FUNC_0(*(VAR_15 + VAR_12), VAR_8->len, 1);




  FUNC_3(VAR_14, VAR_7, VAR_8, &VAR_24);

  VAR_17 = FUNC_6(VAR_14);

  if (!VAR_17->u.target->target)
   VAR_18 = ((struct ebt_standard_target *)VAR_17)->verdict;
  else {
   VAR_24.target = VAR_17->u.target;
   VAR_24.targinfo = VAR_17->data;
   VAR_18 = VAR_17->u.target->target(VAR_8, &VAR_24);
  }
  if (VAR_18 == VAR_0) {
   FUNC_9(&VAR_10->lock);
   return VAR_4;
  }
  if (VAR_18 == VAR_2) {
   FUNC_9(&VAR_10->lock);
   return VAR_5;
  }
  if (VAR_18 == VAR_3) {
letsreturn:
   if (FUNC_4(VAR_19 == 0, "RETURN on base chain")) {

    goto letscontinue;
   }

   VAR_19--;

   VAR_12 = VAR_20[VAR_19].n;
   VAR_21 = VAR_20[VAR_19].chaininfo;
   VAR_13 = VAR_21->nentries;
   VAR_14 = VAR_20[VAR_19].e;
   VAR_15 = VAR_16 +
      VAR_21->counter_offset;
   continue;
  }
  if (VAR_18 == VAR_1)
   goto letscontinue;

  if (FUNC_4(VAR_18 < 0, "bogus standard verdict\n")) {
   FUNC_9(&VAR_10->lock);
   return VAR_5;
  }


  VAR_20[VAR_19].n = VAR_12 + 1;
  VAR_20[VAR_19].chaininfo = VAR_21;
  VAR_20[VAR_19].e = FUNC_7(VAR_14);
  VAR_12 = 0;
  VAR_21 = (struct ebt_entries *) (VAR_22 + VAR_18);

  if (FUNC_4(VAR_21->distinguisher, "jump to non-chain\n")) {
   FUNC_9(&VAR_10->lock);
   return VAR_5;
  }

  VAR_13 = VAR_21->nentries;
  VAR_14 = (struct ebt_entry *)VAR_21->data;
  VAR_15 = VAR_16 + VAR_21->counter_offset;
  VAR_19++;
  continue;
letscontinue:
  VAR_14 = FUNC_7(VAR_14);
  VAR_12++;
 }


 if (VAR_21->policy == VAR_3)
  goto letsreturn;
 if (VAR_21->policy == VAR_0) {
  FUNC_9(&VAR_10->lock);
  return VAR_4;
 }
 FUNC_9(&VAR_10->lock);
 return VAR_5;
}
