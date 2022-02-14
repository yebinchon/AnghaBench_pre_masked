
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tun_flags; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7,
     struct ip_tunnel_info *VAR_8)
{
 u32 VAR_9 = 0;

 if (VAR_8->key.tun_flags & VAR_5)
  VAR_9 |= VAR_1;
 if (!(VAR_8->key.tun_flags & VAR_4))
  VAR_9 |= VAR_3;
 if (VAR_8->key.tun_flags & VAR_6)
  VAR_9 |= VAR_2;

 if (FUNC_1(VAR_7, VAR_0, FUNC_0(VAR_9)) < 0)
  return -1;

 return 0;
}
