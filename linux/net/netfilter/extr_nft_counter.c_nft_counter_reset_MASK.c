
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_counter_percpu_priv {int counter; } ;
struct nft_counter {scalar_t__ bytes; scalar_t__ packets; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct nft_counter* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nft_counter_percpu_priv *VAR_0,
         struct nft_counter *VAR_1)
{
 struct nft_counter *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_2(VAR_0->counter);
 VAR_2->packets -= VAR_1->packets;
 VAR_2->bytes -= VAR_1->bytes;
 FUNC_1();
}
