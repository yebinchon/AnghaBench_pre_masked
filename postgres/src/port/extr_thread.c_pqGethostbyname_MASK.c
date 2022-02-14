
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 struct hostent* FUNC_0 (char const*) ;
 struct hostent* FUNC_1 (char const*,struct hostent*,char*,size_t,int*) ;
 int VAR_0 ;

int
FUNC_2(const char *VAR_1,
    struct hostent *VAR_2,
    char *VAR_3, size_t VAR_4,
    struct hostent **VAR_5,
    int *VAR_6)
{
 *VAR_5 = FUNC_0(VAR_1);

 if (*VAR_5 != ((void*)0))
  *VAR_6 = VAR_0;

 if (*VAR_5 != ((void*)0))
  return 0;
 else
  return -1;

}
