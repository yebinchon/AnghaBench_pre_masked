
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbochs_type {int mbytes; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mbochs_type* FUNC_0 (struct kobject*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct kobject *VAR_2, struct device *VAR_3, char *VAR_4)
{
 const struct mbochs_type *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = (VAR_0 - VAR_1) / VAR_5->mbytes;

 return FUNC_1(VAR_4, "%d\n", VAR_6);
}
