
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; } ;
struct nft_quota {int flags; } ;
struct nft_pktinfo {int skb; } ;
struct TYPE_3__ {int table; } ;
struct nft_object {TYPE_1__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nft_pktinfo const*) ;
 struct nft_quota* FUNC_1 (struct nft_object*) ;
 int FUNC_2 (int ,int ,struct nft_object*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct nft_quota*,int ) ;
 int FUNC_4 (struct nft_pktinfo const*) ;
 int FUNC_5 (struct nft_quota*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nft_object *VAR_4,
          struct nft_regs *VAR_5,
          const struct nft_pktinfo *VAR_6)
{
 struct nft_quota *VAR_7 = FUNC_1(VAR_4);
 bool VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_6->skb);
 if (VAR_8 ^ FUNC_5(VAR_7))
  VAR_5->verdict.code = VAR_1;

 if (VAR_8 &&
     !FUNC_6(VAR_3, &VAR_7->flags))
  FUNC_2(FUNC_0(VAR_6), VAR_4->key.table, VAR_4, 0, 0,
          VAR_2, FUNC_4(VAR_6), 0, VAR_0);
}
