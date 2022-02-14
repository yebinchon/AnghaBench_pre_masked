
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned
FUNC_1(const char *VAR_0, unsigned VAR_1, char *VAR_2)
{
 const char *VAR_3,
      *VAR_4;
 char VAR_5,
    VAR_6,
      *VAR_7;

 VAR_4 = VAR_0 + VAR_1;
 VAR_3 = VAR_0;
 VAR_7 = VAR_2;
 while (VAR_3 < VAR_4)
 {
  if (*VAR_3 == ' ' || *VAR_3 == '\n' || *VAR_3 == '\t' || *VAR_3 == '\r')
  {
   VAR_3++;
   continue;
  }
  VAR_5 = FUNC_0(*VAR_3++) << 4;
  if (VAR_3 >= VAR_4)
   return -1;

  VAR_6 = FUNC_0(*VAR_3++);
  *VAR_7++ = VAR_5 | VAR_6;
 }

 return VAR_7 - VAR_2;
}
