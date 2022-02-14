
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipv6hdr const*) ;

__attribute__((used)) static u8 FUNC_1(const struct ipv6hdr *VAR_1)
{
 return 1 << (FUNC_0(VAR_1) & VAR_0);
}
