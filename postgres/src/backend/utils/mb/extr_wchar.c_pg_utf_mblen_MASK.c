
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const unsigned char *VAR_0)
{
 int VAR_1;

 if ((*VAR_0 & 0x80) == 0)
  VAR_1 = 1;
 else if ((*VAR_0 & 0xe0) == 0xc0)
  VAR_1 = 2;
 else if ((*VAR_0 & 0xf0) == 0xe0)
  VAR_1 = 3;
 else if ((*VAR_0 & 0xf8) == 0xf0)
  VAR_1 = 4;






 else
  VAR_1 = 1;
 return VAR_1;
}
