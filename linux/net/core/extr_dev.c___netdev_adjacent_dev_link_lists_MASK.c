
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*,struct list_head*,void*,int) ;
 int FUNC_1 (struct net_device*,struct net_device*,int,struct list_head*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct net_device *VAR_1,
         struct list_head *VAR_2,
         struct list_head *VAR_3,
         void *VAR_4, bool VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_3,
        VAR_4, 0);
 if (VAR_6) {
  FUNC_1(VAR_0, VAR_1, 1, VAR_2);
  return VAR_6;
 }

 return 0;
}
