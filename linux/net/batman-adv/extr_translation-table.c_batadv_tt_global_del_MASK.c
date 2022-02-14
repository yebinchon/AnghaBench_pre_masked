
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tt_local_entry {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct batadv_tt_global_entry {TYPE_1__ common; int orig_list; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int FUNC_0 (struct batadv_tt_global_entry*) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_tt_global_entry*,struct batadv_orig_node*,char const*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_tt_global_entry*,struct batadv_orig_node*,char const*) ;
 int FUNC_3 (struct batadv_tt_global_entry*) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_tt_global_entry*,char const*) ;
 struct batadv_tt_global_entry* FUNC_5 (struct batadv_priv*,unsigned char const*,unsigned short) ;
 int FUNC_6 (struct batadv_tt_local_entry*) ;
 struct batadv_tt_local_entry* FUNC_7 (struct batadv_priv*,int ,unsigned short) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_0,
     struct batadv_orig_node *VAR_1,
     const unsigned char *VAR_2, unsigned short VAR_3,
     const char *VAR_4, bool VAR_5)
{
 struct batadv_tt_global_entry *VAR_6;
 struct batadv_tt_local_entry *VAR_7 = ((void*)0);

 VAR_6 = FUNC_5(VAR_0, VAR_2, VAR_3);
 if (!VAR_6)
  goto out;

 if (!VAR_5) {
  FUNC_1(VAR_0, VAR_6,
            VAR_1, VAR_4);

  if (FUNC_8(&VAR_6->orig_list))
   FUNC_4(VAR_0, VAR_6,
           VAR_4);

  goto out;
 }
 VAR_7 = FUNC_7(VAR_0,
      VAR_6->common.addr,
      VAR_3);
 if (VAR_7) {

  FUNC_0(VAR_6);
  FUNC_4(VAR_0, VAR_6, VAR_4);
 } else {

  FUNC_2(VAR_0, VAR_6,
          VAR_1, VAR_4);
 }

out:
 if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_7)
  FUNC_6(VAR_7);
}
