
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hash; } ;
struct batadv_priv {TYPE_1__ dat; } ;
struct batadv_dat_entry {unsigned short vid; int mac_addr; int ip; int hash_entry; int refcount; void* last_update; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 struct batadv_dat_entry* FUNC_1 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_2 (struct batadv_dat_entry*) ;
 int FUNC_3 (int ,struct batadv_priv*,char*,int *,int ,int ) ;
 int FUNC_4 (int ,int ,int ,struct batadv_dat_entry*,int *) ;
 int VAR_3 ;
 int FUNC_5 (unsigned short) ;
 int FUNC_6 (int ,int *) ;
 void* VAR_4 ;
 struct batadv_dat_entry* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct batadv_priv *VAR_5, __be32 VAR_6,
     u8 *VAR_7, unsigned short VAR_8)
{
 struct batadv_dat_entry *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_8);

 if (VAR_9) {
  if (!FUNC_0(VAR_9->mac_addr, VAR_7))
   FUNC_6(VAR_9->mac_addr, VAR_7);
  VAR_9->last_update = VAR_4;
  FUNC_3(VAR_0, VAR_5,
      "Entry updated: %pI4 %pM (vid: %d)\n",
      &VAR_9->ip, VAR_9->mac_addr,
      FUNC_5(VAR_8));
  goto out;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  goto out;

 VAR_9->ip = VAR_6;
 VAR_9->vid = VAR_8;
 FUNC_6(VAR_9->mac_addr, VAR_7);
 VAR_9->last_update = VAR_4;
 FUNC_9(&VAR_9->refcount);

 FUNC_8(&VAR_9->refcount);
 VAR_10 = FUNC_4(VAR_5->dat.hash, VAR_2,
         VAR_3, VAR_9,
         &VAR_9->hash_entry);

 if (FUNC_10(VAR_10 != 0)) {

  FUNC_2(VAR_9);
  goto out;
 }

 FUNC_3(VAR_0, VAR_5, "New entry added: %pI4 %pM (vid: %d)\n",
     &VAR_9->ip, VAR_9->mac_addr, FUNC_5(VAR_8));

out:
 if (VAR_9)
  FUNC_2(VAR_9);
}
