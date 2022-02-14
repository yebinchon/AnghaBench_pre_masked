
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sco_param {int max_latency; int pkt_type; int retrans_effort; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_setup_sync_conn {void* max_latency; void* pkt_type; int retrans_effort; void* voice_setting; void* rx_bandwidth; void* tx_bandwidth; void* handle; } ;
struct hci_conn {int out; size_t attempt; int setting; int link; int state; struct hci_dev* hdev; } ;
typedef int cp ;
typedef int __u16 ;


 size_t FUNC_0 (struct sco_param*) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct hci_conn*) ;
 int VAR_1 ;

 int VAR_2 ;

 void* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 struct sco_param* VAR_3 ;
 struct sco_param* VAR_4 ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ,int,struct hci_cp_setup_sync_conn*) ;
 int FUNC_6 (int ) ;
 struct sco_param* VAR_5 ;

bool FUNC_7(struct hci_conn *VAR_6, __u16 VAR_7)
{
 struct hci_dev *VAR_8 = VAR_6->hdev;
 struct hci_cp_setup_sync_conn VAR_9;
 const struct sco_param *VAR_10;

 FUNC_1("hcon %p", VAR_6);

 VAR_6->state = VAR_0;
 VAR_6->out = 1;

 VAR_6->attempt++;

 VAR_9.handle = FUNC_3(VAR_7);

 VAR_9.tx_bandwidth = FUNC_4(0x00001f40);
 VAR_9.rx_bandwidth = FUNC_4(0x00001f40);
 VAR_9.voice_setting = FUNC_3(VAR_6->setting);

 switch (VAR_6->setting & VAR_2) {
 case 128:
  if (VAR_6->attempt > FUNC_0(VAR_4))
   return 0;
  VAR_10 = &VAR_4[VAR_6->attempt - 1];
  break;
 case 129:
  if (FUNC_6(VAR_6->link)) {
   if (VAR_6->attempt > FUNC_0(VAR_3))
    return 0;
   VAR_10 = &VAR_3[VAR_6->attempt - 1];
  } else {
   if (VAR_6->attempt > FUNC_0(VAR_5))
    return 0;
   VAR_10 = &VAR_5[VAR_6->attempt - 1];
  }
  break;
 default:
  return 0;
 }

 VAR_9.retrans_effort = VAR_10->retrans_effort;
 VAR_9.pkt_type = FUNC_2(VAR_10->pkt_type);
 VAR_9.max_latency = FUNC_2(VAR_10->max_latency);

 if (FUNC_5(VAR_8, VAR_1, sizeof(VAR_9), &VAR_9) < 0)
  return 0;

 return 1;
}
