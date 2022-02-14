
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; int uc; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1, struct net_device *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->addr_len != VAR_2->addr_len)
  return -VAR_0;

 FUNC_2(VAR_1);
 VAR_3 = FUNC_1(&VAR_1->uc, &VAR_2->uc, VAR_1->addr_len);
 if (!VAR_3)
  FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 return VAR_3;
}
