
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device_stats {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtnl_link_stats64*,struct net_device_stats const*,int) ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3(struct rtnl_link_stats64 *VAR_0,
        const struct net_device_stats *VAR_1)
{







 size_t VAR_2, VAR_3 = sizeof(*VAR_1) / sizeof(unsigned long);
 const unsigned long *VAR_4 = (const unsigned long *)VAR_1;
 u64 *VAR_5 = (u64 *)VAR_0;

 FUNC_0(VAR_3 > sizeof(*VAR_0) / sizeof(u64));
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_5[VAR_2] = VAR_4[VAR_2];

 FUNC_2((char *)VAR_0 + VAR_3 * sizeof(u64), 0,
        sizeof(*VAR_0) - VAR_3 * sizeof(u64));

}
