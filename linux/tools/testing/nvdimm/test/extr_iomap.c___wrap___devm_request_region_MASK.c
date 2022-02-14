
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 struct resource* FUNC_0 (struct device*,struct resource*,int ,int ,char const*,int ) ;

struct resource *FUNC_1(struct device *VAR_0,
  struct resource *VAR_1, resource_size_t VAR_2,
  resource_size_t VAR_3, const char *VAR_4)
{
 if (!VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
