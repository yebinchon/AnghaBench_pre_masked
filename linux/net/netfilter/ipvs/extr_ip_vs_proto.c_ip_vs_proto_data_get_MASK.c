
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netns_ipvs {struct ip_vs_proto_data** proto_data_table; } ;
struct ip_vs_proto_data {TYPE_1__* pp; struct ip_vs_proto_data* next; } ;
struct TYPE_2__ {unsigned short protocol; } ;


 unsigned int FUNC_0 (unsigned short) ;

struct ip_vs_proto_data *
FUNC_1(struct netns_ipvs *VAR_0, unsigned short VAR_1)
{
 struct ip_vs_proto_data *VAR_2;
 unsigned int VAR_3 = FUNC_0(VAR_1);

 for (VAR_2 = VAR_0->proto_data_table[VAR_3]; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->pp->protocol == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
