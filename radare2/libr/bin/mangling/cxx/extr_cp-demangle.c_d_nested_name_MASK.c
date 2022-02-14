
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;
typedef struct demangle_component* d_left ;


 int FUNC_0 (struct d_info*,char) ;
 struct demangle_component** FUNC_1 (struct d_info*,struct demangle_component**,int) ;
 struct demangle_component* FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*,int *) ;

__attribute__((used)) static struct demangle_component *
FUNC_4 (struct d_info *VAR_0)
{
  struct demangle_component *VAR_1;
  struct demangle_component **VAR_2;
  struct demangle_component *VAR_3;

  if (! FUNC_0 (VAR_0, 'N'))
    return ((void*)0);

  VAR_2 = FUNC_1 (VAR_0, &VAR_1, 1);
  if (VAR_2 == ((void*)0))
    return ((void*)0);



  VAR_3 = FUNC_3 (VAR_0, ((void*)0));

  *VAR_2 = FUNC_2 (VAR_0);
  if (*VAR_2 == ((void*)0))
    return ((void*)0);

  if (VAR_3)
    {
      d_left (VAR_4) = VAR_1;
      VAR_1 = VAR_4;
    }

  if (! FUNC_0 (VAR_0, 'E'))
    return ((void*)0);

  return VAR_1;
}
