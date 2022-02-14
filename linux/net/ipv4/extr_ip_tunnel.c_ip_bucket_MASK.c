
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ daddr; } ;
struct ip_tunnel_parm {int i_flags; TYPE_1__ iph; scalar_t__ i_key; } ;
struct ip_tunnel_net {struct hlist_head* tunnels; } ;
struct hlist_head {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct hlist_head *FUNC_2(struct ip_tunnel_net *VAR_2,
        struct ip_tunnel_parm *VAR_3)
{
 unsigned int VAR_4;
 __be32 VAR_5;
 __be32 VAR_6 = VAR_3->i_key;

 if (VAR_3->iph.daddr && !FUNC_1(VAR_3->iph.daddr))
  VAR_5 = VAR_3->iph.daddr;
 else
  VAR_5 = 0;

 if (!(VAR_3->i_flags & VAR_0) && (VAR_3->i_flags & VAR_1))
  VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_6, VAR_5);
 return &VAR_2->tunnels[VAR_4];
}
