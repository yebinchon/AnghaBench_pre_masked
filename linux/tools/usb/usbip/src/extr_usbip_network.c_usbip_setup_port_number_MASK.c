
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,unsigned long,char*) ;
 unsigned long FUNC_3 (char*,char**,int) ;
 unsigned long VAR_1 ;
 char* VAR_2 ;

void FUNC_4(char *VAR_3)
{
 FUNC_0("parsing port arg '%s'", VAR_3);
 char *VAR_4;
 unsigned long int VAR_5 = FUNC_3(VAR_3, &VAR_4, 10);

 if (VAR_4 == VAR_3) {
  FUNC_1("port: could not parse '%s' as a decimal integer", VAR_3);
  return;
 }

 if (*VAR_4 != '\0') {
  FUNC_1("port: garbage at end of '%s'", VAR_3);
  return;
 }

 if (VAR_5 > VAR_0) {
  FUNC_1("port: %s too high (max=%d)",
      VAR_3, VAR_0);
  return;
 }

 VAR_1 = VAR_5;
 VAR_2 = VAR_3;
 FUNC_2("using port %d (\"%s\")", VAR_1, VAR_2);
}
