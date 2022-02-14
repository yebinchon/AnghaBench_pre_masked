
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_ip_info* matchinfo; } ;
struct ebt_ip_info {int bitmask; int invflags; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; scalar_t__* icmp_type; scalar_t__* icmp_code; scalar_t__* igmp_type; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_16)
{
 const struct ebt_ip_info *VAR_17 = VAR_16->matchinfo;
 const struct ebt_entry *VAR_18 = VAR_16->entryinfo;

 if (VAR_18->ethproto != FUNC_0(VAR_8) ||
    VAR_18->invflags & VAR_0)
  return -VAR_7;
 if (VAR_17->bitmask & ~VAR_4 || VAR_17->invflags & ~VAR_4)
  return -VAR_7;
 if (VAR_17->bitmask & (VAR_1 | VAR_6)) {
  if (VAR_17->invflags & VAR_5)
   return -VAR_7;
  if (VAR_17->protocol != VAR_13 &&
      VAR_17->protocol != VAR_14 &&
      VAR_17->protocol != VAR_15 &&
      VAR_17->protocol != VAR_12 &&
      VAR_17->protocol != VAR_9)
    return -VAR_7;
 }
 if (VAR_17->bitmask & VAR_1 && VAR_17->dport[0] > VAR_17->dport[1])
  return -VAR_7;
 if (VAR_17->bitmask & VAR_6 && VAR_17->sport[0] > VAR_17->sport[1])
  return -VAR_7;
 if (VAR_17->bitmask & VAR_2) {
  if ((VAR_17->invflags & VAR_5) ||
      VAR_17->protocol != VAR_10)
   return -VAR_7;
  if (VAR_17->icmp_type[0] > VAR_17->icmp_type[1] ||
      VAR_17->icmp_code[0] > VAR_17->icmp_code[1])
   return -VAR_7;
 }
 if (VAR_17->bitmask & VAR_3) {
  if ((VAR_17->invflags & VAR_5) ||
      VAR_17->protocol != VAR_11)
   return -VAR_7;
  if (VAR_17->igmp_type[0] > VAR_17->igmp_type[1])
   return -VAR_7;
 }
 return 0;
}
