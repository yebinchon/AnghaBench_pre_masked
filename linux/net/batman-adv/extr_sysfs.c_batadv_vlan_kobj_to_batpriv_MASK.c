
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kobject* parent; int name; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 struct batadv_priv* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct batadv_priv *FUNC_2(struct kobject *VAR_1)
{



 if (!FUNC_1(VAR_0, VAR_1->name))
  return FUNC_0(VAR_1);




 return FUNC_0(VAR_1->parent);
}
