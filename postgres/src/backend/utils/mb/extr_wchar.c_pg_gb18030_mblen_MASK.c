
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(*VAR_0))
  VAR_1 = 1;
 else if (*(VAR_0 + 1) >= 0x30 && *(VAR_0 + 1) <= 0x39)
  VAR_1 = 4;
 else
  VAR_1 = 2;
 return VAR_1;
}
