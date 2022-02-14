
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int nr_pages_to_update; int nr_pages; } ;


 int FUNC_0 (struct ring_buffer_per_cpu*) ;
 int FUNC_1 (struct ring_buffer_per_cpu*,int ) ;

__attribute__((used)) static void FUNC_2(struct ring_buffer_per_cpu *VAR_0)
{
 int VAR_1;

 if (VAR_0->nr_pages_to_update > 0)
  VAR_1 = FUNC_0(VAR_0);
 else
  VAR_1 = FUNC_1(VAR_0,
     -VAR_0->nr_pages_to_update);

 if (VAR_1)
  VAR_0->nr_pages += VAR_0->nr_pages_to_update;
}
