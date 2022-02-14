
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbochs_type {int mbytes; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mbochs_type* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct kobject *VAR_0, struct device *VAR_1, char *VAR_2)
{
 const struct mbochs_type *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "virtual display, %d MB video memory\n",
         VAR_3 ? VAR_3->mbytes : 0);
}
