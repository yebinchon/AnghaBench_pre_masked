
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct batadv_priv {int isolation_mark; int isolation_mark_mask; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 struct batadv_priv* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct attribute*) ;
 int FUNC_2 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0,
       struct attribute *VAR_1, char *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 return FUNC_2(VAR_2, "%#.8x/%#.8x\n", VAR_3->isolation_mark,
         VAR_3->isolation_mark_mask);
}
