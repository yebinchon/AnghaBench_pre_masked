
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int addr; scalar_t__ lazy_cache; scalar_t__ caps_overwriting; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct hdac_device*) ;
 int FUNC_1 (struct hdac_device*,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hdac_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct hdac_device*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct hdac_device*,unsigned int,int ,int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_11, unsigned int VAR_12, unsigned int VAR_13)
{
 struct hdac_device *VAR_14 = VAR_11;
 unsigned int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;

 if (VAR_14->caps_overwriting)
  return 0;

 VAR_12 &= ~0x00080000U;
 VAR_12 |= (VAR_14->addr << 28);
 VAR_15 = FUNC_2(VAR_12);

 if (VAR_15 != VAR_8) {
  VAR_19 = FUNC_0(VAR_14);
  if (VAR_19 < 0)
   return VAR_14->lazy_cache ? 0 : -VAR_10;
 }

 if (FUNC_5(VAR_12)) {
  VAR_18 = FUNC_4(VAR_14, VAR_12, VAR_13);
  goto out;
 }

 if (VAR_15 == VAR_9) {
  VAR_18 = FUNC_3(VAR_14, VAR_12, VAR_13);
  goto out;
 }

 switch (VAR_15 & 0xf00) {
 case 130:
  if ((VAR_12 & VAR_0) && (VAR_13 & VAR_3))
   VAR_13 = 0;
  VAR_15 = 130;
  if (VAR_12 & VAR_1)
   VAR_15 |= VAR_5 >> 8;
  else
   VAR_15 |= VAR_7 >> 8;
  if (VAR_12 & VAR_2) {
   VAR_15 |= VAR_6 >> 8;
  } else {
   VAR_15 |= VAR_4 >> 8;
   VAR_15 |= VAR_12 & 0xf;
  }
  break;
 }

 switch (VAR_15) {
 case 128:
  VAR_17 = 2;
  break;
 case 129:
  VAR_17 = 4;
  break;
 default:
  VAR_17 = 1;
  break;
 }

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  VAR_12 &= ~0xfffff;
  VAR_12 |= (VAR_15 + VAR_16) << 8 | ((VAR_13 >> (8 * VAR_16)) & 0xff);
  VAR_18 = FUNC_6(VAR_14, VAR_12, 0, ((void*)0));
  if (VAR_18 < 0)
   goto out;
 }

 out:
 FUNC_1(VAR_14, VAR_19);
 return VAR_18;
}
