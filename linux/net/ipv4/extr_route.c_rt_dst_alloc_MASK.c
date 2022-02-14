
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int input; int output; } ;
struct rtable {unsigned int rt_flags; TYPE_1__ dst; int rt_uncached; scalar_t__ rt_gw4; scalar_t__ rt_gw_family; scalar_t__ rt_uses_gateway; scalar_t__ rt_mtu_locked; scalar_t__ rt_pmtu; scalar_t__ rt_iif; scalar_t__ rt_is_input; int rt_type; int rt_genid; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 struct rtable* FUNC_2 (int *,struct net_device*,int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;

struct rtable *FUNC_4(struct net_device *VAR_8,
       unsigned int VAR_9, u16 VAR_10,
       bool VAR_11, bool VAR_12, bool VAR_13)
{
 struct rtable *VAR_14;

 VAR_14 = FUNC_2(&VAR_7, VAR_8, 1, VAR_3,
         (VAR_13 ? 0 : VAR_0) |
         (VAR_11 ? VAR_1 : 0) |
         (VAR_12 ? VAR_2 : 0));

 if (VAR_14) {
  VAR_14->rt_genid = FUNC_3(FUNC_1(VAR_8));
  VAR_14->rt_flags = VAR_9;
  VAR_14->rt_type = VAR_10;
  VAR_14->rt_is_input = 0;
  VAR_14->rt_iif = 0;
  VAR_14->rt_pmtu = 0;
  VAR_14->rt_mtu_locked = 0;
  VAR_14->rt_uses_gateway = 0;
  VAR_14->rt_gw_family = 0;
  VAR_14->rt_gw4 = 0;
  FUNC_0(&VAR_14->rt_uncached);

  VAR_14->dst.output = VAR_6;
  if (VAR_9 & VAR_4)
   VAR_14->dst.input = VAR_5;
 }

 return VAR_14;
}
