
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backing_dev_info {int dummy; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (struct backing_dev_info*,unsigned int) ;
 struct backing_dev_info* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct backing_dev_info *VAR_4 = FUNC_1(VAR_0);
 unsigned int VAR_5;
 ssize_t VAR_6;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_6)
  VAR_6 = VAR_3;

 return VAR_6;
}
