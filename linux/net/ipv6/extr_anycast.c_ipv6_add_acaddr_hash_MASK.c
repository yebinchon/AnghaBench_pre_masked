
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ifacaddr6 {int aca_addr_lst; int aca_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 unsigned int FUNC_1 (struct net*,int *) ;
 int * VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net *VAR_2, struct ifacaddr6 *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2, &VAR_3->aca_addr);

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_3->aca_addr_lst, &VAR_1[VAR_4]);
 FUNC_3(&VAR_0);
}
