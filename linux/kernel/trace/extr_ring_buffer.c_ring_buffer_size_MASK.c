
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {TYPE_1__** buffers; int cpumask; } ;
struct TYPE_2__ {unsigned long nr_pages; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,int ) ;

unsigned long FUNC_1(struct ring_buffer *VAR_1, int VAR_2)
{






 if (!FUNC_0(VAR_2, VAR_1->cpumask))
  return 0;

 return VAR_0 * VAR_1->buffers[VAR_2]->nr_pages;
}
