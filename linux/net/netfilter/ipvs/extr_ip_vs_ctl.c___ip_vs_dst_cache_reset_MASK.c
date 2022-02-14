
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest_dst {int rcu_head; } ;
struct ip_vs_dest {int dest_dst; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct ip_vs_dest_dst* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ip_vs_dest *VAR_1)
{
 struct ip_vs_dest_dst *VAR_2;

 VAR_2 = FUNC_2(VAR_1->dest_dst, 1);
 if (VAR_2) {
  FUNC_0(VAR_1->dest_dst, ((void*)0));
  FUNC_1(&VAR_2->rcu_head, VAR_0);
 }
}
