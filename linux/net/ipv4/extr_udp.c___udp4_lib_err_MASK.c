
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct udphdr {int dest; int source; } ;
struct udp_table {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {TYPE_3__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int saddr; int daddr; } ;
struct inet_sock {int recverr; int pmtudisc; } ;
struct TYPE_6__ {int ifindex; } ;
struct TYPE_5__ {int fatal; int errno; } ;
struct TYPE_4__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sock* FUNC_0 (int ) ;

 int const VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int const VAR_7 ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct net*,int ) ;
 struct sock* FUNC_4 (struct net*,struct iphdr const*,struct udphdr*,struct udp_table*,struct sk_buff*,int ) ;
 struct sock* FUNC_5 (struct net*,int ,int ,int ,int ,int ,int ,struct udp_table*,int *) ;
 struct net* FUNC_6 (TYPE_3__*) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct inet_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_11 (struct sk_buff*,struct sock*) ;
 int FUNC_12 (struct sk_buff*,struct sock*,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct sock*) ;
 int VAR_10 ;

int FUNC_15(struct sk_buff *VAR_11, u32 VAR_12, struct udp_table *VAR_13)
{
 struct inet_sock *VAR_14;
 const struct iphdr *VAR_15 = (const struct iphdr *)VAR_11->data;
 struct udphdr *VAR_16 = (struct udphdr *)(VAR_11->data+(VAR_15->ihl<<2));
 const int VAR_17 = FUNC_7(VAR_11)->type;
 const int VAR_18 = FUNC_7(VAR_11)->code;
 bool VAR_19 = 0;
 struct sock *VAR_20;
 int VAR_21;
 int VAR_22;
 struct net *VAR_23 = FUNC_6(VAR_11->dev);

 VAR_20 = FUNC_5(VAR_23, VAR_15->daddr, VAR_16->dest,
          VAR_15->saddr, VAR_16->source, VAR_11->dev->ifindex,
          FUNC_8(VAR_11), VAR_13, ((void*)0));
 if (!VAR_20) {

  VAR_20 = FUNC_0(-VAR_2);
  if (FUNC_13(&VAR_10)) {
   VAR_20 = FUNC_4(VAR_23, VAR_15, VAR_16, VAR_13, VAR_11,
        VAR_12);
   if (!VAR_20)
    return 0;
  }

  if (FUNC_1(VAR_20)) {
   FUNC_3(VAR_23, VAR_5);
   return FUNC_2(VAR_20);
  }

  VAR_19 = 1;
 }

 VAR_22 = 0;
 VAR_21 = 0;
 VAR_14 = FUNC_9(VAR_20);

 switch (VAR_17) {
 default:
 case 128:
  VAR_22 = VAR_0;
  break;
 case 129:
  goto out;
 case 131:
  VAR_22 = VAR_3;
  VAR_21 = 1;
  break;
 case 132:
  if (VAR_18 == VAR_4) {
   FUNC_12(VAR_11, VAR_20, VAR_12);
   if (VAR_14->pmtudisc != VAR_6) {
    VAR_22 = VAR_1;
    VAR_21 = 1;
    break;
   }
   goto out;
  }
  VAR_22 = VAR_0;
  if (VAR_18 <= VAR_7) {
   VAR_21 = VAR_9[VAR_18].fatal;
   VAR_22 = VAR_9[VAR_18].errno;
  }
  break;
 case 130:
  FUNC_11(VAR_11, VAR_20);
  goto out;
 }





 if (VAR_19) {

  goto out;
 }
 if (!VAR_14->recverr) {
  if (!VAR_21 || VAR_20->sk_state != VAR_8)
   goto out;
 } else
  FUNC_10(VAR_20, VAR_11, VAR_22, VAR_16->dest, VAR_12, (u8 *)(VAR_16+1));

 VAR_20->sk_err = VAR_22;
 VAR_20->sk_error_report(VAR_20);
out:
 return 0;
}
