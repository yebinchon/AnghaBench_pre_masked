
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int expansion; } ;
typedef enum demangle_component_type { ____Placeholder_demangle_component_type } demangle_component_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct d_info*,int) ;
 struct demangle_component* FUNC_1 (struct d_info*,int,struct demangle_component*,int *) ;
 char FUNC_2 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_3 (struct d_info *VAR_2, struct demangle_component *VAR_3)
{
  struct demangle_component *VAR_4 = VAR_3;
  char VAR_5;

  VAR_5 = FUNC_2 (VAR_2);
  if (VAR_5 == 'R' || VAR_5 == 'O')
    {
      enum demangle_component_type VAR_6;
      if (VAR_5 == 'R')
 {
   VAR_6 = VAR_0;
   VAR_2->expansion += sizeof "&";
 }
      else
 {
   VAR_6 = VAR_1;
   VAR_2->expansion += sizeof "&&";
 }
      FUNC_0 (VAR_2, 1);

      VAR_4 = FUNC_1 (VAR_2, VAR_6, VAR_4, ((void*)0));
    }

  return VAR_4;
}
