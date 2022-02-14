
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!FUNC_0(*VAR_0))
  VAR_2 = 1;
 else if (VAR_1 >= 4 && *(VAR_0 + 1) >= 0x30 && *(VAR_0 + 1) <= 0x39)
 {

  if (*VAR_0 >= 0x81 && *VAR_0 <= 0xfe &&
   *(VAR_0 + 2) >= 0x81 && *(VAR_0 + 2) <= 0xfe &&
   *(VAR_0 + 3) >= 0x30 && *(VAR_0 + 3) <= 0x39)
   VAR_2 = 4;
  else
   VAR_2 = -1;
 }
 else if (VAR_1 >= 2 && *VAR_0 >= 0x81 && *VAR_0 <= 0xfe)
 {

  if ((*(VAR_0 + 1) >= 0x40 && *(VAR_0 + 1) <= 0x7e) ||
   (*(VAR_0 + 1) >= 0x80 && *(VAR_0 + 1) <= 0xfe))
   VAR_2 = 2;
  else
   VAR_2 = -1;
 }
 else
  VAR_2 = -1;
 return VAR_2;
}
