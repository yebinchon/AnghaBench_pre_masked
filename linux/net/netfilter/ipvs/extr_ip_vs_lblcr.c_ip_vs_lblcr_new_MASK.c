
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef int u16 ;
struct ip_vs_lblcr_table {int dummy; } ;
struct TYPE_2__ {int list; int size; } ;
struct ip_vs_lblcr_entry {TYPE_1__ set; int lastuse; int addr; int af; } ;
struct ip_vs_dest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,union nf_inet_addr const*) ;
 int FUNC_3 (TYPE_1__*,struct ip_vs_dest*,int) ;
 struct ip_vs_lblcr_entry* FUNC_4 (int ,struct ip_vs_lblcr_table*,union nf_inet_addr const*) ;
 int FUNC_5 (struct ip_vs_lblcr_table*,struct ip_vs_lblcr_entry*) ;
 int VAR_1 ;
 struct ip_vs_lblcr_entry* FUNC_6 (int,int ) ;

__attribute__((used)) static inline struct ip_vs_lblcr_entry *
FUNC_7(struct ip_vs_lblcr_table *VAR_2, const union nf_inet_addr *VAR_3,
  u16 VAR_4, struct ip_vs_dest *VAR_5)
{
 struct ip_vs_lblcr_entry *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
  if (!VAR_6)
   return ((void*)0);

  VAR_6->af = VAR_4;
  FUNC_2(VAR_4, &VAR_6->addr, VAR_3);
  VAR_6->lastuse = VAR_1;


  FUNC_1(&(VAR_6->set.size), 0);
  FUNC_0(&VAR_6->set.list);

  FUNC_3(&VAR_6->set, VAR_5, 0);

  FUNC_5(VAR_2, VAR_6);
  return VAR_6;
 }

 FUNC_3(&VAR_6->set, VAR_5, 1);

 return VAR_6;
}
