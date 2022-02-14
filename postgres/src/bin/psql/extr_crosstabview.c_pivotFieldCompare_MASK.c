
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
typedef TYPE_1__ pivot_field ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const pivot_field *VAR_2 = (const pivot_field *) VAR_0;
 const pivot_field *VAR_3 = (const pivot_field *) VAR_1;


 if (!VAR_3->name)
  return VAR_2->name ? -1 : 0;
 else if (!VAR_2->name)
  return 1;


 return FUNC_0(VAR_2->name, VAR_3->name);
}
