
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_switchdev_event_work {unsigned long event; int work; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned long VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct dsa_switchdev_event_work*,void*) ;
 int FUNC_5 (struct dsa_switchdev_event_work*) ;
 struct dsa_switchdev_event_work* FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct net_device*,void*,int (*) (struct net_device*),int ) ;
 struct net_device* FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_7,
         unsigned long VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = FUNC_9(VAR_9);
 struct dsa_switchdev_event_work *VAR_11;
 int VAR_12;

 if (VAR_8 == VAR_4) {
  VAR_12 = FUNC_8(VAR_10, VAR_9,
           FUNC_3,
           VAR_5);
  return FUNC_7(VAR_12);
 }

 if (!FUNC_3(VAR_10))
  return VAR_2;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return VAR_1;

 FUNC_0(&VAR_11->work,
    VAR_6);
 VAR_11->dev = VAR_10;
 VAR_11->event = VAR_8;

 switch (VAR_8) {
 case 129:
 case 128:
  if (FUNC_4(VAR_11, VAR_9))
   goto err_fdb_work_init;
  FUNC_1(VAR_10);
  break;
 default:
  FUNC_5(VAR_11);
  return VAR_2;
 }

 FUNC_2(&VAR_11->work);
 return VAR_3;

err_fdb_work_init:
 FUNC_5(VAR_11);
 return VAR_1;
}
