
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int switchdev_deferred_func_t ;
struct switchdev_deferred_item {int list; int data; int * func; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 struct switchdev_deferred_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5,
          const void *VAR_6, size_t VAR_7,
          switchdev_deferred_func_t *VAR_8)
{
 struct switchdev_deferred_item *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9) + VAR_7, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->dev = VAR_5;
 VAR_9->func = VAR_8;
 FUNC_3(VAR_9->data, VAR_6, VAR_7);
 FUNC_0(VAR_5);
 FUNC_5(&VAR_3);
 FUNC_2(&VAR_9->list, &VAR_2);
 FUNC_6(&VAR_3);
 FUNC_4(&VAR_4);
 return 0;
}
