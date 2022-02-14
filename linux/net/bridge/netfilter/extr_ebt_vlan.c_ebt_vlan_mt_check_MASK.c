
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_vlan_info* matchinfo; } ;
struct ebt_vlan_info {int bitmask; int invflags; scalar_t__ encap; scalar_t__ prio; scalar_t__ id; } ;
struct ebt_entry {scalar_t__ ethproto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(const struct xt_mtchk_param *VAR_8)
{
 struct ebt_vlan_info *VAR_9 = VAR_8->matchinfo;
 const struct ebt_entry *VAR_10 = VAR_8->entryinfo;


 if (VAR_10->ethproto != FUNC_1(VAR_5)) {
  FUNC_3("passed entry proto %2.4X is not 802.1Q (8100)\n",
    FUNC_2(VAR_10->ethproto));
  return -VAR_4;
 }




 if (VAR_9->bitmask & ~VAR_2) {
  FUNC_3("bitmask %2X is out of mask (%2X)\n",
    VAR_9->bitmask, VAR_2);
  return -VAR_4;
 }


 if (VAR_9->invflags & ~VAR_2) {
  FUNC_3("inversion flags %2X is out of mask (%2X)\n",
    VAR_9->invflags, VAR_2);
  return -VAR_4;
 }
 if (FUNC_0(VAR_1)) {
  if (!!VAR_9->id) {
   if (VAR_9->id > VAR_7) {
    FUNC_3("id %d is out of range (1-4096)\n",
      VAR_9->id);
    return -VAR_4;
   }





   VAR_9->bitmask &= ~VAR_3;
  }

 }

 if (FUNC_0(VAR_3)) {
  if ((unsigned char) VAR_9->prio > 7) {
   FUNC_3("prio %d is out of range (0-7)\n",
     VAR_9->prio);
   return -VAR_4;
  }
 }




 if (FUNC_0(VAR_0)) {
  if ((unsigned short) FUNC_2(VAR_9->encap) < VAR_6) {
   FUNC_3("encap frame length %d is less than "
     "minimal\n", FUNC_2(VAR_9->encap));
   return -VAR_4;
  }
 }

 return 0;
}
