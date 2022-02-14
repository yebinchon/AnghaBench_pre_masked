
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_proto_data {int appcnt; } ;
struct ip_vs_app {int p_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ip_vs_proto_data* FUNC_1 (struct netns_ipvs*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct netns_ipvs *VAR_1, struct ip_vs_app *VAR_2)
{
 struct ip_vs_proto_data *VAR_3 = FUNC_1(VAR_1, VAR_0);

 FUNC_0(&VAR_3->appcnt);
 FUNC_2(&VAR_2->p_list);
}
