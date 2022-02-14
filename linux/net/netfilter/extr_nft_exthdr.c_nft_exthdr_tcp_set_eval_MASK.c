
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct tcphdr {int check; } ;
struct nft_regs {void** data; } ;
struct TYPE_2__ {scalar_t__ thoff; } ;
struct nft_pktinfo {int skb; TYPE_1__ xt; } ;
struct nft_exthdr {scalar_t__ type; unsigned int len; unsigned int offset; size_t sreg; } ;
struct nft_expr {int dummy; } ;
typedef int buff ;
typedef void* __be32 ;
typedef void* __be16 ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 void* FUNC_1 (void**) ;
 int FUNC_2 (int *,int ,void*,void*,int) ;
 int FUNC_3 (int *,int ,void*,void*,int) ;
 struct nft_exthdr* FUNC_4 (struct nft_expr const*) ;
 struct tcphdr* FUNC_5 (struct nft_pktinfo const*,int,scalar_t__*,unsigned int*) ;
 int FUNC_6 (void*) ;
 unsigned int FUNC_7 (scalar_t__*,unsigned int) ;
 int FUNC_8 (void*,void**) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(const struct nft_expr *VAR_1,
        struct nft_regs *VAR_2,
        const struct nft_pktinfo *VAR_3)
{
 u8 VAR_4[sizeof(struct tcphdr) + VAR_0];
 struct nft_exthdr *VAR_5 = FUNC_4(VAR_1);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 struct tcphdr *VAR_10;
 u8 *VAR_11;
 u32 VAR_12;

 VAR_10 = FUNC_5(VAR_3, sizeof(VAR_4), VAR_4, &VAR_8);
 if (!VAR_10)
  return;

 VAR_11 = (u8 *)VAR_10;
 for (VAR_6 = sizeof(*VAR_10); VAR_6 < VAR_8 - 1; VAR_6 += VAR_7) {
  union {
   u8 octet;
   __be16 v16;
   __be32 v32;
  } VAR_13, VAR_14;

  VAR_7 = FUNC_7(VAR_11, VAR_6);

  if (VAR_5->type != VAR_11[VAR_6])
   continue;

  if (VAR_6 + VAR_7 > VAR_8 || VAR_5->len + VAR_5->offset > VAR_7)
   return;

  if (FUNC_9(VAR_3->skb,
     VAR_3->xt.thoff + VAR_6 + VAR_5->len))
   return;

  VAR_10 = FUNC_5(VAR_3, sizeof(VAR_4), VAR_4,
           &VAR_8);
  if (!VAR_10)
   return;

  VAR_12 = VAR_2->data[VAR_5->sreg];
  VAR_9 = VAR_6 + VAR_5->offset;

  switch (VAR_5->len) {
  case 2:
   VAR_13.v16 = FUNC_1((u16 *)(VAR_11 + VAR_9));
   VAR_14.v16 = VAR_12;

   switch (VAR_5->type) {
   case 128:

    if (FUNC_6(VAR_13.v16) <= FUNC_6(VAR_14.v16))
     return;
   break;
   }

   if (VAR_13.v16 == VAR_14.v16)
    return;

   FUNC_8(VAR_14.v16, (u16*)(VAR_11 + VAR_9));
   FUNC_2(&VAR_10->check, VAR_3->skb,
       VAR_13.v16, VAR_14.v16, 0);
   break;
  case 4:
   VAR_14.v32 = VAR_12;
   VAR_13.v32 = FUNC_1((u32 *)(VAR_11 + VAR_9));

   if (VAR_13.v32 == VAR_14.v32)
    return;

   FUNC_8(VAR_14.v32, (u32*)(VAR_11 + VAR_9));
   FUNC_3(&VAR_10->check, VAR_3->skb,
       VAR_13.v32, VAR_14.v32, 0);
   break;
  default:
   FUNC_0(1);
   break;
  }

  return;
 }
}
