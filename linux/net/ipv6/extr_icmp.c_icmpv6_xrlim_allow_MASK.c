
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct TYPE_7__ {int plen; } ;
struct rt6_info {TYPE_3__ rt6i_dst; } ;
struct TYPE_6__ {int icmpv6_time; } ;
struct TYPE_8__ {int peers; TYPE_2__ sysctl; } ;
struct net {TYPE_4__ ipv6; } ;
struct inet_peer {int dummy; } ;
struct flowi6 {int daddr; } ;
struct dst_entry {TYPE_1__* dev; scalar_t__ error; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dst_entry*) ;
 scalar_t__ FUNC_2 (struct net*,int ) ;
 struct inet_peer* FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct inet_peer*,int) ;
 int FUNC_5 (struct inet_peer*) ;
 int FUNC_6 (struct dst_entry*) ;
 struct dst_entry* FUNC_7 (struct net*,struct sock*,struct flowi6*) ;
 struct net* FUNC_8 (struct sock*) ;

__attribute__((used)) static bool FUNC_9(struct sock *VAR_2, u8 VAR_3,
          struct flowi6 *VAR_4)
{
 struct net *VAR_5 = FUNC_8(VAR_2);
 struct dst_entry *VAR_6;
 bool VAR_7 = 0;

 if (FUNC_2(VAR_5, VAR_3))
  return 1;






 VAR_6 = FUNC_7(VAR_5, VAR_2, VAR_4);
 if (VAR_6->error) {
  FUNC_0(VAR_5, FUNC_6(VAR_6),
         VAR_1);
 } else if (VAR_6->dev && (VAR_6->dev->flags&VAR_0)) {
  VAR_7 = 1;
 } else {
  struct rt6_info *VAR_8 = (struct rt6_info *)VAR_6;
  int VAR_9 = VAR_5->ipv6.sysctl.icmpv6_time;
  struct inet_peer *VAR_10;


  if (VAR_8->rt6i_dst.plen < 128)
   VAR_9 >>= ((128 - VAR_8->rt6i_dst.plen)>>5);

  VAR_10 = FUNC_3(VAR_5->ipv6.peers, &VAR_4->daddr, 1);
  VAR_7 = FUNC_4(VAR_10, VAR_9);
  if (VAR_10)
   FUNC_5(VAR_10);
 }
 FUNC_1(VAR_6);
 return VAR_7;
}
