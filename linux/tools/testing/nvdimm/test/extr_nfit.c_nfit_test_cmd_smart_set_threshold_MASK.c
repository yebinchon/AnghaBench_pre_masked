
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_intel_smart_threshold {int data; } ;
struct nd_intel_smart_set_threshold {scalar_t__ status; } ;
struct nd_intel_smart {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nd_intel_smart_set_threshold*,unsigned int) ;
 int FUNC_1 (struct device*,struct device*,struct nd_intel_smart*,struct nd_intel_smart_threshold*) ;

__attribute__((used)) static int FUNC_2(
  struct nd_intel_smart_set_threshold *VAR_1,
  unsigned int VAR_2,
  struct nd_intel_smart_threshold *VAR_3,
  struct nd_intel_smart *VAR_4,
  struct device *VAR_5, struct device *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = sizeof(*VAR_1) - 4;
 if (VAR_2 < VAR_7)
  return -VAR_0;
 FUNC_0(VAR_3->data, VAR_1, VAR_7);
 VAR_1->status = 0;
 FUNC_1(VAR_5, VAR_6, VAR_4, VAR_3);

 return 0;
}
