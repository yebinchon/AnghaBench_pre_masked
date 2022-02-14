
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct d_info*,char) ;
 struct demangle_component* FUNC_3 (struct d_info*,struct demangle_component*) ;
 struct demangle_component* FUNC_4 (struct d_info*,int) ;
 char FUNC_5 (struct d_info*) ;
 char FUNC_6 (struct d_info*) ;

struct demangle_component *
FUNC_7 (struct d_info *VAR_1, int VAR_2)
{
  struct demangle_component *VAR_3;

  if (! FUNC_2 (VAR_1, '_')



      && VAR_2)
    return ((void*)0);
  if (! FUNC_2 (VAR_1, 'Z'))
    return ((void*)0);
  VAR_3 = FUNC_4 (VAR_1, VAR_2);



  if (VAR_2 && (VAR_1->options & VAR_0) != 0)
    while (FUNC_5 (VAR_1) == '.'
    && (FUNC_1 (FUNC_6 (VAR_1))
        || FUNC_6 (VAR_1) == '_'
        || FUNC_0 (FUNC_6 (VAR_1))))
      VAR_3 = FUNC_3 (VAR_1, VAR_3);

  return VAR_3;
}
