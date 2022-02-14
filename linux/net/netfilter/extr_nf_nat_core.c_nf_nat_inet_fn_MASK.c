
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_nat_lookup_hook_priv {int entries; } ;
struct nf_hook_state {int hook; int out; } ;
struct nf_hook_entries {int num_hook_entries; TYPE_1__* hooks; } ;
struct nf_conn_nat {int dummy; } ;
struct nf_conn {int status; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {unsigned int (* hook ) (int ,struct sk_buff*,struct nf_hook_state const*) ;int priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;
 int FUNC_3 (struct nf_conn*,int,struct sk_buff*) ;
 unsigned int FUNC_4 (struct nf_conn*,int ) ;
 int FUNC_5 (struct nf_conn*,int) ;
 int FUNC_6 (int ,int,struct nf_conn_nat*,int ) ;
 unsigned int FUNC_7 (struct nf_conn*,int,int ,struct sk_buff*) ;
 struct nf_conn_nat* FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (char*,char*,struct nf_conn*,int ) ;
 struct nf_hook_entries* FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ,struct sk_buff*,struct nf_hook_state const*) ;

unsigned int
FUNC_12(void *VAR_5, struct sk_buff *VAR_6,
        const struct nf_hook_state *VAR_7)
{
 struct nf_conn *VAR_8;
 enum ip_conntrack_info VAR_9;
 struct nf_conn_nat *VAR_10;

 enum nf_nat_manip_type VAR_11 = FUNC_0(VAR_7->hook);

 VAR_8 = FUNC_2(VAR_6, &VAR_9);





 if (!VAR_8)
  return VAR_2;

 VAR_10 = FUNC_8(VAR_8);

 switch (VAR_9) {
 case 129:
 case 128:

 case 130:



  if (!FUNC_5(VAR_8, VAR_11)) {
   struct nf_nat_lookup_hook_priv *VAR_12 = VAR_5;
   struct nf_hook_entries *VAR_13 = FUNC_10(VAR_12->entries);
   unsigned int VAR_14;
   int VAR_15;

   if (!VAR_13)
    goto null_bind;

   for (VAR_15 = 0; VAR_15 < VAR_13->num_hook_entries; VAR_15++) {
    VAR_14 = VAR_13->hooks[VAR_15].hook(VAR_13->hooks[VAR_15].priv, VAR_6,
             VAR_7);
    if (VAR_14 != VAR_2)
     return VAR_14;
    if (FUNC_5(VAR_8, VAR_11))
     goto do_nat;
   }
null_bind:
   VAR_14 = FUNC_4(VAR_8, VAR_7->hook);
   if (VAR_14 != VAR_2)
    return VAR_14;
  } else {
   FUNC_9("Already setup manip %s for ct %p (status bits 0x%lx)\n",
     VAR_11 == VAR_4 ? "SRC" : "DST",
     VAR_8, VAR_8->status);
   if (FUNC_6(VAR_7->hook, VAR_9, VAR_10,
            VAR_7->out))
    goto oif_changed;
  }
  break;
 default:

  FUNC_1(VAR_9 != VAR_0 &&
   VAR_9 != VAR_1);
  if (FUNC_6(VAR_7->hook, VAR_9, VAR_10, VAR_7->out))
   goto oif_changed;
 }
do_nat:
 return FUNC_7(VAR_8, VAR_9, VAR_7->hook, VAR_6);

oif_changed:
 FUNC_3(VAR_8, VAR_9, VAR_6);
 return VAR_3;
}
