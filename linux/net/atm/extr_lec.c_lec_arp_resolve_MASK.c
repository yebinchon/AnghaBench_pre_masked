
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lec_priv {int lane_version; scalar_t__ maximum_unknown_frame_count; int lec_arp_lock; struct atm_vcc* mcast_vcc; } ;
struct TYPE_2__ {int function; void* expires; } ;
struct lec_arp_table {scalar_t__ status; int no_tries; scalar_t__ packets_flooded; int is_rdesc; TYPE_1__ timer; void* timestamp; void* last_used; struct atm_vcc* vcc; } ;
struct atm_vcc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (unsigned char const*,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct lec_priv*,struct lec_arp_table*) ;
 int VAR_8 ;
 struct lec_arp_table* FUNC_3 (struct lec_priv*,unsigned char const*) ;
 int FUNC_4 (struct lec_arp_table*) ;
 struct lec_arp_table* FUNC_5 (struct lec_priv*,unsigned char const*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct lec_priv*,int ,unsigned char const*,int *,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static struct atm_vcc *FUNC_10(struct lec_priv *VAR_9,
           const unsigned char *VAR_10,
           int VAR_11,
           struct lec_arp_table **VAR_12)
{
 unsigned long VAR_13;
 struct lec_arp_table *VAR_14;
 struct atm_vcc *VAR_15;

 if (VAR_10[0] & 0x01) {
  switch (VAR_9->lane_version) {
  case 1:
   return VAR_9->mcast_vcc;
  case 2:
   if (FUNC_1(VAR_10, VAR_4))
    return VAR_9->mcast_vcc;
   break;
  default:
   break;
  }
 }

 FUNC_8(&VAR_9->lec_arp_lock, VAR_13);
 VAR_14 = FUNC_3(VAR_9, VAR_10);

 if (VAR_14) {
  if (VAR_14->status == VAR_2) {

   VAR_14->last_used = VAR_5;
   FUNC_4(VAR_14);
   *VAR_12 = VAR_14;
   VAR_15 = VAR_14->vcc;
   goto out;
  }




  if (VAR_14->status == VAR_0)
   VAR_14->no_tries = 0;






  if (VAR_14->status != VAR_1 &&
      VAR_14->packets_flooded <
      VAR_9->maximum_unknown_frame_count) {
   VAR_14->packets_flooded++;
   FUNC_6("Flooding..\n");
   VAR_15 = VAR_9->mcast_vcc;
   goto out;
  }





  FUNC_4(VAR_14);
  *VAR_12 = VAR_14;
  FUNC_6("entry->status %d entry->vcc %p\n", VAR_14->status,
    VAR_14->vcc);
  VAR_15 = ((void*)0);
 } else {

  VAR_14 = FUNC_5(VAR_9, VAR_10);
  FUNC_6("Making entry\n");
  if (!VAR_14) {
   VAR_15 = VAR_9->mcast_vcc;
   goto out;
  }
  FUNC_2(VAR_9, VAR_14);

  VAR_14->packets_flooded = 1;
  VAR_14->status = VAR_0;
  VAR_14->no_tries = 1;
  VAR_14->last_used = VAR_14->timestamp = VAR_5;
  VAR_14->is_rdesc = VAR_11;
  if (VAR_14->is_rdesc)
   FUNC_7(VAR_9, VAR_7, VAR_10, ((void*)0),
         ((void*)0));
  else
   FUNC_7(VAR_9, VAR_6, VAR_10, ((void*)0), ((void*)0));
  VAR_14->timer.expires = VAR_5 + (1 * VAR_3);
  VAR_14->timer.function = VAR_8;
  FUNC_0(&VAR_14->timer);
  VAR_15 = VAR_9->mcast_vcc;
 }

out:
 FUNC_9(&VAR_9->lec_arp_lock, VAR_13);
 return VAR_15;
}
