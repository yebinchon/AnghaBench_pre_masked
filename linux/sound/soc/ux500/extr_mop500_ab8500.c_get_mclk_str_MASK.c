
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mclk { ____Placeholder_mclk } mclk ;





__attribute__((used)) static inline const char *FUNC_0(enum mclk VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "SYSCLK";
 case 128:
  return "ULPCLK";
 default:
  return "Unknown";
 }
}
