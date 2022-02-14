
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_buffer_node {int dummy; } ;
struct percpu_buffer {TYPE_1__* c; } ;
struct TYPE_2__ {int * array; int offset; } ;


 struct percpu_buffer_node* FUNC_0 (int ) ;
 int FUNC_1 (intptr_t*,intptr_t,intptr_t*,intptr_t,intptr_t,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

struct percpu_buffer_node *FUNC_4(struct percpu_buffer *VAR_0,
            int *VAR_1)
{
 struct percpu_buffer_node *VAR_2;
 int VAR_3;

 for (;;) {
  intptr_t *VAR_4, VAR_5;
  intptr_t VAR_6;
  int VAR_7;

  VAR_3 = FUNC_2();

  VAR_6 = FUNC_0(VAR_0->c[VAR_3].offset);
  if (VAR_6 == 0) {
   VAR_2 = ((void*)0);
   break;
  }
  VAR_2 = FUNC_0(VAR_0->c[VAR_3].array[VAR_6 - 1]);
  VAR_5 = VAR_6 - 1;
  VAR_4 = (intptr_t *)&VAR_0->c[VAR_3].offset;
  VAR_7 = FUNC_1(VAR_4, VAR_6,
   (intptr_t *)&VAR_0->c[VAR_3].array[VAR_6 - 1],
   (intptr_t)VAR_2, VAR_5, VAR_3);
  if (FUNC_3(!VAR_7))
   break;

 }
 if (VAR_1)
  *VAR_1 = VAR_3;
 return VAR_2;
}
