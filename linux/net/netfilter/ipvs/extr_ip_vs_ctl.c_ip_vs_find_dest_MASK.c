
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_dest {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip_vs_dest* FUNC_0 (struct ip_vs_service*,int,union nf_inet_addr const*,int) ;
 struct ip_vs_service* FUNC_1 (struct netns_ipvs*,int,int,int ,union nf_inet_addr const*,int) ;

struct ip_vs_dest *FUNC_2(struct netns_ipvs *VAR_2, int VAR_3, int VAR_4,
       const union nf_inet_addr *VAR_5,
       __be16 VAR_6,
       const union nf_inet_addr *VAR_7,
       __be16 VAR_8, __u16 VAR_9, __u32 VAR_10,
       __u32 VAR_11)
{
 struct ip_vs_dest *VAR_12;
 struct ip_vs_service *VAR_13;
 __be16 VAR_14 = VAR_6;

 VAR_13 = FUNC_1(VAR_2, VAR_3, VAR_10, VAR_9, VAR_7, VAR_8);
 if (!VAR_13)
  return ((void*)0);
 if (VAR_10 && (VAR_11 & VAR_0) != VAR_1)
  VAR_14 = 0;
 VAR_12 = FUNC_0(VAR_13, VAR_4, VAR_5, VAR_14);
 if (!VAR_12)
  VAR_12 = FUNC_0(VAR_13, VAR_4, VAR_5, VAR_14 ^ VAR_6);
 return VAR_12;
}
