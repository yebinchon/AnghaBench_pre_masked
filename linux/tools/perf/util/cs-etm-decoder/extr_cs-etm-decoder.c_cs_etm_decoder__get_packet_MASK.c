
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_packet_queue {scalar_t__ packet_count; int head; struct cs_etm_packet* packet_buffer; } ;
struct cs_etm_packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct cs_etm_packet_queue *VAR_2,
          struct cs_etm_packet *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_1;


 if (VAR_2->packet_count == 0)
  return 0;
 VAR_2->head = (VAR_2->head + 1) &
        (VAR_0 - 1);

 *VAR_3 = VAR_2->packet_buffer[VAR_2->head];

 VAR_2->packet_count--;

 return 1;
}
