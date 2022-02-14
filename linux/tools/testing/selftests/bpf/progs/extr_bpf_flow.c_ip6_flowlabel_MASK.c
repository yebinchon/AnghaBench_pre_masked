
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;

__attribute__((used)) static inline __be32 FUNC_0(const struct ipv6hdr *VAR_1)
{
 return *(__be32 *)VAR_1 & VAR_0;
}
