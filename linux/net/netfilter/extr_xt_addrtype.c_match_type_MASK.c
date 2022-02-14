
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct net*,struct net_device const*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct net *VAR_0, const struct net_device *VAR_1,
         __be32 VAR_2, u_int16_t VAR_3)
{
 return !!(VAR_3 & (1 << FUNC_0(VAR_0, VAR_1, VAR_2)));
}
