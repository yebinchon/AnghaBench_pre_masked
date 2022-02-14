
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {int family; int net; struct ip6t_entry* entryinfo; } ;
struct synproxy_net {int dummy; } ;
struct TYPE_2__ {int flags; scalar_t__ proto; int invflags; } ;
struct ip6t_entry {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct synproxy_net*,int ) ;
 struct synproxy_net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct xt_tgchk_param *VAR_4)
{
 struct synproxy_net *VAR_5 = FUNC_3(VAR_4->net);
 const struct ip6t_entry *VAR_6 = VAR_4->entryinfo;
 int VAR_7;

 if (!(VAR_6->ipv6.flags & VAR_1) ||
     VAR_6->ipv6.proto != VAR_2 ||
     VAR_6->ipv6.invflags & VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4->net, VAR_4->family);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_4->net);
 if (VAR_7) {
  FUNC_1(VAR_4->net, VAR_4->family);
  return VAR_7;
 }

 return VAR_7;
}
