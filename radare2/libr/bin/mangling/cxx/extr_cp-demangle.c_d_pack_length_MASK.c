
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct demangle_component const*) ;
 struct demangle_component* FUNC_1 (struct demangle_component const*) ;

__attribute__((used)) static int
FUNC_2 (const struct demangle_component *VAR_1)
{
  int VAR_2 = 0;
  while (VAR_1 && VAR_1->type == VAR_0
  && FUNC_0 (VAR_1) != ((void*)0))
    {
      ++VAR_2;
      VAR_1 = FUNC_1 (VAR_1);
    }
  return VAR_2;
}
