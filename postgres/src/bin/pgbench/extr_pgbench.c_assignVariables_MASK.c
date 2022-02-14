
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CState ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,int*) ;
 char* FUNC_3 (char**,char*,int,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static char *
FUNC_5(CState *VAR_0, char *VAR_1)
{
 char *VAR_2,
      *VAR_3,
      *VAR_4;

 VAR_2 = VAR_1;
 while ((VAR_2 = FUNC_4(VAR_2, ':')) != ((void*)0))
 {
  int VAR_5;

  VAR_3 = FUNC_2(VAR_2, &VAR_5);
  if (VAR_3 == ((void*)0))
  {
   while (*VAR_2 == ':')
   {
    VAR_2++;
   }
   continue;
  }

  VAR_4 = FUNC_1(VAR_0, VAR_3);
  FUNC_0(VAR_3);
  if (VAR_4 == ((void*)0))
  {
   VAR_2++;
   continue;
  }

  VAR_2 = FUNC_3(&VAR_1, VAR_2, VAR_5, VAR_4);
 }

 return VAR_1;
}
