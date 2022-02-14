
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {char* chip_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;

int FUNC_2(struct hdac_device *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 if (!VAR_3)
  return 0;
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_2->chip_name);
 VAR_2->chip_name = VAR_4;
 return 0;
}
