
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_5(int VAR_0)
{
 char *VAR_1;
 int VAR_2,
    VAR_3;
 int VAR_4;
 VAR_3 = 64;
 VAR_1 = (char *) FUNC_2(VAR_3);
 VAR_2 = 0;
 for (;;)
 {
  FUNC_0(VAR_2 < VAR_3);
  VAR_4 = FUNC_4(VAR_0, VAR_1 + VAR_2, 1);
  if (VAR_4 <= 0)
   break;

  FUNC_0(VAR_4 == 1);

  if (VAR_1[VAR_2] == '\0')
   return VAR_1;

  VAR_2++;
  if (VAR_2 == VAR_3)
  {
   VAR_3 += 16;
   VAR_1 = (char *) FUNC_3(VAR_1, VAR_3);
  }
 }


 FUNC_1(VAR_1);
 return ((void*)0);
}
