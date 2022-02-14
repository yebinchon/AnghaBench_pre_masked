
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jack_data {int jack_mutex; struct jack_data* device; } ;


 int FUNC_0 (struct jack_data*) ;
 int FUNC_1 (struct jack_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct jack_data *VAR_1 = (struct jack_data *)VAR_0;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);

 if (VAR_1->device)
  FUNC_0(VAR_1->device);
 FUNC_2(&VAR_1->jack_mutex);
 FUNC_0(VAR_1);
}
