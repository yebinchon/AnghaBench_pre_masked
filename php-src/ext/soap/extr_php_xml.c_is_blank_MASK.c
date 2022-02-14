
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;



__attribute__((used)) static int FUNC_0(const xmlChar* VAR_0)
{
 while (*VAR_0 != '\0') {
  if (*VAR_0 != ' ' && *VAR_0 != 0x9 && *VAR_0 != 0xa && *VAR_0 != 0xd) {
   return 0;
  }
  VAR_0++;
 }
 return 1;
}
