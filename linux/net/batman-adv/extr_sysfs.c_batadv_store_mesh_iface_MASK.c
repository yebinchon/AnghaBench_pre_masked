
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct batadv_store_mesh_work {int work; int soft_iface_name; struct net_device* net_dev; } ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 struct net_device* FUNC_1 (struct kobject*) ;
 int VAR_5 ;
 int FUNC_2 (struct attribute*) ;
 int FUNC_3 (struct net_device*) ;
 struct batadv_store_mesh_work* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct kobject *VAR_6,
           struct attribute *VAR_7, char *VAR_8,
           size_t VAR_9)
{
 struct net_device *VAR_10 = FUNC_1(VAR_6);
 struct batadv_store_mesh_work *VAR_11;

 FUNC_2(VAR_7);

 if (VAR_8[VAR_9 - 1] == '\n')
  VAR_8[VAR_9 - 1] = '\0';

 if (FUNC_7(VAR_8) >= VAR_3) {
  FUNC_5("Invalid parameter for 'mesh_iface' setting received: interface name too long '%s'\n",
         VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_3(VAR_10);
 FUNC_0(&VAR_11->work, VAR_5);
 VAR_11->net_dev = VAR_10;
 FUNC_8(VAR_11->soft_iface_name, VAR_8,
  sizeof(VAR_11->soft_iface_name));

 FUNC_6(VAR_4, &VAR_11->work);

 return VAR_9;
}
