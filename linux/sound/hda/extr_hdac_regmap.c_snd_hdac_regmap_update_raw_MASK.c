
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;


 int FUNC_0 (struct hdac_device*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct hdac_device*,unsigned int,unsigned int) ;

int FUNC_2(struct hdac_device *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 &= VAR_2;
 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3 |= VAR_4 & ~VAR_2;
 if (VAR_3 == VAR_4)
  return 0;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return 1;
}
