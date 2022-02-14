
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(unsigned char *VAR_0, int *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_0;
 unsigned char *VAR_4 = VAR_0 + FUNC_2((char *) VAR_0);
 int VAR_5 = 0;

 while (VAR_0 < VAR_4)
 {
  int VAR_6 = FUNC_0((char *) VAR_0, VAR_2);







  if (*VAR_1 < VAR_5 + VAR_6 && VAR_5 != 0)
   break;

  VAR_5 += VAR_6;

  VAR_0 += FUNC_1((char *) VAR_0, VAR_2);
 }

 *VAR_1 = VAR_5;

 return VAR_0 - VAR_3;
}
