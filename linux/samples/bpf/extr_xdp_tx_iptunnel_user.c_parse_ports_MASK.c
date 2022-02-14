
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, int *VAR_4, int *VAR_5)
{
 char *VAR_6;
 long VAR_7;
 long VAR_8;

 VAR_7 = FUNC_1(VAR_1, &VAR_6, 10);
 if (VAR_7 < 1 || VAR_7 > 65535) {
  FUNC_0(VAR_2, "Invalid port(s):%s\n", VAR_1);
  return 1;
 }

 if (*VAR_6 == '-') {
  VAR_6++;
  VAR_8 = FUNC_1(VAR_6, ((void*)0), 10);
  if (VAR_8 < 1 || VAR_8 > 65535) {
   FUNC_0(VAR_2, "Invalid port(s):%s\n", VAR_1);
   return 1;
  }
 } else {
  VAR_8 = VAR_7;
 }

 if (VAR_7 > VAR_8) {
  FUNC_0(VAR_2, "Invalid port(s):%s\n", VAR_1);
  return 1;
 }

 if (VAR_8 - VAR_7 + 1 > VAR_0) {
  FUNC_0(VAR_2, "Port range (%s) is larger than %ld\n",
   VAR_3, VAR_0);
  return 1;
 }
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;

 return 0;
}
