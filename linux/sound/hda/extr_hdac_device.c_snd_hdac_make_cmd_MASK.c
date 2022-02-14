
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_device {int addr; int dev; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int *,char*,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct hdac_device *VAR_0, hda_nid_t VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_0->addr;
 if ((VAR_5 & ~0xf) || (VAR_1 & ~0x7f) ||
     (VAR_2 & ~0xfff) || (VAR_3 & ~0xffff)) {
  FUNC_0(&VAR_0->dev, "out of range cmd %x:%x:%x:%x\n",
   VAR_5, VAR_1, VAR_2, VAR_3);
  return -1;
 }

 VAR_4 = VAR_5 << 28;
 VAR_4 |= (u32)VAR_1 << 20;
 VAR_4 |= VAR_2 << 8;
 VAR_4 |= VAR_3;
 return VAR_4;
}
