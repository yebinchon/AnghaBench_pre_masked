
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct ifaddrmsg {int ifa_index; void* ifa_scope; int ifa_flags; void* ifa_prefixlen; int ifa_family; } ;


 int VAR_0 ;
 struct ifaddrmsg* FUNC_0 (struct nlmsghdr*) ;

__attribute__((used)) static void FUNC_1(struct nlmsghdr *VAR_1, u8 VAR_2, u32 VAR_3,
     u8 VAR_4, int VAR_5)
{
 struct ifaddrmsg *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 VAR_6->ifa_family = VAR_0;
 VAR_6->ifa_prefixlen = VAR_2;
 VAR_6->ifa_flags = VAR_3;
 VAR_6->ifa_scope = VAR_4;
 VAR_6->ifa_index = VAR_5;
}
