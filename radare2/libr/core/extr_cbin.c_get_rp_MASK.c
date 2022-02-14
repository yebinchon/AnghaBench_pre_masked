
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0) {
 char *VAR_1 = ((void*)0);
 switch (VAR_0[0]) {
 case 'v':
  VAR_1 = FUNC_0 ("void");
  break;
 case 'c':
  VAR_1 = FUNC_0 ("char");
  break;
 case 'i':
  VAR_1 = FUNC_0 ("int");
  break;
 case 's':
  VAR_1 = FUNC_0 ("short");
  break;
 case 'l':
  VAR_1 = FUNC_0 ("long");
  break;
 case 'q':
  VAR_1 = FUNC_0 ("long long");
  break;
 case 'C':
  VAR_1 = FUNC_0 ("unsigned char");
  break;
 case 'I':
  VAR_1 = FUNC_0 ("unsigned int");
  break;
 case 'S':
  VAR_1 = FUNC_0 ("unsigned short");
  break;
 case 'L':
  VAR_1 = FUNC_0 ("unsigned long");
  break;
 case 'Q':
  VAR_1 = FUNC_0 ("unsigned long long");
  break;
 case 'f':
  VAR_1 = FUNC_0 ("float");
  break;
 case 'd':
  VAR_1 = FUNC_0 ("double");
  break;
 case 'D':
  VAR_1 = FUNC_0 ("long double");
  break;
 case 'B':
  VAR_1 = FUNC_0 ("bool");
  break;
 case '#':
  VAR_1 = FUNC_0 ("CLASS");
  break;
 default:
  VAR_1 = FUNC_0 ("unknown");
  break;
 }
 return VAR_1;
}
