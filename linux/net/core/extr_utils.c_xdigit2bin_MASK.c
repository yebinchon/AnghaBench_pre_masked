
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char) ;

__attribute__((used)) static inline int FUNC_1(char VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_6 == VAR_7 || VAR_6 == '\0')
  return VAR_1;
 if (VAR_6 == ':')
  return VAR_0;
 if (VAR_6 == '.')
  return VAR_3;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 >= 0)
  return VAR_8 | VAR_5 | (VAR_8 < 10 ? VAR_2 : 0);

 if (VAR_7 == -1)
  return VAR_1;
 return VAR_4;
}
