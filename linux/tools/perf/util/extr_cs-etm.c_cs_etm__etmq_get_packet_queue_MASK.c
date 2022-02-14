
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cs_etm_packet_queue {int dummy; } ;
struct cs_etm_traceid_queue {struct cs_etm_packet_queue packet_queue; } ;
struct cs_etm_queue {int dummy; } ;


 struct cs_etm_traceid_queue* FUNC_0 (struct cs_etm_queue*,int ) ;

struct cs_etm_packet_queue
*FUNC_1(struct cs_etm_queue *VAR_0, u8 VAR_1)
{
 struct cs_etm_traceid_queue *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return &VAR_2->packet_queue;

 return ((void*)0);
}
