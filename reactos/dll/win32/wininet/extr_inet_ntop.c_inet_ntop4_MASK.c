
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ socklen_t ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_3(const u_char *VAR_1, char *VAR_2, socklen_t VAR_3)
{
 static const char VAR_4[] = "%u.%u.%u.%u";
 char VAR_5[sizeof "255.255.255.255"];

 if (FUNC_0((VAR_5, VAR_4, VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3])) > VAR_3) {
  FUNC_1(VAR_0);
  return (((void*)0));
 }
 FUNC_2(VAR_2, VAR_5);
 return (VAR_2);
}
