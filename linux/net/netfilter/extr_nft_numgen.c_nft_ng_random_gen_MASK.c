
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rnd_state {int dummy; } ;
struct nft_ng_random {scalar_t__ offset; int modulus; } ;


 int VAR_0 ;
 int FUNC_0 (struct rnd_state*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct rnd_state* FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct nft_ng_random *VAR_1)
{
 struct rnd_state *VAR_2 = FUNC_2(&VAR_0);

 return FUNC_1(FUNC_0(VAR_2), VAR_1->modulus) +
        VAR_1->offset;
}
