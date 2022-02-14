
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;



__attribute__((used)) static char *
FUNC_0(Size VAR_0, int VAR_1,
   char *VAR_2, Size VAR_3)
{

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (VAR_1 < 0 ||
  VAR_0 + VAR_1 >= VAR_3)
  return ((void*)0);

 if (VAR_2[VAR_0 + VAR_1] != '\0')
  return ((void*)0);

 return VAR_2 + VAR_0;
}
