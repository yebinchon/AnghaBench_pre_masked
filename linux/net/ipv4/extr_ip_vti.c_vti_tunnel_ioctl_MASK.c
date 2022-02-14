
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int version; scalar_t__ protocol; int ihl; } ;
struct ip_tunnel_parm {int i_flags; int o_flags; scalar_t__ o_key; scalar_t__ i_key; TYPE_1__ iph; } ;
struct TYPE_4__ {int ifru_data; } ;
struct ifreq {TYPE_2__ ifr_ifru; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ip_tunnel_parm*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct ip_tunnel_parm*,int) ;
 int FUNC_2 (struct net_device*,struct ip_tunnel_parm*,int) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_8, struct ifreq *VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 struct ip_tunnel_parm VAR_12;

 if (FUNC_0(&VAR_12, VAR_9->ifr_ifru.ifru_data, sizeof(VAR_12)))
  return -VAR_0;

 if (VAR_10 == VAR_4 || VAR_10 == VAR_5) {
  if (VAR_12.iph.version != 4 || VAR_12.iph.protocol != VAR_3 ||
      VAR_12.iph.ihl != 5)
   return -VAR_1;
 }

 if (!(VAR_12.i_flags & VAR_2))
  VAR_12.i_key = 0;
 if (!(VAR_12.o_flags & VAR_2))
  VAR_12.o_key = 0;

 VAR_12.i_flags = VAR_7;

 VAR_11 = FUNC_2(VAR_8, &VAR_12, VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 != VAR_6) {
  VAR_12.i_flags |= VAR_2;
  VAR_12.o_flags |= VAR_2;
 }

 if (FUNC_1(VAR_9->ifr_ifru.ifru_data, &VAR_12, sizeof(VAR_12)))
  return -VAR_0;
 return 0;
}
