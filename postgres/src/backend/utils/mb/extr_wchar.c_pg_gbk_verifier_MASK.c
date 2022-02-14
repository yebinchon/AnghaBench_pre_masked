
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, int VAR_1)
{
 int VAR_2,
    VAR_3;

 VAR_2 = VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 < VAR_2)
  return -1;

 while (--VAR_2 > 0)
 {
  if (*++VAR_0 == '\0')
   return -1;
 }

 return VAR_3;
}
