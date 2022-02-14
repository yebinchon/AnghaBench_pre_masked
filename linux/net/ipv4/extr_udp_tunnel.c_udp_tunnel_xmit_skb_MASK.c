
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int len; void* source; void* dest; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct rtable {int dummy; } ;
typedef int __u8 ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_2__ {int opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*,struct rtable*,struct sk_buff*,int ,int ,int ,int ,int ,void*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sk_buff*) ;
 struct udphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int,struct sk_buff*,int ,int ,int ) ;

void FUNC_8(struct rtable *VAR_1, struct sock *VAR_2, struct sk_buff *VAR_3,
    __be32 VAR_4, __be32 VAR_5, __u8 VAR_6, __u8 VAR_7,
    __be16 VAR_8, __be16 VAR_9, __be16 VAR_10,
    bool VAR_11, bool VAR_12)
{
 struct udphdr *VAR_13;

 FUNC_1(VAR_3, sizeof(*VAR_13));
 FUNC_5(VAR_3);
 VAR_13 = FUNC_6(VAR_3);

 VAR_13->dest = VAR_10;
 VAR_13->source = VAR_9;
 VAR_13->len = FUNC_2(VAR_3->len);

 FUNC_4(&(FUNC_0(VAR_3)->opt), 0, sizeof(FUNC_0(VAR_3)->opt));

 FUNC_7(VAR_12, VAR_3, VAR_4, VAR_5, VAR_3->len);

 FUNC_3(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5, VAR_0, VAR_6, VAR_7, VAR_8, VAR_11);
}
