
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ff_packet_queue {int mutex; scalar_t__ abort; int cond; int total_size; int count; int * last_packet; struct ff_packet_list* first_packet; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct ff_packet {TYPE_1__ base; } ;
struct ff_packet_list {struct ff_packet packet; struct ff_packet_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ff_packet_list*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ff_packet_queue *VAR_3, struct ff_packet *VAR_4,
                     bool VAR_5)
{
 struct ff_packet_list *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->mutex);

 while (1) {
  VAR_6 = VAR_3->first_packet;

  if (VAR_6 != ((void*)0)) {
   VAR_3->first_packet = VAR_6->next;

   if (VAR_3->first_packet == ((void*)0))
    VAR_3->last_packet = ((void*)0);

   VAR_3->count--;
   VAR_3->total_size -= VAR_6->packet.base.size;
   *VAR_4 = VAR_6->packet;
   FUNC_0(VAR_6);
   VAR_7 = VAR_2;
   break;

  } else if (!VAR_5) {
   VAR_7 = VAR_0;
   break;

  } else {
   FUNC_1(&VAR_3->cond, &VAR_3->mutex);
   if (VAR_3->abort) {
    VAR_7 = VAR_1;
    break;
   }
  }
 }

 FUNC_3(&VAR_3->mutex);

 return VAR_7;
}
