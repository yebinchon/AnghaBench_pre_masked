
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int bcast_duplist_curr; int bcast_duplist_lock; struct batadv_bcast_duplist_entry* bcast_duplist; } ;
struct batadv_priv {TYPE_1__ bla; } ;
struct batadv_bcast_packet {int orig; } ;
struct batadv_bcast_duplist_entry {scalar_t__ crc; int orig; int entrytime; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct batadv_priv *VAR_3,
        struct sk_buff *VAR_4)
{
 int VAR_5, VAR_6;
 __be32 VAR_7;
 struct batadv_bcast_packet *VAR_8;
 struct batadv_bcast_duplist_entry *VAR_9;
 bool VAR_10 = 0;

 VAR_8 = (struct batadv_bcast_packet *)VAR_4->data;


 VAR_7 = FUNC_2(VAR_4, (u8 *)(VAR_8 + 1));

 FUNC_4(&VAR_3->bla.bcast_duplist_lock);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = (VAR_3->bla.bcast_duplist_curr + VAR_5);
  VAR_6 %= VAR_0;
  VAR_9 = &VAR_3->bla.bcast_duplist[VAR_6];




  if (FUNC_1(VAR_9->entrytime,
      VAR_1))
   break;

  if (VAR_9->crc != VAR_7)
   continue;

  if (FUNC_0(VAR_9->orig, VAR_8->orig))
   continue;




  VAR_10 = 1;
  goto out;
 }



 VAR_6 = (VAR_3->bla.bcast_duplist_curr + VAR_0 - 1);
 VAR_6 %= VAR_0;
 VAR_9 = &VAR_3->bla.bcast_duplist[VAR_6];
 VAR_9->crc = VAR_7;
 VAR_9->entrytime = VAR_2;
 FUNC_3(VAR_9->orig, VAR_8->orig);
 VAR_3->bla.bcast_duplist_curr = VAR_6;

out:
 FUNC_5(&VAR_3->bla.bcast_duplist_lock);

 return VAR_10;
}
