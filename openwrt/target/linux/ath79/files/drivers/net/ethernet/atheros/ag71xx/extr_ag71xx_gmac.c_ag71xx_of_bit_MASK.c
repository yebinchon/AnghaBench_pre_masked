
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char const*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct device_node *VAR_0, const char *VAR_1,
     u32 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_0(VAR_0, VAR_1, &VAR_4))
  return;

 if (VAR_4)
  *VAR_2 |= VAR_3;
 else
  *VAR_2 &= ~VAR_3;
}
