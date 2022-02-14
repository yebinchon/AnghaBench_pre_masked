
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct ip6t_entry* entryinfo; struct ip6t_reject_info* targinfo; } ;
struct ip6t_reject_info {scalar_t__ with; } ;
struct TYPE_2__ {int flags; scalar_t__ proto; int invflags; } ;
struct ip6t_entry {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_6)
{
 const struct ip6t_reject_info *VAR_7 = VAR_6->targinfo;
 const struct ip6t_entry *VAR_8 = VAR_6->entryinfo;

 if (VAR_7->with == VAR_2) {
  FUNC_0("ECHOREPLY is not supported\n");
  return -VAR_0;
 } else if (VAR_7->with == VAR_3) {

  if (!(VAR_8->ipv6.flags & VAR_1) ||
      VAR_8->ipv6.proto != VAR_4 ||
      (VAR_8->ipv6.invflags & VAR_5)) {
   FUNC_0("TCP_RESET illegal for non-tcp\n");
   return -VAR_0;
  }
 }
 return 0;
}
