
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int users; int dev; int protocol; int len; } ;
struct pktgen_dev {scalar_t__ delay; int last_ok; scalar_t__ clone_count; scalar_t__ clone_skb; scalar_t__ xmit_mode; scalar_t__ sofar; scalar_t__ count; struct sk_buff* skb; int errors; int odevname; int last_pkt_size; int tx_bytes; int seq_num; int next_tx; struct net_device* odev; int burst; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct netdev_queue*,int ) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;



 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_6 (struct net_device*,struct pktgen_dev*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (struct sk_buff*,struct net_device*,struct netdev_queue*,int) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct net_device*) ;
 unsigned int FUNC_17 (struct netdev_queue*) ;
 int FUNC_18 (struct pktgen_dev*) ;
 int FUNC_19 (struct pktgen_dev*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (unsigned int,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 unsigned int FUNC_24 (int *) ;
 int FUNC_25 (unsigned int,int *) ;
 int FUNC_26 () ;
 struct netdev_queue* FUNC_27 (struct net_device*,struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;
 int FUNC_29 () ;
 int FUNC_30 (struct pktgen_dev*,int ) ;
 scalar_t__ FUNC_31 (unsigned int) ;

__attribute__((used)) static void FUNC_32(struct pktgen_dev *VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_5->burst);
 struct net_device *VAR_7 = VAR_5->odev;
 struct netdev_queue *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;


 if (FUNC_31(!FUNC_16(VAR_7) || !FUNC_14(VAR_7))) {
  FUNC_18(VAR_5);
  return;
 }




 if (FUNC_31(VAR_5->delay == VAR_3)) {
  VAR_5->next_tx = FUNC_8(FUNC_9(), VAR_4);
  return;
 }


 if (!VAR_5->skb || (VAR_5->last_ok &&
         ++VAR_5->clone_count >= VAR_5->clone_skb)) {

  FUNC_7(VAR_5->skb);

  VAR_5->skb = FUNC_6(VAR_7, VAR_5);
  if (VAR_5->skb == ((void*)0)) {
   FUNC_20("ERROR: couldn't allocate skb in fill_packet\n");
   FUNC_26();
   VAR_5->clone_count--;
   return;
  }
  VAR_5->last_pkt_size = VAR_5->skb->len;
  VAR_5->clone_count = 0;
 }

 if (VAR_5->delay && VAR_5->last_ok)
  FUNC_30(VAR_5, VAR_5->next_tx);

 if (VAR_5->xmit_mode == VAR_0) {
  VAR_9 = VAR_5->skb;
  VAR_9->protocol = FUNC_5(VAR_9, VAR_9->dev);
  FUNC_21(VAR_6, &VAR_9->users);
  FUNC_10();
  do {
   VAR_10 = FUNC_15(VAR_9);
   if (VAR_10 == VAR_2)
    VAR_5->errors++;
   VAR_5->sofar++;
   VAR_5->seq_num++;
   if (FUNC_24(&VAR_9->users) != VAR_6) {



    FUNC_3(FUNC_25(VAR_6 - 1, &VAR_9->users));



    break;
   }



   FUNC_28(VAR_9);
  } while (--VAR_6 > 0);
  goto out;
 } else if (VAR_5->xmit_mode == VAR_1) {
  FUNC_10();
  FUNC_23(&VAR_5->skb->users);

  VAR_10 = FUNC_4(VAR_5->skb);
  switch (VAR_10) {
  case 128:
   VAR_5->sofar++;
   VAR_5->seq_num++;
   VAR_5->tx_bytes += VAR_5->last_pkt_size;
   break;
  case 129:
  case 130:




  case 132:





  default:
   VAR_5->errors++;
   FUNC_12("%s xmit error: %d\n",
          VAR_5->odevname, VAR_10);
   break;
  }
  goto out;
 }

 VAR_8 = FUNC_27(VAR_7, VAR_5->skb);

 FUNC_10();

 FUNC_0(VAR_7, VAR_8, FUNC_29());

 if (FUNC_31(FUNC_17(VAR_8))) {
  VAR_10 = 132;
  VAR_5->last_ok = 0;
  goto unlock;
 }
 FUNC_21(VAR_6, &VAR_5->skb->users);

xmit_more:
 VAR_10 = FUNC_13(VAR_5->skb, VAR_7, VAR_8, --VAR_6 > 0);

 switch (VAR_10) {
 case 131:
  VAR_5->last_ok = 1;
  VAR_5->sofar++;
  VAR_5->seq_num++;
  VAR_5->tx_bytes += VAR_5->last_pkt_size;
  if (VAR_6 > 0 && !FUNC_17(VAR_8))
   goto xmit_more;
  break;
 case 129:
 case 130:

  VAR_5->errors++;
  break;
 default:
  FUNC_12("%s xmit error: %d\n",
         VAR_5->odevname, VAR_10);
  VAR_5->errors++;

 case 132:

  FUNC_22(&(VAR_5->skb->users));
  VAR_5->last_ok = 0;
 }
 if (FUNC_31(VAR_6))
  FUNC_3(FUNC_25(VAR_6, &VAR_5->skb->users));
unlock:
 FUNC_1(VAR_7, VAR_8);

out:
 FUNC_11();


 if ((VAR_5->count != 0) && (VAR_5->sofar >= VAR_5->count)) {
  FUNC_19(VAR_5);


  FUNC_18(VAR_5);
 }
}
