
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct teql_master {TYPE_1__* dev; struct Qdisc* slaves; } ;
struct net_device {int mtu; scalar_t__ hard_header_len; unsigned int flags; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int mtu; unsigned int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct Qdisc* FUNC_0 (struct Qdisc*) ;
 struct teql_master* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8)
{
 struct Qdisc *VAR_9;
 struct teql_master *VAR_10 = FUNC_1(VAR_8);
 int VAR_11 = 0xFFFE;
 unsigned int VAR_12 = VAR_5 | VAR_4;

 if (VAR_10->slaves == ((void*)0))
  return -VAR_1;

 VAR_12 = VAR_2;

 VAR_9 = VAR_10->slaves;
 do {
  struct net_device *VAR_13 = FUNC_3(VAR_9);

  if (VAR_13 == ((void*)0))
   return -VAR_1;

  if (VAR_13->mtu < VAR_11)
   VAR_11 = VAR_13->mtu;
  if (VAR_13->hard_header_len > VAR_7)
   return -VAR_0;





  if (!(VAR_13->flags&VAR_6))
   VAR_12 &= ~VAR_6;
  if (!(VAR_13->flags&VAR_3))
   VAR_12 &= ~VAR_3;
  if (!(VAR_13->flags&VAR_4))
   VAR_12 &= ~VAR_4;
 } while ((VAR_9 = FUNC_0(VAR_9)) != VAR_10->slaves);

 VAR_10->dev->mtu = VAR_11;
 VAR_10->dev->flags = (VAR_10->dev->flags&~VAR_2) | VAR_12;
 FUNC_2(VAR_10->dev);
 return 0;
}
