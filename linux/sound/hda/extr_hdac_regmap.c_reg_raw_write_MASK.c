
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int regmap; } ;


 int FUNC_0 (struct hdac_device*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hdac_device *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 if (!VAR_0->regmap)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0->regmap, VAR_1, VAR_2);
}
