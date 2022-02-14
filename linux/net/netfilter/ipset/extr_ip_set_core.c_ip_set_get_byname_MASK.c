
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip_set_net {size_t ip_set_max; int ip_set_list; } ;
struct ip_set {int name; } ;
typedef size_t ip_set_id_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct ip_set*) ;
 struct ip_set_net* FUNC_2 (struct net*) ;
 struct ip_set** FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

ip_set_id_t
FUNC_6(struct net *VAR_1, const char *VAR_2, struct ip_set **VAR_3)
{
 ip_set_id_t VAR_4, VAR_5 = VAR_0;
 struct ip_set *VAR_6;
 struct ip_set_net *VAR_7 = FUNC_2(VAR_1);

 FUNC_4();
 for (VAR_4 = 0; VAR_4 < VAR_7->ip_set_max; VAR_4++) {
  VAR_6 = FUNC_3(VAR_7->ip_set_list)[VAR_4];
  if (VAR_6 && FUNC_0(VAR_6->name, VAR_2)) {
   FUNC_1(VAR_6);
   VAR_5 = VAR_4;
   *VAR_3 = VAR_6;
   break;
  }
 }
 FUNC_5();

 return VAR_5;
}
