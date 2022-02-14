
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {TYPE_1__** buffers; } ;
struct TYPE_2__ {int pages_touched; int pages_read; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *) ;

size_t FUNC_2(struct ring_buffer *VAR_0, int VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;

 VAR_2 = FUNC_1(&VAR_0->buffers[VAR_1]->pages_read);
 VAR_3 = FUNC_1(&VAR_0->buffers[VAR_1]->pages_touched);

 if (VAR_3 < VAR_2) {
  FUNC_0(VAR_2 > VAR_3 + 1);
  return 0;
 }

 return VAR_3 - VAR_2;
}
