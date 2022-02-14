
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_1);

 FUNC_0();

 VAR_6 = FUNC_1();
 if (VAR_6 < 0) {
  VAR_6 = -VAR_0;
  FUNC_4("could not alloc settings for config trigger: %d\n",
         VAR_6);
  goto out;
 }

 FUNC_5("reset\n");
 VAR_6 = VAR_5;

out:
 FUNC_3(&VAR_1);

 return VAR_6;
}
