
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct net_device*,char*,size_t) ;
 struct batadv_priv* FUNC_1 (struct kobject*) ;
 struct net_device* FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_0,
          struct attribute *VAR_1, char *VAR_2,
          size_t VAR_3)
{
 struct batadv_priv *VAR_4 = FUNC_1(VAR_0);
 struct net_device *VAR_5 = FUNC_2(VAR_0);
 ssize_t VAR_6;

 FUNC_4(VAR_1);

 if (VAR_2[VAR_3 - 1] == '\n')
  VAR_2[VAR_3 - 1] = '\0';

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);

 FUNC_3(VAR_4);

 return VAR_6;
}
