
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int type; int * netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 VAR_3->netdev_ops = &VAR_2;
 VAR_3->type = VAR_0;
 FUNC_0(VAR_3, VAR_1);
}
