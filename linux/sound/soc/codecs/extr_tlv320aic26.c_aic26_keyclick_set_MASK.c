
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aic26 {int component; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct aic26* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct aic26 *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_5->component, VAR_0,
       0x8000, 0x800);

 return VAR_4;
}
