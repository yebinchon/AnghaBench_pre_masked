
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xt_tgchk_param {scalar_t__ family; struct ipt_entry* entryinfo; } ;
struct TYPE_4__ {int invflags; int proto; } ;
struct TYPE_3__ {int invflags; int proto; } ;
struct ipt_entry {TYPE_2__ ipv6; TYPE_1__ ip; } ;
struct ip6t_entry {TYPE_2__ ipv6; TYPE_1__ ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u8 FUNC_0(const struct xt_tgchk_param *VAR_4)
{
 if (VAR_4->family == VAR_2) {
  const struct ipt_entry *VAR_5 = VAR_4->entryinfo;

  if (VAR_5->ip.invflags & VAR_1)
   return 0;
  return VAR_5->ip.proto;
 } else if (VAR_4->family == VAR_3) {
  const struct ip6t_entry *VAR_6 = VAR_4->entryinfo;

  if (VAR_6->ipv6.invflags & VAR_0)
   return 0;
  return VAR_6->ipv6.proto;
 } else
  return 0;
}
