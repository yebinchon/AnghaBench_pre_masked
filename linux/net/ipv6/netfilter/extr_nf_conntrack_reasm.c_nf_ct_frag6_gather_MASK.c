
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int transport_header; TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct TYPE_4__ {int lock; } ;
struct frag_queue {TYPE_2__ q; } ;
struct frag_hdr {int identification; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int *,int*,int*) ;
 struct frag_queue* FUNC_1 (struct net*,int ,int ,struct ipv6hdr*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct frag_queue*,struct sk_buff*,struct frag_hdr*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct net *VAR_2, struct sk_buff *VAR_3, u32 VAR_4)
{
 u16 VAR_5 = VAR_3->transport_header;
 int VAR_6, VAR_7, VAR_8;
 struct frag_hdr *VAR_9;
 struct frag_queue *VAR_10;
 struct ipv6hdr *VAR_11;
 u8 VAR_12;


 if (FUNC_3(VAR_3)->payload_len == 0) {
  FUNC_5("payload len = 0\n");
  return 0;
 }

 if (FUNC_0(VAR_3, &VAR_12, &VAR_7, &VAR_6) < 0)
  return 0;

 if (!FUNC_6(VAR_3, VAR_6 + sizeof(*VAR_9)))
  return -VAR_0;

 FUNC_8(VAR_3, VAR_6);
 VAR_11 = FUNC_3(VAR_3);
 VAR_9 = (struct frag_hdr *)FUNC_9(VAR_3);

 FUNC_7(VAR_3);
 VAR_10 = FUNC_1(VAR_2, VAR_9->identification, VAR_4, VAR_11,
       VAR_3->dev ? VAR_3->dev->ifindex : 0);
 if (VAR_10 == ((void*)0)) {
  FUNC_5("Can't find and can't create new queue\n");
  return -VAR_0;
 }

 FUNC_10(&VAR_10->q.lock);

 VAR_8 = FUNC_4(VAR_10, VAR_3, VAR_9, VAR_7);
 if (VAR_8 == -VAR_1) {
  VAR_3->transport_header = VAR_5;
  VAR_8 = 0;
 }

 FUNC_11(&VAR_10->q.lock);
 FUNC_2(&VAR_10->q);
 return VAR_8;
}
