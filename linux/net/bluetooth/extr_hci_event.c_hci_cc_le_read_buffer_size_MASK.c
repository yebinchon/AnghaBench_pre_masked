
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_le_read_buffer_size {int le_max_pkt; int le_mtu; scalar_t__ status; } ;
struct hci_dev {int le_pkts; int le_mtu; int name; int le_cnt; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0,
           struct sk_buff *VAR_1)
{
 struct hci_rp_le_read_buffer_size *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_2->status);

 if (VAR_2->status)
  return;

 VAR_0->le_mtu = FUNC_1(VAR_2->le_mtu);
 VAR_0->le_pkts = VAR_2->le_max_pkt;

 VAR_0->le_cnt = VAR_0->le_pkts;

 FUNC_0("%s le mtu %d:%d", VAR_0->name, VAR_0->le_mtu, VAR_0->le_pkts);
}
