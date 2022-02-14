
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{


 if (VAR_0 == 0xA0 || VAR_0 == 0x2028 || VAR_0 == 0x2029)
  return ' ';
 if (VAR_0 == '\r' || VAR_0 == '\n' || VAR_0 == '\t')
  return ' ';
 if (VAR_0 >= 'A' && VAR_0 <= 'Z')
  return VAR_0 - 'A' + 'a';
 return VAR_0;
}
