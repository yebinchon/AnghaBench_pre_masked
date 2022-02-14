
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum udev_action { ____Placeholder_udev_action } udev_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static enum udev_action FUNC_1(const char *VAR_3)
{
 if (!VAR_3)
  return VAR_2;

 if (!FUNC_0("add", VAR_3, 3))
  return VAR_0;
 if (!FUNC_0("remove", VAR_3, 6))
  return VAR_1;

 return VAR_2;
}
