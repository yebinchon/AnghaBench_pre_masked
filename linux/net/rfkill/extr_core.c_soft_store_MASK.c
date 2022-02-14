
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct rfkill*,unsigned long) ;
 struct rfkill* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct rfkill *VAR_8 = FUNC_5(VAR_4);
 unsigned long VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_6, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > 1 )
  return -VAR_1;

 FUNC_2(&VAR_3);
 FUNC_4(VAR_8, VAR_9);
 FUNC_3(&VAR_3);

 return VAR_7;
}
