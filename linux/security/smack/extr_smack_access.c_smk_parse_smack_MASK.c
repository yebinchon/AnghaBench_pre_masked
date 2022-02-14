
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

char *FUNC_4(const char *VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (VAR_5 <= 0)
  VAR_5 = FUNC_2(VAR_4) + 1;






 if (VAR_4[0] == '-')
  return FUNC_0(-VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  if (VAR_4[VAR_7] > '~' || VAR_4[VAR_7] <= ' ' || VAR_4[VAR_7] == '/' ||
      VAR_4[VAR_7] == '"' || VAR_4[VAR_7] == '\\' || VAR_4[VAR_7] == '\'')
   break;

 if (VAR_7 == 0 || VAR_7 >= VAR_3)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_1(VAR_7 + 1, VAR_2);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_3(VAR_6, VAR_4, VAR_7);

 return VAR_6;
}
