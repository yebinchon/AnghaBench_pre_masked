
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int ph_prepare; } ;
struct switchdev_attr {int id; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ,struct net_device*,struct switchdev_attr const*,struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
           const struct switchdev_attr *VAR_2)
{
 struct switchdev_trans VAR_3;
 int VAR_4;
 VAR_3.ph_prepare = 1;
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
      &VAR_3);
 if (VAR_4)
  return VAR_4;






 VAR_3.ph_prepare = 0;
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
      &VAR_3);
 FUNC_0(VAR_4, "%s: Commit of attribute (id=%d) failed.\n",
      VAR_1->name, VAR_2->id);

 return VAR_4;
}
