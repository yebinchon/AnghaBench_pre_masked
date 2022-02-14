
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct ifaddrlblmsg {int ifal_prefixlen; int ifal_index; int ifal_seq; scalar_t__ ifal_flags; int ifal_family; } ;


 int VAR_0 ;
 struct ifaddrlblmsg* FUNC_0 (struct nlmsghdr*) ;

__attribute__((used)) static void FUNC_1(struct nlmsghdr *VAR_1,
         int VAR_2, int VAR_3, u32 VAR_4)
{
 struct ifaddrlblmsg *VAR_5 = FUNC_0(VAR_1);
 VAR_5->ifal_family = VAR_0;
 VAR_5->ifal_prefixlen = VAR_2;
 VAR_5->ifal_flags = 0;
 VAR_5->ifal_index = VAR_3;
 VAR_5->ifal_seq = VAR_4;
}
