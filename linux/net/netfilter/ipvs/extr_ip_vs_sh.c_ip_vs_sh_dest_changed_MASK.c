
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sh_state {int dummy; } ;
struct ip_vs_service {struct ip_vs_sh_state* sched_data; } ;
struct ip_vs_dest {int dummy; } ;


 int FUNC_0 (struct ip_vs_sh_state*,struct ip_vs_service*) ;

__attribute__((used)) static int FUNC_1(struct ip_vs_service *VAR_0,
     struct ip_vs_dest *VAR_1)
{
 struct ip_vs_sh_state *VAR_2 = VAR_0->sched_data;


 FUNC_0(VAR_2, VAR_0);

 return 0;
}
