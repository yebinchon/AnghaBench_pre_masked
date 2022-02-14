
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dst_entry {TYPE_2__* dev; } ;
struct rtable {struct dst_entry dst; } ;
struct TYPE_3__ {int sysctl_icmp_ratelimit; int peers; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_peer {int dummy; } ;
struct flowi4 {int daddr; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int,int) ;
 struct inet_peer* FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct inet_peer*,int ) ;
 int FUNC_3 (struct inet_peer*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5(struct net *VAR_1, struct rtable *VAR_2,
          struct flowi4 *VAR_3, int VAR_4, int VAR_5)
{
 struct dst_entry *VAR_6 = &VAR_2->dst;
 struct inet_peer *VAR_7;
 bool VAR_8 = 1;
 int VAR_9;

 if (FUNC_0(VAR_1, VAR_4, VAR_5))
  goto out;


 if (VAR_6->dev && (VAR_6->dev->flags&VAR_0))
  goto out;

 VAR_9 = FUNC_4(VAR_6->dev);
 VAR_7 = FUNC_1(VAR_1->ipv4.peers, VAR_3->daddr, VAR_9, 1);
 VAR_8 = FUNC_2(VAR_7, VAR_1->ipv4.sysctl_icmp_ratelimit);
 if (VAR_7)
  FUNC_3(VAR_7);
out:
 return VAR_8;
}
