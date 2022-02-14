
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int
FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = 0;

 VAR_8 = (VAR_7 & 0x1f) << 27;
 VAR_8 |= (VAR_6 & 0x01) << 26;
 VAR_8 |= (VAR_5 & 0x01) << 25;
 VAR_8 |= (VAR_4 & 0x01) << 24;
 VAR_8 |= (VAR_3 & 0x7f) << 17;
 VAR_8 |= (VAR_2 & 0x01) << 16;
 VAR_8 |= (VAR_1 & 0xff) << 8;
 VAR_8 |= VAR_0 & 0xff;

 return VAR_8;
}
