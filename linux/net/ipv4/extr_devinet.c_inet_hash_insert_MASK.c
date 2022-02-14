
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct net {int dummy; } ;
struct in_ifaddr {int hash; int ifa_local; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (struct net*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net *VAR_1, struct in_ifaddr *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1, VAR_2->ifa_local);

 FUNC_0();
 FUNC_1(&VAR_2->hash, &VAR_0[VAR_3]);
}
