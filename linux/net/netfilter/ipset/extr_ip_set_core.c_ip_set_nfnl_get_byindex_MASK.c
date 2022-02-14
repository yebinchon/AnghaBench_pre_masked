
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {int dummy; } ;
typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_set*) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,scalar_t__) ;
 struct ip_set_net* FUNC_2 (struct net*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

ip_set_id_t
FUNC_5(struct net *VAR_2, ip_set_id_t VAR_3)
{
 struct ip_set *VAR_4;
 struct ip_set_net *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 >= VAR_5->ip_set_max)
  return VAR_0;

 FUNC_3(VAR_1);
 VAR_4 = FUNC_1(VAR_5, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_4);
 else
  VAR_3 = VAR_0;
 FUNC_4(VAR_1);

 return VAR_3;
}
