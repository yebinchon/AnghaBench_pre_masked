
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*) ;

__attribute__((used)) static char **
FUNC_5(char **VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = 1;
 int VAR_4;
 char **VAR_5;
 int VAR_6,
    VAR_7,
    VAR_8;

 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
  VAR_3++;

 VAR_5 = (char **) FUNC_1(VAR_3 * sizeof(char *));

 VAR_6 = FUNC_3(VAR_1);
 VAR_7 = FUNC_3(VAR_2);
 VAR_8 = VAR_7 - VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  char *VAR_9;
  char *VAR_10;
  int VAR_11;


  if (VAR_0[VAR_4] == ((void*)0) || (VAR_9 = FUNC_4(VAR_0[VAR_4], VAR_1)) == ((void*)0))
  {
   VAR_5[VAR_4] = VAR_0[VAR_4];
   continue;
  }



  VAR_10 = (char *) FUNC_1(FUNC_3(VAR_0[VAR_4]) + VAR_8 + 1);

  VAR_11 = VAR_9 - VAR_0[VAR_4];

  FUNC_0(VAR_10, VAR_0[VAR_4], VAR_11);

  FUNC_0(VAR_10 + VAR_11, VAR_2, VAR_7);

  FUNC_2(VAR_10 + VAR_11 + VAR_7, VAR_0[VAR_4] + VAR_11 + VAR_6);

  VAR_5[VAR_4] = VAR_10;
 }

 return VAR_5;
}
