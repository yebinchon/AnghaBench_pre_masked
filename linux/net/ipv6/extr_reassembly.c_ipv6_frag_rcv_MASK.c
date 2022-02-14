
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int transport_header; TYPE_4__* dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct TYPE_7__ {int lock; } ;
struct frag_queue {int iif; TYPE_3__ q; } ;
struct frag_hdr {int frag_off; int identification; } ;
struct TYPE_9__ {int flags; int * nhoff; } ;
struct TYPE_8__ {int ifindex; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net*,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 struct net* FUNC_3 (int ) ;
 struct frag_queue* FUNC_4 (struct net*,int ,struct ipv6hdr const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct frag_queue*,struct sk_buff*,struct frag_hdr*,int *,scalar_t__*) ;
 struct ipv6hdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_6)
{
 struct frag_hdr *VAR_7;
 struct frag_queue *VAR_8;
 const struct ipv6hdr *VAR_9 = FUNC_10(VAR_6);
 struct net *VAR_10 = FUNC_3(FUNC_13(VAR_6)->dev);
 int VAR_11;

 if (FUNC_0(VAR_6)->flags & VAR_1)
  goto fail_hdr;

 FUNC_1(VAR_10, FUNC_8(FUNC_13(VAR_6)), VAR_5);


 if (VAR_9->payload_len == 0)
  goto fail_hdr;

 if (!FUNC_12(VAR_6, (FUNC_17(VAR_6) +
     sizeof(struct frag_hdr))))
  goto fail_hdr;

 VAR_9 = FUNC_10(VAR_6);
 VAR_7 = (struct frag_hdr *)FUNC_16(VAR_6);

 if (!(VAR_7->frag_off & FUNC_5(0xFFF9))) {

  VAR_6->transport_header += sizeof(struct frag_hdr);
  FUNC_1(VAR_10,
    FUNC_8(FUNC_13(VAR_6)), VAR_4);

  FUNC_0(VAR_6)->nhoff = (u8 *)VAR_7 - FUNC_14(VAR_6);
  FUNC_0(VAR_6)->flags |= VAR_1;
  return 1;
 }

 VAR_11 = VAR_6->dev ? VAR_6->dev->ifindex : 0;
 VAR_8 = FUNC_4(VAR_10, VAR_7->identification, VAR_9, VAR_11);
 if (VAR_8) {
  u32 VAR_12 = 0;
  int VAR_13;

  FUNC_18(&VAR_8->q.lock);

  VAR_8->iif = VAR_11;
  VAR_13 = FUNC_9(VAR_8, VAR_6, VAR_7, FUNC_0(VAR_6)->nhoff,
         &VAR_12);

  FUNC_19(&VAR_8->q.lock);
  FUNC_7(&VAR_8->q);
  if (VAR_12) {
   FUNC_1(VAR_10, FUNC_2(VAR_6->dev),
     VAR_2);

   FUNC_6(VAR_6, VAR_0, VAR_12);
  }
  return VAR_13;
 }

 FUNC_1(VAR_10, FUNC_8(FUNC_13(VAR_6)), VAR_3);
 FUNC_11(VAR_6);
 return -1;

fail_hdr:
 FUNC_1(VAR_10, FUNC_2(VAR_6->dev),
   VAR_2);
 FUNC_6(VAR_6, VAR_0, FUNC_15(VAR_6));
 return -1;
}
