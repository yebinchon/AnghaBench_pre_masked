
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,int) ;
 struct demangle_component* FUNC_2 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;
 char FUNC_4 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_5 (struct d_info *VAR_1, int VAR_2)
{
  struct demangle_component *VAR_3;
  struct demangle_component *VAR_4;
  char VAR_5;



  VAR_5 = FUNC_4 (VAR_1);
  if (VAR_5 == 'J')
    {
      FUNC_1 (VAR_1, 1);
      VAR_2 = 1;
    }

  if (VAR_2)
    {
      VAR_3 = FUNC_0 (VAR_1);
      if (VAR_3 == ((void*)0))
 return ((void*)0);
    }
  else
    VAR_3 = ((void*)0);

  VAR_4 = FUNC_3 (VAR_1);
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  return FUNC_2 (VAR_1, VAR_0,
        VAR_3, VAR_4);
}
