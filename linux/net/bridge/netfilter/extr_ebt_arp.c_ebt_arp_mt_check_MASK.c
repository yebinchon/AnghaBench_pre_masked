
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_entry* entryinfo; struct ebt_arp_info* matchinfo; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;
struct ebt_arp_info {int bitmask; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_5)
{
 const struct ebt_arp_info *VAR_6 = VAR_5->matchinfo;
 const struct ebt_entry *VAR_7 = VAR_5->entryinfo;

 if ((VAR_7->ethproto != FUNC_0(VAR_3) &&
    VAR_7->ethproto != FUNC_0(VAR_4)) ||
    VAR_7->invflags & VAR_1)
  return -VAR_2;
 if (VAR_6->bitmask & ~VAR_0 || VAR_6->invflags & ~VAR_0)
  return -VAR_2;
 return 0;
}
