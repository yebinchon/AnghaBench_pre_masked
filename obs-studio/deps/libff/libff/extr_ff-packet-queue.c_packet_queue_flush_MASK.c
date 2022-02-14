
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ff_packet_queue {int mutex; scalar_t__ total_size; scalar_t__ count; struct ff_packet_list* first_packet; int last_packet; } ;
struct TYPE_2__ {int * clock; int base; } ;
struct ff_packet_list {TYPE_1__ packet; struct ff_packet_list* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ff_packet_list**) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ff_packet_queue *VAR_0)
{
 struct ff_packet_list *VAR_1;

 FUNC_3(&VAR_0->mutex);

 for (VAR_1 = VAR_0->first_packet; VAR_1 != ((void*)0);
      VAR_1 = VAR_0->first_packet) {
  VAR_0->first_packet = VAR_1->next;
  FUNC_0(&VAR_1->packet.base);
  if (VAR_1->packet.clock != ((void*)0))
   FUNC_2(&VAR_1->packet.clock);
  FUNC_1(&VAR_1);
 }

 VAR_0->last_packet = VAR_0->first_packet = ((void*)0);
 VAR_0->count = 0;
 VAR_0->total_size = 0;

 FUNC_4(&VAR_0->mutex);
}
