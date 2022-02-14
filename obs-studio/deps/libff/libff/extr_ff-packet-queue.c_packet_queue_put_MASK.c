
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ff_packet_queue {int mutex; int cond; int total_size; int count; struct ff_packet_list* last_packet; struct ff_packet_list* first_packet; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct ff_packet {TYPE_1__ base; } ;
struct ff_packet_list {struct ff_packet packet; struct ff_packet_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ff_packet_list* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ff_packet_queue *VAR_2, struct ff_packet *VAR_3)
{
 struct ff_packet_list *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct ff_packet_list));

 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_4->packet = *VAR_3;
 VAR_4->next = ((void*)0);

 FUNC_2(&VAR_2->mutex);

 if (VAR_2->last_packet == ((void*)0))
  VAR_2->first_packet = VAR_4;
 else
  VAR_2->last_packet->next = VAR_4;

 VAR_2->last_packet = VAR_4;

 VAR_2->count++;
 VAR_2->total_size += VAR_4->packet.base.size;

 FUNC_1(&VAR_2->cond);
 FUNC_3(&VAR_2->mutex);

 return VAR_1;
}
