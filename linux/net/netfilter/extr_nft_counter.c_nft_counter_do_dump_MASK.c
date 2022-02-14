
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_counter_percpu_priv {int dummy; } ;
struct nft_counter {int packets; int bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nft_counter_percpu_priv*,struct nft_counter*) ;
 int FUNC_2 (struct nft_counter_percpu_priv*,struct nft_counter*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
          struct nft_counter_percpu_priv *VAR_4,
          bool VAR_5)
{
 struct nft_counter VAR_6;

 FUNC_1(VAR_4, &VAR_6);

 if (FUNC_3(VAR_3, VAR_0, FUNC_0(VAR_6.bytes),
    VAR_2) ||
     FUNC_3(VAR_3, VAR_1, FUNC_0(VAR_6.packets),
    VAR_2))
  goto nla_put_failure;

 if (VAR_5)
  FUNC_2(VAR_4, &VAR_6);

 return 0;

nla_put_failure:
 return -1;
}
