
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_intel_smart_threshold {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nd_intel_smart_threshold*,struct nd_intel_smart_threshold*,int) ;

__attribute__((used)) static int FUNC_1(
  struct nd_intel_smart_threshold *VAR_1,
  unsigned int VAR_2,
  struct nd_intel_smart_threshold *VAR_3)
{
 if (VAR_2 < sizeof(*VAR_3))
  return -VAR_0;
 FUNC_0(VAR_1, VAR_3, sizeof(*VAR_3));
 return 0;
}
