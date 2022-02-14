
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_family {unsigned int n_mcgrps; unsigned int mcgrp_offset; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ,unsigned int,int ) ;

int FUNC_2(const struct genl_family *VAR_1,
       struct sk_buff *VAR_2, u32 VAR_3,
       unsigned int VAR_4, gfp_t VAR_5)
{
 if (FUNC_0(VAR_4 >= VAR_1->n_mcgrps))
  return -VAR_0;
 VAR_4 = VAR_1->mcgrp_offset + VAR_4;
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
