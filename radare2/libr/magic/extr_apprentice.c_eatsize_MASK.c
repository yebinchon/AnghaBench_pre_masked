
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;

__attribute__((used)) static void FUNC_1(const char **VAR_0) {
 const char *VAR_1 = *VAR_0;

 if (FUNC_0 (*VAR_1) == 'u') {
  VAR_1++;
 }

 switch (FUNC_0 (*VAR_1)) {
 case 'l':
 case 's':
 case 'h':
 case 'b':
 case 'c':
  VAR_1++;

 default:
  break;
 }

 *VAR_0 = VAR_1;
}
