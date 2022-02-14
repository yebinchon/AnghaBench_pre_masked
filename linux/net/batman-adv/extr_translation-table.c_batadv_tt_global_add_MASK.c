
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct batadv_tt_common_entry {unsigned char const* addr; unsigned short vid; int flags; int hash_entry; int refcount; void* added_at; } ;
struct batadv_tt_global_entry {struct batadv_tt_common_entry common; void* roam_at; int list_lock; int orig_list_count; int orig_list; } ;
struct TYPE_4__ {int global_hash; } ;
struct batadv_priv {TYPE_2__ tt; } ;
struct batadv_orig_node {int orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct batadv_priv*,int ,unsigned short) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,struct batadv_priv*,char*,unsigned char const*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,struct batadv_tt_common_entry*,int *) ;
 int FUNC_5 (unsigned short) ;
 int VAR_9 ;
 int FUNC_6 (struct batadv_tt_global_entry*) ;
 scalar_t__ FUNC_7 (struct batadv_tt_global_entry*,struct batadv_orig_node*,int *) ;
 int FUNC_8 (struct batadv_tt_global_entry*) ;
 struct batadv_tt_global_entry* FUNC_9 (struct batadv_priv*,unsigned char const*,unsigned short) ;
 int FUNC_10 (struct batadv_tt_global_entry*,struct batadv_orig_node*,int ,int) ;
 int FUNC_11 (struct batadv_tt_local_entry*) ;
 struct batadv_tt_local_entry* FUNC_12 (struct batadv_priv*,unsigned char const*,unsigned short) ;
 int FUNC_13 (struct batadv_priv*,unsigned char const*,unsigned short,char*,int) ;
 int FUNC_14 (unsigned char const*,unsigned char const*) ;
 scalar_t__ FUNC_15 (unsigned char const*) ;
 void* VAR_10 ;
 struct batadv_tt_global_entry* FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static bool FUNC_21(struct batadv_priv *VAR_11,
     struct batadv_orig_node *VAR_12,
     const unsigned char *VAR_13,
     unsigned short VAR_14, u16 VAR_15, u8 VAR_16)
{
 struct batadv_tt_global_entry *VAR_17;
 struct batadv_tt_local_entry *VAR_18;
 bool VAR_19 = 0;
 int VAR_20;
 struct batadv_tt_common_entry *VAR_21;
 u16 VAR_22;


 if (FUNC_2(VAR_11, VAR_12->orig, VAR_14))
  return 1;

 VAR_17 = FUNC_9(VAR_11, VAR_13, VAR_14);
 VAR_18 = FUNC_12(VAR_11, VAR_13, VAR_14);





 if ((VAR_15 & VAR_3) && VAR_18 &&
     !(VAR_18->common.flags & VAR_1))
  goto out;

 if (!VAR_17) {
  VAR_17 = FUNC_16(VAR_9,
          VAR_6);
  if (!VAR_17)
   goto out;

  VAR_21 = &VAR_17->common;
  FUNC_14(VAR_21->addr, VAR_13);
  VAR_21->vid = VAR_14;

  if (!FUNC_15(VAR_21->addr))
   VAR_21->flags = VAR_15 & (~VAR_5);

  VAR_17->roam_at = 0;




  if (VAR_15 & VAR_2)
   VAR_17->roam_at = VAR_10;
  FUNC_18(&VAR_21->refcount);
  VAR_21->added_at = VAR_10;

  FUNC_0(&VAR_17->orig_list);
  FUNC_1(&VAR_17->orig_list_count, 0);
  FUNC_19(&VAR_17->list_lock);

  FUNC_17(&VAR_21->refcount);
  VAR_20 = FUNC_4(VAR_11->tt.global_hash,
          VAR_8,
          VAR_7, VAR_21,
          &VAR_21->hash_entry);

  if (FUNC_20(VAR_20 != 0)) {

   FUNC_8(VAR_17);
   goto out_remove;
  }
 } else {
  VAR_21 = &VAR_17->common;
  if (VAR_15 & VAR_3) {
   if (!(VAR_21->flags & VAR_3))
    goto out;
   if (FUNC_7(VAR_17,
           VAR_12, ((void*)0)))
    goto out_remove;
   FUNC_6(VAR_17);
   goto add_orig_entry;
  }







  if (VAR_21->flags & VAR_3) {
   FUNC_6(VAR_17);
   VAR_21->flags &= ~VAR_3;
  }





  if (!FUNC_15(VAR_21->addr))
   VAR_21->flags |= VAR_15 & (~VAR_5);
  if (VAR_21->flags & VAR_2) {
   FUNC_6(VAR_17);
   VAR_21->flags &= ~VAR_2;
   VAR_17->roam_at = 0;
  }
 }
add_orig_entry:

 FUNC_10(VAR_17, VAR_12, VAR_16,
     VAR_15 & VAR_5);

 FUNC_3(VAR_0, VAR_11,
     "Creating new global tt entry: %pM (vid: %d, via %pM)\n",
     VAR_21->addr, FUNC_5(VAR_21->vid),
     VAR_12->orig);
 VAR_19 = 1;

out_remove:



 if (FUNC_15(VAR_13))
  goto out;


 VAR_22 = FUNC_13(VAR_11, VAR_13, VAR_14,
          "global tt received",
          VAR_15 & VAR_2);
 VAR_17->common.flags |= VAR_22 & VAR_4;

 if (!(VAR_15 & VAR_2))



  VAR_17->common.flags &= ~VAR_2;

out:
 if (VAR_17)
  FUNC_8(VAR_17);
 if (VAR_18)
  FUNC_11(VAR_18);
 return VAR_19;
}
