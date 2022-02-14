
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_bridge {int dev; int lock; int group_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct net_bridge*,int ,int) ;
 int FUNC_1 (struct net_bridge*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char const*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 size_t FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct net_bridge* FUNC_13 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_14(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct net_bridge *VAR_8 = FUNC_13(VAR_4);
 u8 VAR_9[6];

 if (!FUNC_7(FUNC_2(VAR_8->dev)->user_ns, VAR_1))
  return -VAR_3;

 if (!FUNC_5(VAR_6, VAR_9))
  return -VAR_2;

 if (!FUNC_4(VAR_9))
  return -VAR_2;

 if (VAR_9[5] == 1 ||
     VAR_9[5] == 2 ||
     VAR_9[5] == 3)
  return -VAR_2;

 if (!FUNC_9())
  return FUNC_8();

 FUNC_11(&VAR_8->lock);
 FUNC_3(VAR_8->group_addr, VAR_9);
 FUNC_12(&VAR_8->lock);

 FUNC_0(VAR_8, VAR_0, 1);
 FUNC_1(VAR_8);
 FUNC_6(VAR_8->dev);

 FUNC_10();

 return VAR_7;
}
