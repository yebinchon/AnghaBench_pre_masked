
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_3(FILE *VAR_1)
{
 char *VAR_2;
 size_t VAR_3 = VAR_0;
 size_t VAR_4 = 0;

 VAR_2 = (char *) FUNC_1(VAR_3);

 for (;;)
 {
  size_t VAR_5;

  VAR_5 = FUNC_0(VAR_2 + VAR_4, 1, VAR_0, VAR_1);
  VAR_4 += VAR_5;

  if (VAR_5 < VAR_0)
   break;

  VAR_3 += VAR_0;
  VAR_2 = (char *) FUNC_2(VAR_2, VAR_3);
 }

 VAR_2[VAR_4] = '\0';

 return VAR_2;
}
