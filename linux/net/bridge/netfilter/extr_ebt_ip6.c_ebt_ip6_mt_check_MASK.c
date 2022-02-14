
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_ip6_info* matchinfo; struct ebt_entry* entryinfo; } ;
struct ebt_ip6_info {int bitmask; int invflags; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; scalar_t__* icmpv6_type; scalar_t__* icmpv6_code; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_14)
{
 const struct ebt_entry *VAR_15 = VAR_14->entryinfo;
 struct ebt_ip6_info *VAR_16 = VAR_14->matchinfo;

 if (VAR_15->ethproto != FUNC_0(VAR_7) || VAR_15->invflags & VAR_5)
  return -VAR_6;
 if (VAR_16->bitmask & ~VAR_2 || VAR_16->invflags & ~VAR_2)
  return -VAR_6;
 if (VAR_16->bitmask & (VAR_0 | VAR_4)) {
  if (VAR_16->invflags & VAR_3)
   return -VAR_6;
  if (VAR_16->protocol != VAR_11 &&
      VAR_16->protocol != VAR_12 &&
      VAR_16->protocol != VAR_13 &&
      VAR_16->protocol != VAR_10 &&
      VAR_16->protocol != VAR_8)
   return -VAR_6;
 }
 if (VAR_16->bitmask & VAR_0 && VAR_16->dport[0] > VAR_16->dport[1])
  return -VAR_6;
 if (VAR_16->bitmask & VAR_4 && VAR_16->sport[0] > VAR_16->sport[1])
  return -VAR_6;
 if (VAR_16->bitmask & VAR_1) {
  if ((VAR_16->invflags & VAR_3) ||
       VAR_16->protocol != VAR_9)
   return -VAR_6;
  if (VAR_16->icmpv6_type[0] > VAR_16->icmpv6_type[1] ||
      VAR_16->icmpv6_code[0] > VAR_16->icmpv6_code[1])
   return -VAR_6;
 }
 return 0;
}
