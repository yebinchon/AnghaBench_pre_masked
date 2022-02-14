
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taprio_sched {int picos_per_byte; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct net_device*,char*,int ,long long,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
          struct taprio_sched *VAR_4)
{
 struct ethtool_link_ksettings VAR_5;
 int VAR_6 = VAR_0;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_8 < 0)
  goto skip;

 if (VAR_5.base.speed && VAR_5.base.speed != VAR_1)
  VAR_6 = VAR_5.base.speed;

skip:
 VAR_7 = (VAR_2 * 8) / VAR_6;

 FUNC_2(&VAR_4->picos_per_byte, VAR_7);
 FUNC_3(VAR_3, "taprio: set %s's picos_per_byte to: %lld, linkspeed: %d\n",
     VAR_3->name, (long long)FUNC_1(&VAR_4->picos_per_byte),
     VAR_5.base.speed);
}
