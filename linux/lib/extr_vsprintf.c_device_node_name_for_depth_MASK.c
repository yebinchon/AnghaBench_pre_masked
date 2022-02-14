
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int full_name; struct device_node* parent; } ;


 char const* FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(const struct device_node *VAR_0, int VAR_1)
{
 for ( ; VAR_0 && VAR_1; VAR_1--)
  VAR_0 = VAR_0->parent;

 return FUNC_0(VAR_0->full_name);
}
