
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backing_dev_info {unsigned long ra_pages; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 struct backing_dev_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct backing_dev_info *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 ssize_t VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->ra_pages = VAR_6 >> (VAR_0 - 10);

 return VAR_4;
}
