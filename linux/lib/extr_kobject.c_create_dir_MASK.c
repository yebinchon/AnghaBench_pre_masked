
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct kobj_type {int default_groups; } ;
struct kobj_ns_type_operations {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kobj_type* FUNC_1 (struct kobject*) ;
 struct kobj_ns_type_operations* FUNC_2 (struct kobject*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct kobject*) ;
 int FUNC_5 (struct kobject*) ;
 int FUNC_6 (struct kobject*,int ) ;
 int FUNC_7 (struct kobject*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct kobject*) ;

__attribute__((used)) static int FUNC_11(struct kobject *VAR_2)
{
 const struct kobj_type *VAR_3 = FUNC_1(VAR_2);
 const struct kobj_ns_type_operations *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_2, FUNC_4(VAR_2));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5) {
  FUNC_10(VAR_2);
  return VAR_5;
 }

 if (VAR_3) {
  VAR_5 = FUNC_7(VAR_2, VAR_3->default_groups);
  if (VAR_5) {
   FUNC_10(VAR_2);
   return VAR_5;
  }
 }





 FUNC_9(VAR_2->sd);





 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_4->type <= VAR_1);
  FUNC_0(VAR_4->type >= VAR_0);
  FUNC_0(!FUNC_3(VAR_4->type));

  FUNC_8(VAR_2->sd);
 }

 return 0;
}
