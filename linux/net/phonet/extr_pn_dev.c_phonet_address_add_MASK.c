
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device_list {int lock; } ;
struct phonet_device {int addrs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phonet_device* FUNC_0 (struct net_device*) ;
 struct phonet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct phonet_device_list* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct net_device *VAR_2, u8 VAR_3)
{
 struct phonet_device_list *VAR_4 = FUNC_5(FUNC_2(VAR_2));
 struct phonet_device *VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_0(VAR_2);
 if (FUNC_7(VAR_5 == ((void*)0)))
  VAR_6 = -VAR_1;
 else if (FUNC_6(VAR_3 >> 2, VAR_5->addrs))
  VAR_6 = -VAR_0;
 FUNC_4(&VAR_4->lock);
 return VAR_6;
}
