
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_net {int ip_set_list; } ;
struct ip_set {int dummy; } ;
typedef size_t ip_set_id_t ;


 int FUNC_0 (struct ip_set*) ;
 struct ip_set** FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct ip_set_net *VAR_0, ip_set_id_t VAR_1)
{
 struct ip_set *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_0->ip_set_list)[VAR_1];
 if (VAR_2)
  FUNC_0(VAR_2);
 FUNC_3();
}
