
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct demangle_component* FUNC_0 (struct demangle_component*) ;
 struct demangle_component* FUNC_1 (struct demangle_component*) ;

__attribute__((used)) static struct demangle_component *
FUNC_2 (struct demangle_component *VAR_1, int VAR_2)
{
  struct demangle_component *VAR_3;

  if (VAR_2 < 0)

    return VAR_1;

  for (VAR_3 = VAR_1;
       VAR_3 != ((void*)0);
       VAR_3 = FUNC_1 (VAR_3))
    {
      if (VAR_3->type != VAR_0)
 return ((void*)0);
      if (VAR_2 <= 0)
 break;
      --VAR_2;
    }
  if (VAR_2 != 0 || VAR_3 == ((void*)0))
    return ((void*)0);

  return FUNC_0 (VAR_3);
}
