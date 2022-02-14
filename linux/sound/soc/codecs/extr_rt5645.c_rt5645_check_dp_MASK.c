
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,char*) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_0)
{
 if (FUNC_0(VAR_0, "realtek,in2-differential") ||
     FUNC_0(VAR_0, "realtek,dmic1-data-pin") ||
     FUNC_0(VAR_0, "realtek,dmic2-data-pin") ||
     FUNC_0(VAR_0, "realtek,jd-mode"))
  return 1;

 return 0;
}
