
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct TYPE_5__ {int error; struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int peers; } ;
struct net {TYPE_2__ ipv4; } ;
struct inet_peer {unsigned long rate_tokens; unsigned long rate_last; } ;
struct in_device {int dummy; } ;
struct TYPE_8__ {int iif; } ;
struct TYPE_7__ {int saddr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in_device*) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct net*,int ) ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 struct in_device* FUNC_4 (struct net_device*) ;
 struct net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int ,int,int ) ;
 struct inet_peer* FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (struct inet_peer*) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 struct rtable* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_9)
{
 struct rtable *VAR_10 = FUNC_13(VAR_9);
 struct net_device *VAR_11 = VAR_9->dev;
 struct in_device *VAR_12;
 struct inet_peer *VAR_13;
 unsigned long VAR_14;
 struct net *VAR_15;
 bool VAR_16;
 int VAR_17;

 if (FUNC_12(VAR_9->dev)) {
  VAR_11 = FUNC_3(FUNC_5(VAR_9->dev), FUNC_1(VAR_9)->iif);
  if (!VAR_11)
   goto out;
 }

 VAR_12 = FUNC_4(VAR_11);


 if (!VAR_12)
  goto out;

 VAR_15 = FUNC_5(VAR_10->dst.dev);
 if (!FUNC_0(VAR_12)) {
  switch (VAR_10->dst.error) {
  case 130:
   FUNC_2(VAR_15, VAR_4);
   break;

  case 128:
   FUNC_2(VAR_15, VAR_5);
   break;
  }
  goto out;
 }

 switch (VAR_10->dst.error) {
 case 129:
 default:
  goto out;
 case 130:
  VAR_17 = VAR_1;
  break;
 case 128:
  VAR_17 = VAR_2;
  FUNC_2(VAR_15, VAR_5);
  break;
 case 131:
  VAR_17 = VAR_3;
  break;
 }

 VAR_13 = FUNC_7(VAR_15->ipv4.peers, FUNC_9(VAR_9)->saddr,
          FUNC_11(VAR_9->dev), 1);

 VAR_16 = 1;
 if (VAR_13) {
  VAR_14 = VAR_8;
  VAR_13->rate_tokens += VAR_14 - VAR_13->rate_last;
  if (VAR_13->rate_tokens > VAR_6)
   VAR_13->rate_tokens = VAR_6;
  VAR_13->rate_last = VAR_14;
  if (VAR_13->rate_tokens >= VAR_7)
   VAR_13->rate_tokens -= VAR_7;
  else
   VAR_16 = 0;
  FUNC_8(VAR_13);
 }
 if (VAR_16)
  FUNC_6(VAR_9, VAR_0, VAR_17, 0);

out: FUNC_10(VAR_9);
 return 0;
}
