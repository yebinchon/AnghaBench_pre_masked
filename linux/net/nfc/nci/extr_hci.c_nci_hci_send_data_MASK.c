
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_conn_info {int max_pkt_payload_len; int conn_id; } ;
struct TYPE_2__ {struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nci_dev*,int ,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct nci_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int const*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct nci_dev *VAR_5, u8 VAR_6,
        const u8 VAR_7, const u8 *VAR_8,
        size_t VAR_9)
{
 struct nci_conn_info *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 u8 VAR_15 = VAR_6;

 VAR_10 = VAR_5->hci_dev->conn_info;
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = 0;
 VAR_11 = FUNC_1(VAR_5, VAR_10->max_pkt_payload_len +
       VAR_3, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 FUNC_4(VAR_11, VAR_3 + 2);
 *(u8 *)FUNC_2(VAR_11, 1) = VAR_7;

 do {
  VAR_12 = VAR_10->max_pkt_payload_len;


  if (VAR_13 + VAR_10->max_pkt_payload_len -
      (VAR_11->len + 1) >= VAR_9) {
   VAR_15 |= VAR_4;
   VAR_12 = VAR_9 - VAR_13;
  } else {
   VAR_12 = VAR_10->max_pkt_payload_len - VAR_11->len - 1;
  }

  *(u8 *)FUNC_2(VAR_11, 1) = VAR_15;

  if (VAR_12 > 0)
   FUNC_3(VAR_11, VAR_8 + VAR_13, VAR_12);

  VAR_14 = FUNC_0(VAR_5, VAR_10->conn_id, VAR_11);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_13 += VAR_12;

  if (VAR_13 < VAR_9) {
   VAR_11 = FUNC_1(VAR_5,
         VAR_10->max_pkt_payload_len +
         VAR_3, VAR_2);
   if (!VAR_11)
    return -VAR_0;

   FUNC_4(VAR_11, VAR_3 + 1);
  }
 } while (VAR_13 < VAR_9);

 return VAR_13;
}
