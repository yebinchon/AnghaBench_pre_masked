
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int beep; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8962_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,long) ;
 int FUNC_2 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct wm8962_priv *VAR_6 = FUNC_0(VAR_2);
 long int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_8 != 0)
  return VAR_8;

 FUNC_1(VAR_6->beep, VAR_0, VAR_1, VAR_7);

 return VAR_5;
}
