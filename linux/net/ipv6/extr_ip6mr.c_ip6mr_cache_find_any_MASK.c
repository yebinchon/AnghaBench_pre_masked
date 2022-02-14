
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mr_table {int dummy; } ;
struct in6_addr {int dummy; } ;
struct mfc6_cache_cmp_arg {struct in6_addr mf6c_mcastgrp; int mf6c_origin; } ;
struct mfc6_cache {int dummy; } ;
typedef int mifi_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 struct mfc6_cache* FUNC_1 (struct mr_table*,int ,struct mfc6_cache_cmp_arg*) ;
 struct mfc6_cache* FUNC_2 (struct mr_table*,int ) ;

__attribute__((used)) static struct mfc6_cache *FUNC_3(struct mr_table *VAR_1,
            struct in6_addr *VAR_2,
            mifi_t VAR_3)
{
 struct mfc6_cache_cmp_arg VAR_4 = {
  .mf6c_origin = VAR_0,
  .mf6c_mcastgrp = *VAR_2,
 };

 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_1, VAR_3);
 return FUNC_1(VAR_1, VAR_3, &VAR_4);
}
