
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct atm_dev {scalar_t__ signal; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct atm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct atm_dev *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_4, VAR_1, "%d\n",
    VAR_5->signal == VAR_0 ? 0 : 1);
}
