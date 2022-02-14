
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static inline unsigned char *
FUNC_0(unsigned char *VAR_0, uint32 VAR_1)
{
 if (VAR_1 & 0xff000000)
  *VAR_0++ = VAR_1 >> 24;
 if (VAR_1 & 0x00ff0000)
  *VAR_0++ = VAR_1 >> 16;
 if (VAR_1 & 0x0000ff00)
  *VAR_0++ = VAR_1 >> 8;
 if (VAR_1 & 0x000000ff)
  *VAR_0++ = VAR_1;
 return VAR_0;
}
