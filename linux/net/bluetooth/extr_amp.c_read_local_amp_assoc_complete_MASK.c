
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct hci_rp_read_local_amp_assoc {size_t status; int frag; int phy_handle; int rem_len; } ;
struct amp_assoc {scalar_t__ offset; scalar_t__ len; scalar_t__ data; } ;
struct hci_dev {size_t name; struct amp_assoc loc_assoc; } ;


 int FUNC_0 (char*,size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,size_t) ;
 int FUNC_3 (struct hci_dev*,size_t) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (scalar_t__,int ,size_t) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_0, u8 VAR_1,
       u16 VAR_2, struct sk_buff *VAR_3)
{
 struct hci_rp_read_local_amp_assoc *VAR_4 = (void *)VAR_3->data;
 struct amp_assoc *VAR_5 = &VAR_0->loc_assoc;
 size_t VAR_6, VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_4->status);

 if (VAR_4->status)
  goto send_rsp;

 VAR_7 = VAR_3->len - sizeof(*VAR_4);
 VAR_6 = FUNC_1(VAR_4->rem_len);

 if (VAR_6 > VAR_7) {
  FUNC_0("frag_len %zu rem_len %zu", VAR_7, VAR_6);

  FUNC_5(VAR_5->data + VAR_5->offset, VAR_4->frag, VAR_7);
  VAR_5->offset += VAR_7;


  FUNC_4(VAR_0, VAR_4->phy_handle);

  return;
 }

 FUNC_5(VAR_5->data + VAR_5->offset, VAR_4->frag, VAR_6);
 VAR_5->len = VAR_5->offset + VAR_6;
 VAR_5->offset = 0;

send_rsp:

 FUNC_3(VAR_0, VAR_4->status);
 FUNC_2(VAR_0, VAR_4->status);
}
