
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *FUNC_1(const char VAR_0) {
 char *VAR_1 = ((void*)0);
 switch (VAR_0) {
 case 'b':
 case 'C':
  VAR_1 = FUNC_0 ("uint8_t");
  break;
 case 'c':
  VAR_1 = FUNC_0 ("int8_t");
  break;
 case 'd':
 case 'i':
 case 'o':
 case 'x':
  VAR_1 = FUNC_0 ("int32_t");
  break;
 case 'E':
  VAR_1 = FUNC_0 ("enum");
  break;
 case 'f':
  VAR_1 = FUNC_0 ("float");
  break;
 case 'F':
  VAR_1 = FUNC_0 ("double");
  break;
 case 'q':
  VAR_1 = FUNC_0 ("uint64_t");
  break;
 case 'u':
  VAR_1 = FUNC_0 ("uleb128_t");
  break;
 case 'w':
  VAR_1 = FUNC_0 ("uint16_t");
  break;
 case 'X':
  VAR_1 = FUNC_0 ("uint8_t[]");
  break;
 case 'D':
 case 's':
 case 'S':
 case 't':
 case 'z':
 case 'Z':
  VAR_1 = FUNC_0 ("char*");
 }
 return VAR_1;
}
