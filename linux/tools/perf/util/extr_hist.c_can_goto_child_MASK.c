
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {scalar_t__ unfolded; scalar_t__ leaf; } ;
typedef enum hierarchy_move_dir { ____Placeholder_hierarchy_move_dir } hierarchy_move_dir ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct hist_entry *VAR_2, enum hierarchy_move_dir VAR_3)
{
 if (VAR_2->leaf || VAR_3 == VAR_1)
  return 0;

 if (VAR_2->unfolded || VAR_3 == VAR_0)
  return 1;

 return 0;
}
