
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {unsigned long forward_delay_time; unsigned long aging_time; scalar_t__ path_switching_delay; scalar_t__ max_unknown_frame_time; scalar_t__ topology_change; } ;
struct lec_arp_table {int flags; int* mac_addr; scalar_t__ status; scalar_t__ timestamp; int atm_addr; scalar_t__ packets_flooded; scalar_t__ last_used; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lec_arp_table*) ;
 int FUNC_1 (struct lec_arp_table*) ;
 int FUNC_2 (struct lec_priv*,struct lec_arp_table*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct lec_priv*,int ,int*,int ,int *) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct lec_arp_table *VAR_7,
       unsigned long VAR_8,
       struct lec_priv *VAR_9)
{
 unsigned long VAR_10;

 if ((VAR_7->flags) & VAR_4 && VAR_9->topology_change)
  VAR_10 = VAR_9->forward_delay_time;
 else
  VAR_10 = VAR_9->aging_time;

 FUNC_3("About to expire: %lx - %lx > %lx\n",
   VAR_8, VAR_7->last_used, VAR_10);
 if (FUNC_5(VAR_8, VAR_7->last_used + VAR_10) &&
     !(VAR_7->flags & VAR_3) &&
     !(VAR_7->mac_addr[0] & 0x01)) {

  FUNC_3("Entry timed out\n");
  FUNC_2(VAR_9, VAR_7);
  FUNC_1(VAR_7);
 } else {

  if ((VAR_7->status == VAR_2 ||
       VAR_7->status == VAR_0) &&
      FUNC_6(VAR_8, VAR_7->timestamp +
           VAR_9->max_unknown_frame_time)) {
   VAR_7->timestamp = VAR_5;
   VAR_7->packets_flooded = 0;
   if (VAR_7->status == VAR_2)
    FUNC_4(VAR_9, VAR_6,
          VAR_7->mac_addr,
          VAR_7->atm_addr,
          ((void*)0));
  }
  if (VAR_7->status == VAR_1 &&
      FUNC_6(VAR_8, VAR_7->timestamp +
           VAR_9->path_switching_delay)) {
   FUNC_0(VAR_7);
   return 1;
  }
 }

 return 0;
}
