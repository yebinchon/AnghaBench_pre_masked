
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int caps_overwriting; int regmap; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,unsigned int,unsigned int) ;

int FUNC_1(struct hdac_device *VAR_2, hda_nid_t VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = (VAR_0 << 8) | (VAR_3 << 20) | VAR_4;
 int VAR_7;

 if (!VAR_2->regmap)
  return -VAR_1;

 VAR_2->caps_overwriting = 1;
 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);
 VAR_2->caps_overwriting = 0;
 return VAR_7;
}
