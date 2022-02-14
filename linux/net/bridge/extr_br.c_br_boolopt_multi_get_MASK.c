
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_bridge {int dummy; } ;
struct br_boolopt_multi {int optval; int optmask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct net_bridge const*,int) ;

void FUNC_2(const struct net_bridge *VAR_1,
     struct br_boolopt_multi *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 |= (FUNC_1(VAR_1, VAR_4) << VAR_4);

 VAR_2->optval = VAR_3;
 VAR_2->optmask = FUNC_0((VAR_0 - 1), 0);
}
