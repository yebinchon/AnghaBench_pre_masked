
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_mh_state {struct ip_vs_mh_lookup* lookup; } ;
struct ip_vs_mh_lookup {int dest; } ;
struct ip_vs_dest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ip_vs_dest*) ;
 struct ip_vs_dest* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ip_vs_mh_state *VAR_1)
{
 int VAR_2;
 struct ip_vs_mh_lookup *VAR_3;
 struct ip_vs_dest *VAR_4;

 VAR_3 = &VAR_1->lookup[0];
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = FUNC_2(VAR_3->dest, 1);
  if (VAR_4) {
   FUNC_1(VAR_4);
   FUNC_0(VAR_3->dest, ((void*)0));
  }
  VAR_3++;
 }
}
