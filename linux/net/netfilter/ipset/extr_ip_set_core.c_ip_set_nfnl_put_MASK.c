
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip_set_net {int is_deleted; } ;
struct ip_set {int dummy; } ;
typedef int ip_set_id_t ;


 int VAR_0 ;
 int FUNC_0 (struct ip_set*) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,int ) ;
 struct ip_set_net* FUNC_2 (struct net*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct net *VAR_1, ip_set_id_t VAR_2)
{
 struct ip_set *VAR_3;
 struct ip_set_net *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(VAR_0);
 if (!VAR_4->is_deleted) {
  VAR_3 = FUNC_1(VAR_4, VAR_2);
  if (VAR_3)
   FUNC_0(VAR_3);
 }
 FUNC_4(VAR_0);
}
