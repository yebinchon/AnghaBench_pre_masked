
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 10:
  return "10baseT";
 case 100:
  return "100baseT";
 case 1000:
  return "1000baseT";
 default:
  break;
 }

 return "unknown";
}
