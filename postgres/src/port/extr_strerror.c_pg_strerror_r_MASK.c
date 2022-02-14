
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int,char*,size_t) ;
 int FUNC_3 (char*,size_t,char*,int) ;
 char* FUNC_4 (int,char*,size_t) ;

char *
FUNC_5(int VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0' || *VAR_3 == '?')
  VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == ((void*)0))
 {
  FUNC_3(VAR_1, VAR_2, FUNC_0("operating system error %d"), VAR_0);
  VAR_3 = VAR_1;
 }

 return VAR_3;
}
