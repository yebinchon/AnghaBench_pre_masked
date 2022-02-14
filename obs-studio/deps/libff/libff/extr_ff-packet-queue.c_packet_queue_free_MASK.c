
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct ff_packet_queue {TYPE_1__ flush_packet; int cond; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ff_packet_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ff_packet_queue *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_3(&VAR_0->mutex);
 FUNC_2(&VAR_0->cond);

 FUNC_0(&VAR_0->flush_packet.base);
}
