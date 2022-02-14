
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mr_table {int dummy; } ;
struct in6_addr {int dummy; } ;
struct mfc6_cache_cmp_arg {struct in6_addr const mf6c_mcastgrp; struct in6_addr const mf6c_origin; } ;
struct mfc6_cache {int dummy; } ;


 struct mfc6_cache* FUNC_0 (struct mr_table*,struct mfc6_cache_cmp_arg*,int) ;

__attribute__((used)) static struct mfc6_cache *
FUNC_1(struct mr_table *VAR_0,
   const struct in6_addr *VAR_1,
   const struct in6_addr *VAR_2,
   int VAR_3)
{
 struct mfc6_cache_cmp_arg VAR_4 = {
  .mf6c_origin = *VAR_1,
  .mf6c_mcastgrp = *VAR_2,
 };

 return FUNC_0(VAR_0, &VAR_4, VAR_3);
}
