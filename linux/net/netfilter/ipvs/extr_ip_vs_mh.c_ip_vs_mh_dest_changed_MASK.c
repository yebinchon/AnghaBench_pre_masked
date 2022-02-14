
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {struct ip_vs_mh_state* sched_data; } ;
struct ip_vs_mh_state {int gcd; int rshift; } ;
struct ip_vs_dest {int dummy; } ;


 int FUNC_0 (struct ip_vs_service*) ;
 int FUNC_1 (struct ip_vs_mh_state*,struct ip_vs_service*) ;
 int FUNC_2 (struct ip_vs_service*,int ) ;

__attribute__((used)) static int FUNC_3(struct ip_vs_service *VAR_0,
     struct ip_vs_dest *VAR_1)
{
 struct ip_vs_mh_state *VAR_2 = VAR_0->sched_data;

 VAR_2->gcd = FUNC_0(VAR_0);
 VAR_2->rshift = FUNC_2(VAR_0, VAR_2->gcd);


 return FUNC_1(VAR_2, VAR_0);
}
