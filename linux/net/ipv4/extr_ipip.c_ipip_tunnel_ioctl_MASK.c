
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int version; int ihl; int frag_off; int protocol; } ;
struct ip_tunnel_parm {scalar_t__ o_flags; scalar_t__ i_flags; scalar_t__ o_key; scalar_t__ i_key; TYPE_1__ iph; } ;
struct TYPE_4__ {int ifru_data; } ;
struct ifreq {TYPE_2__ ifr_ifru; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ip_tunnel_parm*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct ip_tunnel_parm*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct ip_tunnel_parm*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct ip_tunnel_parm VAR_9;

 if (FUNC_0(&VAR_9, VAR_6->ifr_ifru.ifru_data, sizeof(VAR_9)))
  return -VAR_0;

 if (VAR_7 == VAR_3 || VAR_7 == VAR_4) {
  if (VAR_9.iph.version != 4 ||
      !FUNC_4(VAR_9.iph.protocol) ||
      VAR_9.iph.ihl != 5 || (VAR_9.iph.frag_off&FUNC_2(~VAR_2)))
   return -VAR_1;
 }

 VAR_9.i_key = VAR_9.o_key = 0;
 VAR_9.i_flags = VAR_9.o_flags = 0;
 VAR_8 = FUNC_3(VAR_5, &VAR_9, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_1(VAR_6->ifr_ifru.ifru_data, &VAR_9, sizeof(VAR_9)))
  return -VAR_0;

 return 0;
}
