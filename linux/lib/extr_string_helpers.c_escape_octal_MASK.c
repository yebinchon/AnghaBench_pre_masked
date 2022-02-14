
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned char VAR_0, char **VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_1;

 if (VAR_3 < VAR_2)
  *VAR_3 = '\\';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = ((VAR_0 >> 6) & 0x07) + '0';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = ((VAR_0 >> 3) & 0x07) + '0';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = ((VAR_0 >> 0) & 0x07) + '0';
 ++VAR_3;

 *VAR_1 = VAR_3;
 return 1;
}
