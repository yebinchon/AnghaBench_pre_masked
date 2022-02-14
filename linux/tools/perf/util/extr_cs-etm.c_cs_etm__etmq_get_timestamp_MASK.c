
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct cs_etm_queue {scalar_t__ pending_timestamp; } ;
struct cs_etm_packet_queue {int timestamp; } ;


 struct cs_etm_packet_queue* FUNC_0 (struct cs_etm_queue*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct cs_etm_queue *VAR_0,
          u8 *VAR_1)
{
 struct cs_etm_packet_queue *VAR_2;

 if (!VAR_0->pending_timestamp)
  return 0;

 if (VAR_1)
  *VAR_1 = VAR_0->pending_timestamp;

 VAR_2 = FUNC_0(VAR_0,
           VAR_0->pending_timestamp);
 if (!VAR_2)
  return 0;


 VAR_0->pending_timestamp = 0;


 return VAR_2->timestamp;
}
