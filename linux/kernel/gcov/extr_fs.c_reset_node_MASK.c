
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; scalar_t__* loaded_info; scalar_t__ unloaded_info; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gcov_node *VAR_0)
{
 int VAR_1;

 if (VAR_0->unloaded_info)
  FUNC_0(VAR_0->unloaded_info);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_loaded; VAR_1++)
  FUNC_0(VAR_0->loaded_info[VAR_1]);
}
