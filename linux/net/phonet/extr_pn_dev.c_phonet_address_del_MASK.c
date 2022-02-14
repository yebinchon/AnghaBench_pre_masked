
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device_list {int lock; } ;
struct phonet_device {int list; int addrs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct phonet_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phonet_device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct phonet_device_list* FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int,int ) ;

int FUNC_9(struct net_device *VAR_2, u8 VAR_3)
{
 struct phonet_device_list *VAR_4 = FUNC_7(FUNC_2(VAR_2));
 struct phonet_device *VAR_5;
 int VAR_6 = 0;

 FUNC_5(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5 || !FUNC_8(VAR_3 >> 2, VAR_5->addrs)) {
  VAR_6 = -VAR_0;
  VAR_5 = ((void*)0);
 } else if (FUNC_1(VAR_5->addrs, 64))
  FUNC_4(&VAR_5->list);
 else
  VAR_5 = ((void*)0);
 FUNC_6(&VAR_4->lock);

 if (VAR_5)
  FUNC_3(VAR_5, VAR_1);

 return VAR_6;
}
