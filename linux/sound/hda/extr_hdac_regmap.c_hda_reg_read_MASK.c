
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdac_device*) ;
 int FUNC_1 (struct hdac_device*,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hdac_device*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct hdac_device*,unsigned int,unsigned int*) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct hdac_device*,unsigned int,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, unsigned int VAR_7, unsigned int *VAR_8)
{
 struct hdac_device *VAR_9 = VAR_6;
 int VAR_10 = FUNC_2(VAR_7);
 int VAR_11;
 int VAR_12 = 0;

 if (VAR_10 != VAR_2) {
  VAR_12 = FUNC_0(VAR_9);
  if (VAR_12 < 0)
   return -VAR_5;
 }
 VAR_7 |= (VAR_9->addr << 28);
 if (FUNC_5(VAR_7)) {
  VAR_11 = FUNC_4(VAR_9, VAR_7, VAR_8);
  goto out;
 }
 if (VAR_10 == VAR_3) {
  VAR_11 = FUNC_3(VAR_9, VAR_7, VAR_8);
  goto out;
 }
 if ((VAR_10 & 0x700) == VAR_4)
  VAR_7 &= ~VAR_0;

 VAR_11 = FUNC_6(VAR_9, VAR_7, 0, VAR_8);
 if (VAR_11 < 0)
  goto out;

 if (VAR_10 == VAR_2) {
  if (*VAR_8 & VAR_1)
   *VAR_8 = -1;
  else
   *VAR_8 = (*VAR_8 >> 4) & 0x0f;
 }
 out:
 FUNC_1(VAR_9, VAR_12);
 return VAR_11;
}
