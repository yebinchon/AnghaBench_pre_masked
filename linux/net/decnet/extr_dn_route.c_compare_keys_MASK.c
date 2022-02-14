
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowidn {int daddr; int saddr; int flowidn_mark; int flowidn_scope; int flowidn_oif; int flowidn_iif; } ;



__attribute__((used)) static inline int FUNC_0(struct flowidn *VAR_0, struct flowidn *VAR_1)
{
 return ((VAR_0->daddr ^ VAR_1->daddr) |
  (VAR_0->saddr ^ VAR_1->saddr) |
  (VAR_0->flowidn_mark ^ VAR_1->flowidn_mark) |
  (VAR_0->flowidn_scope ^ VAR_1->flowidn_scope) |
  (VAR_0->flowidn_oif ^ VAR_1->flowidn_oif) |
  (VAR_0->flowidn_iif ^ VAR_1->flowidn_iif)) == 0;
}
