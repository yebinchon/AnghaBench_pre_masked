
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_context_data {void* data; } ;



void *FUNC_0(void *VAR_0)
{
 struct obs_context_data *VAR_1 = VAR_0;
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->data;
}
