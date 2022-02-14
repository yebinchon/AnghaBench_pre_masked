
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_etm_packet_queue {int dummy; } ;
struct cs_etm_traceid_queue {TYPE_1__* packet; struct cs_etm_packet_queue packet_queue; } ;
struct cs_etm_queue {int dummy; } ;
struct TYPE_2__ {int sample_type; } ;







 int VAR_0 ;
 int FUNC_0 (struct cs_etm_traceid_queue*) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_2 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_3 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_4 (struct cs_etm_packet_queue*,TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct cs_etm_queue *VAR_1,
      struct cs_etm_traceid_queue *VAR_2)
{
 int VAR_3;
 struct cs_etm_packet_queue *VAR_4;

 VAR_4 = &VAR_2->packet_queue;


 while (1) {
  VAR_3 = FUNC_4(VAR_4,
       VAR_2->packet);
  if (VAR_3 <= 0)




   break;
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3 < 0)
   break;

  switch (VAR_2->packet->sample_type) {
  case 128:





   FUNC_2(VAR_1, VAR_2);
   break;
  case 130:
  case 129:





   FUNC_0(VAR_2);
   break;
  case 132:




   FUNC_1(VAR_1, VAR_2);
   break;
  case 131:




   FUNC_5("CS ETM Trace: empty packet\n");
   return -VAR_0;
  default:
   break;
  }
 }

 return VAR_3;
}
