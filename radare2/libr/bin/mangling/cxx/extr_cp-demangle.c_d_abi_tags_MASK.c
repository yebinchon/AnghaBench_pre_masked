
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {struct demangle_component* last_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct d_info*,int) ;
 struct demangle_component* FUNC_1 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 char FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_4 (struct d_info *VAR_1, struct demangle_component *VAR_2)
{
  struct demangle_component *VAR_3;
  char VAR_4;


  VAR_3 = VAR_1->last_name;

  while (VAR_4 = FUNC_2 (VAR_1),
  VAR_4 == 'B')
    {
      struct demangle_component *VAR_5;
      FUNC_0 (VAR_1, 1);
      VAR_5 = FUNC_3 (VAR_1);
      VAR_2 = FUNC_1 (VAR_1, VAR_0, VAR_2, VAR_5);
    }

  VAR_1->last_name = VAR_3;

  return VAR_2;
}
