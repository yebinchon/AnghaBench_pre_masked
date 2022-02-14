
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {int name; } ;
typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,scalar_t__) ;

__attribute__((used)) static struct ip_set *
FUNC_2(struct ip_set_net *VAR_1, const char *VAR_2, ip_set_id_t *VAR_3)
{
 struct ip_set *VAR_4 = ((void*)0);
 ip_set_id_t VAR_5;

 *VAR_3 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1->ip_set_max; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  if (VAR_4 && FUNC_0(VAR_4->name, VAR_2)) {
   *VAR_3 = VAR_5;
   break;
  }
 }
 return (*VAR_3 == VAR_0 ? ((void*)0) : VAR_4);
}
