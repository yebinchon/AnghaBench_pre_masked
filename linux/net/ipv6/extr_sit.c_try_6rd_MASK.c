
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct ip_tunnel*,struct in6_addr const*,int *) ;

__attribute__((used)) static inline __be32 FUNC_1(struct ip_tunnel *VAR_0,
        const struct in6_addr *VAR_1)
{
 __be32 VAR_2 = 0;
 FUNC_0(VAR_0, VAR_1, &VAR_2);
 return VAR_2;
}
