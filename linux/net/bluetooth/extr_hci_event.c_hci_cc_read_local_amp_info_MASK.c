
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_amp_info {int max_flush_to; int be_flush_to; int max_assoc_size; int pal_cap; int amp_type; int max_pdu; int min_latency; int max_bw; int total_bw; int amp_status; scalar_t__ status; } ;
struct hci_dev {void* amp_max_flush_to; void* amp_be_flush_to; void* amp_assoc_size; void* amp_pal_cap; int amp_type; void* amp_max_pdu; void* amp_min_latency; void* amp_max_bw; void* amp_total_bw; int amp_status; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_0,
           struct sk_buff *VAR_1)
{
 struct hci_rp_read_local_amp_info *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_2->status);

 if (VAR_2->status)
  return;

 VAR_0->amp_status = VAR_2->amp_status;
 VAR_0->amp_total_bw = FUNC_2(VAR_2->total_bw);
 VAR_0->amp_max_bw = FUNC_2(VAR_2->max_bw);
 VAR_0->amp_min_latency = FUNC_2(VAR_2->min_latency);
 VAR_0->amp_max_pdu = FUNC_2(VAR_2->max_pdu);
 VAR_0->amp_type = VAR_2->amp_type;
 VAR_0->amp_pal_cap = FUNC_1(VAR_2->pal_cap);
 VAR_0->amp_assoc_size = FUNC_1(VAR_2->max_assoc_size);
 VAR_0->amp_be_flush_to = FUNC_2(VAR_2->be_flush_to);
 VAR_0->amp_max_flush_to = FUNC_2(VAR_2->max_flush_to);
}
