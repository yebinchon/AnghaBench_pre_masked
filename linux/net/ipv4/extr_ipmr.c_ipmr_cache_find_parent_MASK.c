
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mr_table {int dummy; } ;
struct mfc_cache_cmp_arg {int mfc_origin; int mfc_mcastgrp; } ;
struct mfc_cache {int dummy; } ;
typedef int __be32 ;


 struct mfc_cache* FUNC_0 (struct mr_table*,struct mfc_cache_cmp_arg*,int) ;

__attribute__((used)) static struct mfc_cache *FUNC_1(struct mr_table *VAR_0,
      __be32 VAR_1, __be32 VAR_2,
      int VAR_3)
{
 struct mfc_cache_cmp_arg VAR_4 = {
   .mfc_mcastgrp = VAR_2,
   .mfc_origin = VAR_1,
 };

 return FUNC_0(VAR_0, &VAR_4, VAR_3);
}
