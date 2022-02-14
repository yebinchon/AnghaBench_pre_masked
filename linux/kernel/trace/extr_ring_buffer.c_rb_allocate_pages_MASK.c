
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ring_buffer_per_cpu {unsigned long nr_pages; int pages; int cpu; } ;
struct TYPE_5__ {int next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct ring_buffer_per_cpu*) ;

__attribute__((used)) static int FUNC_5(struct ring_buffer_per_cpu *VAR_2,
        unsigned long VAR_3)
{
 FUNC_0(VAR_1);

 FUNC_1(!VAR_3);

 if (FUNC_2(VAR_3, &VAR_1, VAR_2->cpu))
  return -VAR_0;






 VAR_2->pages = VAR_1.next;
 FUNC_3(&VAR_1);

 VAR_2->nr_pages = VAR_3;

 FUNC_4(VAR_2);

 return 0;
}
