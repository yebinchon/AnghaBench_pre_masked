
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_ifaddr {int addr_lst; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (int ,int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,struct net_device*,unsigned int) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct inet6_ifaddr *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(FUNC_0(VAR_3), &VAR_4->addr);
 int VAR_6 = 0;

 FUNC_5(&VAR_1);


 if (FUNC_3(FUNC_0(VAR_3), &VAR_4->addr, VAR_3, VAR_5)) {
  FUNC_4(VAR_3, "ipv6_add_addr: already assigned\n");
  VAR_6 = -VAR_0;
 } else {
  FUNC_1(&VAR_4->addr_lst, &VAR_2[VAR_5]);
 }

 FUNC_6(&VAR_1);

 return VAR_6;
}
