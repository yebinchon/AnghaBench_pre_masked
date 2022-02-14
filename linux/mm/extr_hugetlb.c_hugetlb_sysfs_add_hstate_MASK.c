
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hstate {int name; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hstate*) ;
 struct kobject* FUNC_1 (int ,struct kobject*) ;
 int FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct kobject*,struct attribute_group const*) ;

__attribute__((used)) static int FUNC_4(struct hstate *VAR_1, struct kobject *VAR_2,
        struct kobject **VAR_3,
        const struct attribute_group *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_1);

 VAR_3[VAR_6] = FUNC_1(VAR_1->name, VAR_2);
 if (!VAR_3[VAR_6])
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3[VAR_6], VAR_4);
 if (VAR_5)
  FUNC_2(VAR_3[VAR_6]);

 return VAR_5;
}
