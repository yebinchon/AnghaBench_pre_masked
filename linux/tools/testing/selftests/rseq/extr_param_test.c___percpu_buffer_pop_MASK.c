
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_buffer_node {int dummy; } ;
struct percpu_buffer {TYPE_1__* c; } ;
struct TYPE_2__ {intptr_t offset; struct percpu_buffer_node** array; } ;



struct percpu_buffer_node *FUNC_0(struct percpu_buffer *VAR_0,
            int VAR_1)
{
 struct percpu_buffer_node *VAR_2;
 intptr_t VAR_3;

 VAR_3 = VAR_0->c[VAR_1].offset;
 if (VAR_3 == 0)
  return ((void*)0);
 VAR_2 = VAR_0->c[VAR_1].array[VAR_3 - 1];
 VAR_0->c[VAR_1].offset = VAR_3 - 1;
 return VAR_2;
}
