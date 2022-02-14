
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef int u16 ;
struct ip_vs_lblc_table {int dummy; } ;
struct ip_vs_lblc_entry {struct ip_vs_dest* dest; int lastuse; int addr; int af; } ;
struct ip_vs_dest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,union nf_inet_addr const*) ;
 int FUNC_1 (struct ip_vs_dest*) ;
 int FUNC_2 (struct ip_vs_lblc_entry*) ;
 struct ip_vs_lblc_entry* FUNC_3 (int ,struct ip_vs_lblc_table*,union nf_inet_addr const*) ;
 int FUNC_4 (struct ip_vs_lblc_table*,struct ip_vs_lblc_entry*) ;
 int VAR_1 ;
 struct ip_vs_lblc_entry* FUNC_5 (int,int ) ;

__attribute__((used)) static inline struct ip_vs_lblc_entry *
FUNC_6(struct ip_vs_lblc_table *VAR_2, const union nf_inet_addr *VAR_3,
        u16 VAR_4, struct ip_vs_dest *VAR_5)
{
 struct ip_vs_lblc_entry *VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_6) {
  if (VAR_6->dest == VAR_5)
   return VAR_6;
  FUNC_2(VAR_6);
 }
 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->af = VAR_4;
 FUNC_0(VAR_4, &VAR_6->addr, VAR_3);
 VAR_6->lastuse = VAR_1;

 FUNC_1(VAR_5);
 VAR_6->dest = VAR_5;

 FUNC_4(VAR_2, VAR_6);

 return VAR_6;
}
