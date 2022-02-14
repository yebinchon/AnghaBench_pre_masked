
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct net_bridge {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct net_bridge* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!FUNC_2(VAR_4->sa_data))
  return -VAR_0;

 FUNC_4(&VAR_3->lock);
 if (!FUNC_1(VAR_1->dev_addr, VAR_4->sa_data)) {

  FUNC_0(VAR_3, VAR_4->sa_data);
 }
 FUNC_5(&VAR_3->lock);

 return 0;
}
