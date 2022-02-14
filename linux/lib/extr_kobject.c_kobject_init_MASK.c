
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kobj_type* ktype; scalar_t__ state_initialized; } ;
struct kobj_type {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (char*,struct kobject*,...) ;

void FUNC_3(struct kobject *VAR_0, struct kobj_type *VAR_1)
{
 char *VAR_2;

 if (!VAR_0) {
  VAR_2 = "invalid kobject pointer!";
  goto error;
 }
 if (!VAR_1) {
  VAR_2 = "must have a ktype to be initialized properly!\n";
  goto error;
 }
 if (VAR_0->state_initialized) {

  FUNC_2("kobject (%p): tried to init an initialized object, something is seriously wrong.\n",
         VAR_0);
  FUNC_0();
 }

 FUNC_1(VAR_0);
 VAR_0->ktype = VAR_1;
 return;

error:
 FUNC_2("kobject (%p): %s\n", VAR_0, VAR_2);
 FUNC_0();
}
