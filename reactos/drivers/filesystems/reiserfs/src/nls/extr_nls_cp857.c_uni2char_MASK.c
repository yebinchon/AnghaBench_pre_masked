
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char** VAR_2 ;

__attribute__((used)) static int FUNC_0(wchar_t VAR_3, unsigned char *VAR_4, int VAR_5)
{
 unsigned char *VAR_6;
 unsigned char VAR_7 = VAR_3 & 0x00ff;
 unsigned char VAR_8 = (VAR_3 & 0xff00) >> 8;

 if (VAR_5 <= 0)
  return -VAR_1;

 VAR_6 = VAR_2[VAR_8];
 if (VAR_6 && VAR_6[VAR_7])
  VAR_4[0] = VAR_6[VAR_7];
 else
  return -VAR_0;
 return 1;
}
