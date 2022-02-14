
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (char*,size_t,char*,int,char,void*) ;

int FUNC_2(char *VAR_0, size_t VAR_1, const unsigned long *VAR_2,
   unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7 = 0;

 if (FUNC_0(!VAR_2))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_1; VAR_6++) {
  VAR_5 = FUNC_1(VAR_0, VAR_1, "%*c%pS\n", 1 + VAR_4, ' ',
         (void *)VAR_2[VAR_6]);

  VAR_7 += VAR_5;
  if (VAR_5 >= VAR_1) {
   VAR_0 += VAR_1;
   VAR_1 = 0;
  } else {
   VAR_0 += VAR_5;
   VAR_1 -= VAR_5;
  }
 }

 return VAR_7;
}
