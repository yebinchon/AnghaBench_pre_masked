
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ (* recv ) (struct nci_uart*,TYPE_3__*) ;} ;
struct nci_uart {int rx_packet_len; TYPE_3__* rx_skb; TYPE_2__* tty; TYPE_1__ ops; int ndev; } ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*,int const*,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (struct nci_uart*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct nci_uart *VAR_4, const u8 *VAR_5,
         char *VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_4->ndev) {
  FUNC_2(VAR_4->tty->dev,
   "receive data from tty but no NCI dev is attached yet, drop buffer\n");
  return 0;
 }




 while (VAR_7 > 0) {

  if (!VAR_4->rx_skb) {
   VAR_4->rx_packet_len = -1;
   VAR_4->rx_skb = FUNC_1(VAR_4->ndev,
         VAR_3,
         VAR_1);
   if (!VAR_4->rx_skb)
    return -VAR_0;
  }


  if (VAR_4->rx_skb->len < VAR_2) {
   FUNC_4(VAR_4->rx_skb, *VAR_5++);
   --VAR_7;
   continue;
  }


  if (VAR_4->rx_packet_len < 0)
   VAR_4->rx_packet_len = VAR_2 +
    FUNC_0(VAR_4->rx_skb->data);




  VAR_8 = VAR_4->rx_packet_len - VAR_4->rx_skb->len;
  if (VAR_7 < VAR_8)
   VAR_8 = VAR_7;
  FUNC_3(VAR_4->rx_skb, VAR_5, VAR_8);
  VAR_5 += VAR_8;
  VAR_7 -= VAR_8;


  if (VAR_4->rx_packet_len == VAR_4->rx_skb->len) {

   if (VAR_4->ops.recv(VAR_4, VAR_4->rx_skb) != 0)
    FUNC_2(VAR_4->tty->dev, "corrupted RX packet\n");

   VAR_4->rx_skb = ((void*)0);
  }
 }

 return 0;
}
