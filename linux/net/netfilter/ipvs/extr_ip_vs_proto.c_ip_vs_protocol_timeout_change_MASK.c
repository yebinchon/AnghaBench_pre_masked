
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netns_ipvs {struct ip_vs_proto_data** proto_data_table; } ;
struct ip_vs_proto_data {TYPE_1__* pp; struct ip_vs_proto_data* next; } ;
struct TYPE_2__ {int (* timeout_change ) (struct ip_vs_proto_data*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ip_vs_proto_data*,int) ;

void FUNC_1(struct netns_ipvs *VAR_1, int VAR_2)
{
 struct ip_vs_proto_data *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (VAR_3 = VAR_1->proto_data_table[VAR_4]; VAR_3; VAR_3 = VAR_3->next) {
   if (VAR_3->pp->timeout_change)
    VAR_3->pp->timeout_change(VAR_3, VAR_2);
  }
 }
}
