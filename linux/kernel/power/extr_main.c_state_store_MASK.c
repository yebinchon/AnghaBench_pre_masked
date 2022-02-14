
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ suspend_state_t ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_6(struct kobject *VAR_6, struct kobj_attribute *VAR_7,
      const char *VAR_8, size_t VAR_9)
{
 suspend_state_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2();
 if (VAR_11)
  return VAR_11;

 if (FUNC_3() > VAR_4) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 if (VAR_10 < VAR_2) {
  if (VAR_10 == VAR_3)
   VAR_10 = VAR_5;

  VAR_11 = FUNC_5(VAR_10);
 } else if (VAR_10 == VAR_2) {
  VAR_11 = FUNC_1();
 } else {
  VAR_11 = -VAR_1;
 }

 out:
 FUNC_4();
 return VAR_11 ? VAR_11 : VAR_9;
}
