
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int List ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char**,char*,int,int*,int*,int,char**) ;
 int * FUNC_3 (int *,char const*,char*,int,char**) ;

__attribute__((used)) static List *
FUNC_4(const char *VAR_2, char **VAR_3,
      int VAR_4, char **VAR_5)
{
 char VAR_6[VAR_0];
 bool VAR_7;
 bool VAR_8;
 List *VAR_9 = VAR_1;

 do
 {
  if (!FUNC_2(VAR_3, VAR_6, sizeof(VAR_6),
      &VAR_8, &VAR_7,
      VAR_4, VAR_5))
   break;


  if (!VAR_8 && VAR_6[0] == '@' && VAR_6[1] != '\0')
   VAR_9 = FUNC_3(VAR_9, VAR_2, VAR_6 + 1,
            VAR_4, VAR_5);
  else
   VAR_9 = FUNC_0(VAR_9, FUNC_1(VAR_6, VAR_8));
 } while (VAR_7 && (*VAR_5 == ((void*)0)));

 return VAR_9;
}
