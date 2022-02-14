
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct msghdr {int msg_iter; } ;
struct l2cap_chan {struct sk_buff* data; } ;
struct kvec {int iov_len; int iov_base; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct kvec*,int,int ) ;
 int FUNC_1 (struct l2cap_chan*,struct msghdr*,int ) ;
 int FUNC_2 (struct msghdr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct l2cap_chan *VAR_1, struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct msghdr VAR_4;
 struct kvec VAR_5;
 int VAR_6;




 VAR_1->data = VAR_2;

 VAR_5.iov_base = VAR_2->data;
 VAR_5.iov_len = VAR_2->len;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_4.msg_iter, VAR_0, &VAR_5, 1, VAR_2->len);

 VAR_6 = FUNC_1(VAR_1, &VAR_4, VAR_2->len);
 if (VAR_6 > 0) {
  VAR_3->stats.tx_bytes += VAR_6;
  VAR_3->stats.tx_packets++;
  return 0;
 }

 if (VAR_6 < 0)
  VAR_3->stats.tx_errors++;

 return VAR_6;
}
