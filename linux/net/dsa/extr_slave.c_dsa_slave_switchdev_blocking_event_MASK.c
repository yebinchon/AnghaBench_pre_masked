
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,void*,int ,int ) ;
 int FUNC_2 (struct net_device*,void*,int ,int ) ;
 int FUNC_3 (struct net_device*,void*,int ,int ) ;
 struct net_device* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_5,
           unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_9 = FUNC_2(VAR_8, VAR_7,
          VAR_1,
          VAR_3);
  return FUNC_0(VAR_9);
 case 128:
  VAR_9 = FUNC_3(VAR_8, VAR_7,
          VAR_1,
          VAR_4);
  return FUNC_0(VAR_9);
 case 130:
  VAR_9 = FUNC_1(VAR_8, VAR_7,
           VAR_1,
           VAR_2);
  return FUNC_0(VAR_9);
 }

 return VAR_0;
}
