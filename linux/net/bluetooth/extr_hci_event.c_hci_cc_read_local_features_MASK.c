
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_features {int features; scalar_t__ status; } ;
struct hci_dev {int** features; int pkt_type; int esco_type; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int**,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_24,
           struct sk_buff *VAR_25)
{
 struct hci_rp_read_local_features *VAR_26 = (void *) VAR_25->data;

 FUNC_0("%s status 0x%2.2x", VAR_24->name, VAR_26->status);

 if (VAR_26->status)
  return;

 FUNC_2(VAR_24->features, VAR_26->features, 8);




 if (VAR_24->features[0][0] & VAR_15)
  VAR_24->pkt_type |= (VAR_11 | VAR_9);

 if (VAR_24->features[0][0] & VAR_16)
  VAR_24->pkt_type |= (VAR_12 | VAR_10);

 if (VAR_24->features[0][1] & VAR_22) {
  VAR_24->pkt_type |= (VAR_13);
  VAR_24->esco_type |= (VAR_7);
 }

 if (VAR_24->features[0][1] & VAR_23) {
  VAR_24->pkt_type |= (VAR_14);
  VAR_24->esco_type |= (VAR_8);
 }

 if (FUNC_1(VAR_24))
  VAR_24->esco_type |= (VAR_4);

 if (VAR_24->features[0][4] & VAR_20)
  VAR_24->esco_type |= (VAR_5);

 if (VAR_24->features[0][4] & VAR_21)
  VAR_24->esco_type |= (VAR_6);

 if (VAR_24->features[0][5] & VAR_18)
  VAR_24->esco_type |= (VAR_0);

 if (VAR_24->features[0][5] & VAR_19)
  VAR_24->esco_type |= (VAR_2);

 if (VAR_24->features[0][5] & VAR_17)
  VAR_24->esco_type |= (VAR_1 | VAR_3);
}
