
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,int) ;
 struct demangle_component* FUNC_1 (struct d_info*,int) ;
 int FUNC_2 (struct d_info*,char) ;
 char FUNC_3 (struct d_info*) ;
 struct demangle_component* FUNC_4 (struct d_info*,struct demangle_component*) ;

__attribute__((used)) static struct demangle_component *
FUNC_5 (struct d_info *VAR_0)
{
  struct demangle_component *VAR_1;

  if (! FUNC_2 (VAR_0, 'F'))
    return ((void*)0);
  if (FUNC_3 (VAR_0) == 'Y')
    {


      FUNC_0 (VAR_0, 1);
    }
  VAR_1 = FUNC_1 (VAR_0, 1);
  VAR_1 = FUNC_4 (VAR_0, VAR_1);

  if (! FUNC_2 (VAR_0, 'E'))
    return ((void*)0);
  return VAR_1;
}
