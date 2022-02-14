
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip_set_net {int ip_set_list; } ;
struct ip_set {int dummy; } ;
typedef size_t ip_set_id_t ;


 struct ip_set_net* FUNC_0 (struct net*) ;
 struct ip_set** FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct ip_set *
FUNC_4(struct net *VAR_0, ip_set_id_t VAR_1)
{
 struct ip_set *VAR_2;
 struct ip_set_net *VAR_3 = FUNC_0(VAR_0);

 FUNC_2();

 VAR_2 = FUNC_1(VAR_3->ip_set_list)[VAR_1];
 FUNC_3();

 return VAR_2;
}
