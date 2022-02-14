
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int network_header; int transport_header; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; int tot_len; int protocol; void* saddr; void* daddr; scalar_t__ frag_off; int ttl; int tos; } ;
typedef void* __be32 ;
struct TYPE_2__ {int opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net*,struct sk_buff*,int *) ;
 int FUNC_4 (struct iphdr*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct net *VAR_1, struct sk_buff *VAR_2,
       __be32 VAR_3, __be32 VAR_4)
{
 struct iphdr *VAR_5;
 const struct iphdr *VAR_6 = FUNC_2(VAR_2);

 FUNC_7(VAR_2, sizeof(struct iphdr));
 VAR_2->transport_header = VAR_2->network_header;
 FUNC_8(VAR_2);
 VAR_5 = FUNC_2(VAR_2);

 VAR_5->version = 4;
 VAR_5->tos = VAR_6->tos;
 VAR_5->ttl = VAR_6->ttl;
 VAR_5->frag_off = 0;
 VAR_5->daddr = VAR_4;
 VAR_5->saddr = VAR_3;
 VAR_5->protocol = VAR_0;
 VAR_5->ihl = 5;
 VAR_5->tot_len = FUNC_1(VAR_2->len);
 FUNC_3(VAR_1, VAR_2, ((void*)0));
 FUNC_4(VAR_5);

 FUNC_5(&(FUNC_0(VAR_2)->opt), 0, sizeof(FUNC_0(VAR_2)->opt));
 FUNC_6(VAR_2);
}
