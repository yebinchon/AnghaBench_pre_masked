
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {int next_rcu; } ;
struct in_device {int mc_count; int mc_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct ip_mc_list*) ;
 int FUNC_3 (struct in_device*) ;
 struct ip_mc_list* FUNC_4 (int ) ;

void FUNC_5(struct in_device *VAR_0)
{
 struct ip_mc_list *VAR_1;

 FUNC_0();


 FUNC_3(VAR_0);




 while ((VAR_1 = FUNC_4(VAR_0->mc_list)) != ((void*)0)) {
  VAR_0->mc_list = VAR_1->next_rcu;
  VAR_0->mc_count--;
  FUNC_2(VAR_1);
 }
}
