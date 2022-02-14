
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_iphdr {scalar_t__ protocol; } ;
struct ip_vs_dest {int dummy; } ;
struct ip_vs_conn {int dummy; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 struct ip_vs_conn* FUNC_0 (struct ip_vs_service*,struct ip_vs_dest*,struct sk_buff*,struct ip_vs_iphdr const*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct ip_vs_conn *
FUNC_2(struct ip_vs_service *VAR_1,
     struct ip_vs_dest *VAR_2,
     struct sk_buff *VAR_3,
     const struct ip_vs_iphdr *VAR_4,
     __be16 VAR_5,
     __be16 VAR_6)
{
 if (FUNC_1(VAR_4->protocol == VAR_0))
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return ((void*)0);
}
