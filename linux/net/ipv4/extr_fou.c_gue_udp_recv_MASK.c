
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct udphdr {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int version; } ;
struct guehdr {int version; int hlen; int flags; int proto_ctype; int control; } ;
struct fou {scalar_t__ family; int flags; } ;
typedef int __be32 ;
struct TYPE_4__ {void* tot_len; } ;
struct TYPE_3__ {void* payload_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct fou* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,struct fou*,int) ;
 int FUNC_3 (struct sk_buff*,struct guehdr*) ;
 struct guehdr* FUNC_4 (struct sk_buff*,struct guehdr*,void*,size_t,int,int) ;
 void* FUNC_5 (scalar_t__) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*,int *,size_t) ;
 int FUNC_13 (struct sk_buff*) ;
 int * FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct guehdr*,size_t) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct fou *VAR_10 = FUNC_1(VAR_8);
 size_t VAR_11, VAR_12, VAR_13;
 struct guehdr *VAR_14;
 void *VAR_15;
 u16 VAR_16 = 0;
 u8 VAR_17;

 if (!VAR_10)
  return 1;

 VAR_11 = sizeof(struct udphdr) + sizeof(struct guehdr);
 if (!FUNC_11(VAR_9, VAR_11))
  goto drop;

 VAR_14 = (struct guehdr *)&FUNC_14(VAR_9)[1];

 switch (VAR_14->version) {
 case 0:
  break;

 case 1: {


  int VAR_18;

  switch (((struct iphdr *)VAR_14)->version) {
  case 4:
   VAR_18 = VAR_6;
   break;
  case 6:
   VAR_18 = VAR_7;
   break;
  default:
   goto drop;
  }

  if (FUNC_2(VAR_9, VAR_10, sizeof(struct udphdr)))
   goto drop;

  return -VAR_18;
 }

 default:
  goto drop;
 }

 VAR_12 = VAR_14->hlen << 2;
 VAR_11 += VAR_12;

 if (!FUNC_11(VAR_9, VAR_11))
  goto drop;


 VAR_14 = (struct guehdr *)&FUNC_14(VAR_9)[1];

 if (FUNC_16(VAR_14, VAR_12))
  goto drop;

 VAR_13 = sizeof(struct guehdr) + VAR_12;

 if (VAR_10->family == VAR_0)
  FUNC_6(VAR_9)->tot_len = FUNC_5(FUNC_10(FUNC_6(VAR_9)->tot_len) - VAR_11);
 else
  FUNC_8(VAR_9)->payload_len =
      FUNC_5(FUNC_10(FUNC_8(VAR_9)->payload_len) - VAR_11);




 FUNC_12(VAR_9, FUNC_14(VAR_9), VAR_11);

 VAR_15 = &VAR_14[1];

 if (VAR_14->flags & VAR_2) {
  __be32 VAR_19 = *(__be32 *)(VAR_15 + VAR_16);

  VAR_16 += VAR_3;

  if (VAR_19 & VAR_4) {
   VAR_14 = FUNC_4(VAR_9, VAR_14, VAR_15 + VAR_16,
          VAR_13, VAR_14->proto_ctype,
          !!(VAR_10->flags &
      VAR_1));
   if (!VAR_14)
    goto drop;

   VAR_15 = &VAR_14[1];

   VAR_16 += VAR_5;
  }
 }

 if (FUNC_15(VAR_14->control))
  return FUNC_3(VAR_9, VAR_14);

 VAR_17 = VAR_14->proto_ctype;
 FUNC_0(VAR_9, sizeof(struct udphdr) + VAR_13);
 FUNC_13(VAR_9);

 if (FUNC_7(VAR_9))
  goto drop;

 return -VAR_17;

drop:
 FUNC_9(VAR_9);
 return 0;
}
