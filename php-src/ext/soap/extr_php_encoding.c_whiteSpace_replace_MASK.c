
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;



void FUNC_0(xmlChar* VAR_0)
{
 while (*VAR_0 != '\0') {
  if (*VAR_0 == '\x9' || *VAR_0 == '\xA' || *VAR_0 == '\xD') {
   *VAR_0 = ' ';
  }
  VAR_0++;
 }
}
