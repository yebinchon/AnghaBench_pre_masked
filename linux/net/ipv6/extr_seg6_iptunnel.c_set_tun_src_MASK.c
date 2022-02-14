
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_pernet_data {int tun_src; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct net*,struct net_device*,struct in6_addr*,int ,struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,struct in6_addr*,int) ;
 struct in6_addr* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct seg6_pernet_data* FUNC_6 (struct net*) ;

__attribute__((used)) static void FUNC_7(struct net *VAR_1, struct net_device *VAR_2,
   struct in6_addr *VAR_3, struct in6_addr *VAR_4)
{
 struct seg6_pernet_data *VAR_5 = FUNC_6(VAR_1);
 struct in6_addr *VAR_6;

 FUNC_4();

 VAR_6 = FUNC_3(VAR_5->tun_src);

 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_4, VAR_6, sizeof(struct in6_addr));
 } else {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0,
       VAR_4);
 }

 FUNC_5();
}
