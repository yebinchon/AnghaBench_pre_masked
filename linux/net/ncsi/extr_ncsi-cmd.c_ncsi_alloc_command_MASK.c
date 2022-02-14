
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; struct net_device* dev; } ;
struct net_device {int needed_tailroom; } ;
struct ncsi_request {struct sk_buff* cmd; } ;
struct ncsi_dev {struct net_device* dev; } ;
struct ncsi_dev_priv {struct ncsi_dev ndev; } ;
struct ncsi_cmd_pkt_hdr {int dummy; } ;
struct ncsi_cmd_arg {int payload; int req_flags; struct ncsi_dev_priv* ndp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 struct ncsi_request* FUNC_3 (struct ncsi_dev_priv*,int ) ;
 int FUNC_4 (struct ncsi_request*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct ncsi_request *FUNC_7(struct ncsi_cmd_arg *VAR_2)
{
 struct ncsi_dev_priv *VAR_3 = VAR_2->ndp;
 struct ncsi_dev *VAR_4 = &VAR_3->ndev;
 struct net_device *VAR_5 = VAR_4->dev;
 int VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = VAR_5->needed_tailroom;
 int VAR_8 = VAR_6 + VAR_7;
 struct sk_buff *VAR_9;
 struct ncsi_request *VAR_10;

 VAR_10 = FUNC_3(VAR_3, VAR_2->req_flags);
 if (!VAR_10)
  return ((void*)0);





 VAR_8 += sizeof(struct ncsi_cmd_pkt_hdr) + 4;
 if (VAR_2->payload < 26)
  VAR_8 += 26;
 else
  VAR_8 += VAR_2->payload;


 VAR_9 = FUNC_1(VAR_8, VAR_1);
 if (!VAR_9) {
  FUNC_4(VAR_10);
  return ((void*)0);
 }

 VAR_10->cmd = VAR_9;
 FUNC_5(VAR_9, VAR_6);
 FUNC_6(VAR_9);

 VAR_9->dev = VAR_5;
 VAR_9->protocol = FUNC_2(VAR_0);

 return VAR_10;
}
