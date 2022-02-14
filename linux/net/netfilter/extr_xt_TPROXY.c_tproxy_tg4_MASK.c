
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct udphdr {int dest; int source; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int mark; int dev; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; int protocol; } ;
typedef int _hdr ;
typedef int __be32 ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sock*) ;
 struct sock* FUNC_3 (struct net*,struct sk_buff*,int ,int ,int ,int ,int ,int ,int ) ;
 struct sock* FUNC_4 (struct net*,struct sk_buff*,int ,int ,struct sock*) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int *,int ,int *,int ,int) ;
 struct udphdr* FUNC_9 (struct sk_buff*,int ,int,struct udphdr*) ;

__attribute__((used)) static unsigned int
FUNC_10(struct net *VAR_5, struct sk_buff *VAR_6, __be32 VAR_7, __be16 VAR_8,
    u_int32_t VAR_9, u_int32_t VAR_10)
{
 const struct iphdr *VAR_11 = FUNC_0(VAR_6);
 struct udphdr VAR_12, *VAR_13;
 struct sock *VAR_14;

 VAR_13 = FUNC_9(VAR_6, FUNC_1(VAR_6), sizeof(VAR_12), &VAR_12);
 if (VAR_13 == ((void*)0))
  return VAR_1;





 VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_11->protocol,
       VAR_11->saddr, VAR_11->daddr,
       VAR_13->source, VAR_13->dest,
       VAR_6->dev, VAR_2);

 VAR_7 = FUNC_5(VAR_6, VAR_7, VAR_11->daddr);
 if (!VAR_8)
  VAR_8 = VAR_13->dest;


 if (VAR_14 && VAR_14->sk_state == VAR_4)

  VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_14);
 else if (!VAR_14)


  VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_11->protocol,
        VAR_11->saddr, VAR_7,
        VAR_13->source, VAR_8,
        VAR_6->dev, VAR_3);


 if (VAR_14 && FUNC_6(VAR_14)) {


  VAR_6->mark = (VAR_6->mark & ~VAR_9) ^ VAR_10;

  FUNC_8("redirecting: proto %hhu %pI4:%hu -> %pI4:%hu, mark: %x\n",
    VAR_11->protocol, &VAR_11->daddr, FUNC_7(VAR_13->dest),
    &VAR_7, FUNC_7(VAR_8), VAR_6->mark);

  FUNC_2(VAR_6, VAR_14);
  return VAR_0;
 }

 FUNC_8("no socket, dropping: proto %hhu %pI4:%hu -> %pI4:%hu, mark: %x\n",
   VAR_11->protocol, &VAR_11->saddr, FUNC_7(VAR_13->source),
   &VAR_11->daddr, FUNC_7(VAR_13->dest), VAR_6->mark);
 return VAR_1;
}
