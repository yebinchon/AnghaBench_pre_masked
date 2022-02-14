
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; TYPE_2__* dev; int priority; void* protocol; } ;
struct hsr_tag {void* sequence_nr; void* encap_proto; } ;
struct hsr_sup_tag {int HSR_TLV_length; scalar_t__ HSR_TLV_type; void* sequence_nr; } ;
struct hsr_sup_payload {int macaddress_A; } ;
struct hsr_port {TYPE_2__* dev; TYPE_1__* hsr; } ;
struct TYPE_5__ {int needed_tailroom; int dev_addr; } ;
struct TYPE_4__ {int seqnr_lock; int sequence_nr; int sup_sequence_nr; int sup_multicast_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 struct sk_buff* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct hsr_port*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct hsr_sup_tag*,scalar_t__) ;
 int FUNC_9 (struct hsr_sup_tag*,int) ;
 int FUNC_10 (struct hsr_tag*,int ) ;
 void* FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_17(struct hsr_port *VAR_6,
           u8 VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11;
 struct hsr_tag *VAR_12;
 struct hsr_sup_tag *VAR_13;
 struct hsr_sup_payload *VAR_14;
 unsigned long VAR_15;

 VAR_10 = FUNC_0(VAR_6->dev);
 VAR_11 = VAR_6->dev->needed_tailroom;
 VAR_9 = FUNC_2(sizeof(struct hsr_tag) +
       sizeof(struct hsr_sup_tag) +
       sizeof(struct hsr_sup_payload) + VAR_10 + VAR_11);

 if (!VAR_9)
  return;

 FUNC_13(VAR_9, VAR_10);

 VAR_9->dev = VAR_6->dev;
 VAR_9->protocol = FUNC_6(VAR_8 ? VAR_0 : VAR_1);
 VAR_9->priority = VAR_5;

 if (FUNC_3(VAR_9, VAR_9->dev, (VAR_8 ? VAR_0 : VAR_1),
       VAR_6->hsr->sup_multicast_addr,
       VAR_9->dev->dev_addr, VAR_9->len) <= 0)
  goto out;
 FUNC_14(VAR_9);

 if (VAR_8 > 0) {
  VAR_12 = FUNC_11(VAR_9, sizeof(struct hsr_tag));
  VAR_12->encap_proto = FUNC_6(VAR_1);
  FUNC_10(VAR_12, VAR_4);
 }

 VAR_13 = FUNC_11(VAR_9, sizeof(struct hsr_sup_tag));
 FUNC_9(VAR_13, (VAR_8 ? 0x0 : 0xf));
 FUNC_8(VAR_13, VAR_8);


 FUNC_15(&VAR_6->hsr->seqnr_lock, VAR_15);
 if (VAR_8 > 0) {
  VAR_13->sequence_nr = FUNC_6(VAR_6->hsr->sup_sequence_nr);
  VAR_12->sequence_nr = FUNC_6(VAR_6->hsr->sequence_nr);
  VAR_6->hsr->sup_sequence_nr++;
  VAR_6->hsr->sequence_nr++;
 } else {
  VAR_13->sequence_nr = FUNC_6(VAR_6->hsr->sequence_nr);
  VAR_6->hsr->sequence_nr++;
 }
 FUNC_16(&VAR_6->hsr->seqnr_lock, VAR_15);

 VAR_13->HSR_TLV_type = VAR_7;

 VAR_13->HSR_TLV_length =
    VAR_8 ? sizeof(struct hsr_sup_payload) : 12;


 VAR_14 = FUNC_11(VAR_9, sizeof(struct hsr_sup_payload));
 FUNC_4(VAR_14->macaddress_A, VAR_6->dev->dev_addr);

 if (FUNC_12(VAR_9, VAR_2 + VAR_3))
  return;

 FUNC_5(VAR_9, VAR_6);
 return;

out:
 FUNC_1(1, "HSR: Could not send supervision frame\n");
 FUNC_7(VAR_9);
}
