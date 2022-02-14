
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdac_device*,unsigned int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct hdac_device *VAR_6,
        unsigned int VAR_7, unsigned int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_5 << 8;
 if (VAR_7 & VAR_0)
  VAR_10 |= VAR_3;
 else
  VAR_10 |= VAR_1 | ((VAR_7 & 0xf) << 8);
 VAR_7 = (VAR_7 & ~0xfffff) | VAR_10;

 VAR_11 = VAR_8 & 0xff;
 VAR_12 = (VAR_8 >> 8) & 0xff;
 if (VAR_11 == VAR_12) {
  VAR_7 |= VAR_2 | VAR_4;
  return FUNC_0(VAR_6, VAR_7 | VAR_11, 0, ((void*)0));
 }

 VAR_9 = FUNC_0(VAR_6, VAR_7 | VAR_2 | VAR_11, 0, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_6, VAR_7 | VAR_4 | VAR_12, 0, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;
 return 0;
}
