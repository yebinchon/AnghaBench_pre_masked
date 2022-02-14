
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {struct kobject* parent; TYPE_1__* kset; } ;
struct TYPE_2__ {struct kobject kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (scalar_t__,int ) ;
 struct kobject* FUNC_2 (struct kobject*) ;
 char* FUNC_3 (struct kobject*,int ) ;
 int FUNC_4 (struct kobject*) ;
 int FUNC_5 (struct kobject*) ;
 int FUNC_6 (struct kobject*,int ,char**) ;
 int FUNC_7 (char*,char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (struct kobject*,struct kobject*,int ) ;

int FUNC_10(struct kobject *VAR_4, struct kobject *VAR_5)
{
 int VAR_6;
 struct kobject *VAR_7;
 const char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10[2];

 VAR_4 = FUNC_2(VAR_4);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_5);
 if (!VAR_5) {
  if (VAR_4->kset)
   VAR_5 = FUNC_2(&VAR_4->kset->kobj);
 }


 VAR_8 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
  goto out;
 }
 VAR_9 = FUNC_1(FUNC_8(VAR_8) + 15, VAR_2);
 if (!VAR_9) {
  VAR_6 = -VAR_1;
  goto out;
 }
 FUNC_7(VAR_9, "DEVPATH_OLD=%s", VAR_8);
 VAR_10[0] = VAR_9;
 VAR_10[1] = ((void*)0);
 VAR_6 = FUNC_9(VAR_4, VAR_5, FUNC_4(VAR_4));
 if (VAR_6)
  goto out;
 VAR_7 = VAR_4->parent;
 VAR_4->parent = VAR_5;
 VAR_5 = ((void*)0);
 FUNC_5(VAR_7);
 FUNC_6(VAR_4, VAR_3, VAR_10);
out:
 FUNC_5(VAR_5);
 FUNC_5(VAR_4);
 FUNC_0(VAR_9);
 FUNC_0(VAR_8);
 return VAR_6;
}
