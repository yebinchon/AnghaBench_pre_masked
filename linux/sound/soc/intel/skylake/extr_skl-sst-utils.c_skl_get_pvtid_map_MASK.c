
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_module {int max_instance; int* instance_id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct uuid_module *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_instance; VAR_3++) {
  if (VAR_1->instance_id[VAR_3] == VAR_2)
   return VAR_3;
 }
 return -VAR_0;
}
