
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_buff {void* data; void* data_meta; void* data_end; int * rxq; scalar_t__ data_hard_start; } ;
struct sk_buff {int tail; int data_len; int end; int data; int mac_header; int len; int dev; int protocol; } ;
struct netdev_rx_queue {int xdp_rxq; } ;
struct ethhdr {scalar_t__ h_proto; int h_dest; } ;
struct bpf_prog {int dummy; } ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;



 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct netdev_rx_queue* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (int ,struct bpf_prog*,int) ;

__attribute__((used)) static u32 FUNC_21(struct sk_buff *VAR_4,
         struct xdp_buff *VAR_5,
         struct bpf_prog *VAR_6)
{
 struct netdev_rx_queue *VAR_7;
 void *VAR_8, *VAR_9;
 u32 VAR_10, VAR_11 = 131;
 __be16 VAR_12;
 struct ethhdr *VAR_13;
 bool VAR_14;
 int VAR_15, VAR_16;
 u32 VAR_17;




 if (FUNC_10(VAR_4) || FUNC_14(VAR_4))
  return 130;





 if (FUNC_13(VAR_4) ||
     FUNC_12(VAR_4) < VAR_3) {
  int VAR_18 = VAR_3 - FUNC_12(VAR_4);
  int VAR_19 = VAR_4->tail + VAR_4->data_len - VAR_4->end;




  if (FUNC_9(VAR_4,
         VAR_18 > 0 ? FUNC_0(VAR_18, VAR_2) : 0,
         VAR_19 > 0 ? VAR_19 + 128 : 0, VAR_1))
   goto do_drop;
  if (FUNC_15(VAR_4))
   goto do_drop;
 }




 VAR_17 = VAR_4->data - FUNC_16(VAR_4);
 VAR_15 = FUNC_11(VAR_4) + VAR_17;
 VAR_5->data = VAR_4->data - VAR_17;
 VAR_5->data_meta = VAR_5->data;
 VAR_5->data_end = VAR_5->data + VAR_15;
 VAR_5->data_hard_start = VAR_4->data - FUNC_12(VAR_4);
 VAR_9 = VAR_5->data_end;
 VAR_8 = VAR_5->data;
 VAR_13 = (struct ethhdr *)VAR_5->data;
 VAR_14 = FUNC_6(VAR_13->h_dest);
 VAR_12 = VAR_13->h_proto;

 VAR_7 = FUNC_8(VAR_4);
 VAR_5->rxq = &VAR_7->xdp_rxq;

 VAR_11 = FUNC_3(VAR_6, VAR_5);


 VAR_16 = VAR_5->data - VAR_8;
 if (VAR_16) {
  if (VAR_16 > 0)
   FUNC_1(VAR_4, VAR_16);
  else if (VAR_16 < 0)
   FUNC_2(VAR_4, -VAR_16);

  VAR_4->mac_header += VAR_16;
  FUNC_18(VAR_4);
 }




 VAR_16 = VAR_9 - VAR_5->data_end;
 if (VAR_16 != 0) {
  FUNC_19(VAR_4, VAR_5->data_end - VAR_5->data);
  VAR_4->len -= VAR_16;

 }


 VAR_13 = (struct ethhdr *)VAR_5->data;
 if ((VAR_12 != VAR_13->h_proto) ||
     (VAR_14 != FUNC_6(VAR_13->h_dest))) {
  FUNC_2(VAR_4, VAR_0);
  VAR_4->protocol = FUNC_5(VAR_4, VAR_4->dev);
 }

 switch (VAR_11) {
 case 129:
 case 128:
  FUNC_2(VAR_4, VAR_17);
  break;
 case 130:
  VAR_10 = VAR_5->data - VAR_5->data_meta;
  if (VAR_10)
   FUNC_17(VAR_4, VAR_10);
  break;
 default:
  FUNC_4(VAR_11);

 case 132:
  FUNC_20(VAR_4->dev, VAR_6, VAR_11);

 case 131:
 do_drop:
  FUNC_7(VAR_4);
  break;
 }

 return VAR_11;
}
