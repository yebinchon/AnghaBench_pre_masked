
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {TYPE_1__** buffers; } ;
struct TYPE_2__ {size_t nr_pages; } ;



size_t FUNC_0(struct ring_buffer *VAR_0, int VAR_1)
{
 return VAR_0->buffers[VAR_1]->nr_pages;
}
