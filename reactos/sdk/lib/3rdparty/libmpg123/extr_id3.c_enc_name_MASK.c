
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(unsigned char VAR_0)
{
 switch(VAR_0)
 {
  case 0: return "Latin 1";
  case 1: return "UTF-16 BOM";
  case 2: return "UTF-16 BE";
  case 3: return "UTF-8";
  default: return "unknown!";
 }
}
