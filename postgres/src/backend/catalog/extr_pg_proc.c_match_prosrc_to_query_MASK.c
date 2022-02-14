
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int,int*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, const char *VAR_1,
       int VAR_2)
{






 int VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4 - VAR_3; VAR_6++)
 {
  if (VAR_1[VAR_6] == '$' &&
   FUNC_3(VAR_0, &VAR_1[VAR_6 + 1], VAR_3) == 0 &&
   VAR_1[VAR_6 + 1 + VAR_3] == '$')
  {





   if (VAR_5)
    return 0;
   VAR_5 = FUNC_1(VAR_1, VAR_6 + 1)
    + VAR_2;
  }
  else if (VAR_1[VAR_6] == '\'' &&
     FUNC_0(VAR_0, &VAR_1[VAR_6 + 1],
           VAR_2, &VAR_7))
  {




   if (VAR_5)
    return 0;
   VAR_5 = FUNC_1(VAR_1, VAR_6 + 1)
    + VAR_7;
  }
 }

 return VAR_5;
}
