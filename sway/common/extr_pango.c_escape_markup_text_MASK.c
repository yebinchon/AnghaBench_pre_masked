
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

size_t FUNC_1(const char *VAR_0, char *VAR_1) {
 size_t VAR_2 = 0;
 if (VAR_1) {
  VAR_1[0] = '\0';
 }

 while (VAR_0[0]) {
  switch (VAR_0[0]) {
  case '&':
   VAR_2 += 5;
   FUNC_0(VAR_1, "&amp;");
   break;
  case '<':
   VAR_2 += 4;
   FUNC_0(VAR_1, "&lt;");
   break;
  case '>':
   VAR_2 += 4;
   FUNC_0(VAR_1, "&gt;");
   break;
  case '\'':
   VAR_2 += 6;
   FUNC_0(VAR_1, "&apos;");
   break;
  case '"':
   VAR_2 += 6;
   FUNC_0(VAR_1, "&quot;");
   break;
  default:
   if (VAR_1) {
    VAR_1[VAR_2] = *VAR_0;
    VAR_1[VAR_2 + 1] = '\0';
   }
   VAR_2 += 1;
  }
  VAR_0++;
 }
 return VAR_2;
}
