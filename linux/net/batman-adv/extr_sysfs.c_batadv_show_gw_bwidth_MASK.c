
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kobject {int dummy; } ;
struct TYPE_2__ {int bandwidth_up; int bandwidth_down; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct batadv_priv* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct attribute*) ;
 int FUNC_3 (char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_0,
         struct attribute *VAR_1, char *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_1);

 VAR_4 = FUNC_0(&VAR_3->gw.bandwidth_down);
 VAR_5 = FUNC_0(&VAR_3->gw.bandwidth_up);

 return FUNC_3(VAR_2, "%u.%u/%u.%u MBit\n", VAR_4 / 10,
         VAR_4 % 10, VAR_5 / 10, VAR_5 % 10);
}
