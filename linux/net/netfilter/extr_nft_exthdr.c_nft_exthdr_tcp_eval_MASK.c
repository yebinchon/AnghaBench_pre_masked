
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct tcphdr {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {int* data; TYPE_1__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_exthdr {size_t dreg; scalar_t__ type; unsigned int len; unsigned int offset; int flags; } ;
struct nft_expr {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int*,scalar_t__*,size_t) ;
 struct nft_exthdr* FUNC_1 (struct nft_expr const*) ;
 struct tcphdr* FUNC_2 (struct nft_pktinfo const*,int,scalar_t__*,unsigned int*) ;
 unsigned int FUNC_3 (scalar_t__*,unsigned int) ;

__attribute__((used)) static void FUNC_4(const struct nft_expr *VAR_4,
    struct nft_regs *VAR_5,
    const struct nft_pktinfo *VAR_6)
{
 u8 VAR_7[sizeof(struct tcphdr) + VAR_0];
 struct nft_exthdr *VAR_8 = FUNC_1(VAR_4);
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 u32 *VAR_13 = &VAR_5->data[VAR_8->dreg];
 struct tcphdr *VAR_14;
 u8 *VAR_15;

 VAR_14 = FUNC_2(VAR_6, sizeof(VAR_7), VAR_7, &VAR_11);
 if (!VAR_14)
  goto err;

 VAR_15 = (u8 *)VAR_14;
 for (VAR_9 = sizeof(*VAR_14); VAR_9 < VAR_11 - 1; VAR_9 += VAR_10) {
  VAR_10 = FUNC_3(VAR_15, VAR_9);

  if (VAR_8->type != VAR_15[VAR_9])
   continue;

  if (VAR_9 + VAR_10 > VAR_11 || VAR_8->len + VAR_8->offset > VAR_10)
   goto err;

  VAR_12 = VAR_9 + VAR_8->offset;
  if (VAR_8->flags & VAR_2) {
   *VAR_13 = 1;
  } else {
   VAR_13[VAR_8->len / VAR_3] = 0;
   FUNC_0(VAR_13, VAR_15 + VAR_12, VAR_8->len);
  }

  return;
 }

err:
 if (VAR_8->flags & VAR_2)
  *VAR_13 = 0;
 else
  VAR_5->verdict.code = VAR_1;
}
