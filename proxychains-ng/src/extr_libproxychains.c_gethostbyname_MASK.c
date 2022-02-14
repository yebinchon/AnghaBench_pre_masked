
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 struct hostent* FUNC_2 (char const*,int *) ;
 scalar_t__ VAR_1 ;
 struct hostent* FUNC_3 (char const*) ;

struct hostent *FUNC_4(const char *VAR_2) {
 FUNC_0();
 FUNC_1("gethostbyname: %s\n", VAR_2);

 if(VAR_1)
  return FUNC_2(VAR_2, &VAR_0);
 else
  return FUNC_3(VAR_2);

 return ((void*)0);
}
