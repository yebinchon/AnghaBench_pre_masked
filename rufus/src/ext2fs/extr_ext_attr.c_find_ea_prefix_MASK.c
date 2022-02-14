
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ea_name_index {char const* name; int index; } ;


 struct ea_name_index* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(int VAR_1)
{
 struct ea_name_index *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  if (VAR_2->index == VAR_1)
   return VAR_2->name;

 return ((void*)0);
}
