
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mr_table {int dummy; } ;
struct mfc_cache_cmp_arg {scalar_t__ mfc_mcastgrp; scalar_t__ mfc_origin; } ;
struct mfc_cache {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mfc_cache* FUNC_1 (struct mr_table*,int,struct mfc_cache_cmp_arg*) ;
 struct mfc_cache* FUNC_2 (struct mr_table*,int) ;

__attribute__((used)) static struct mfc_cache *FUNC_3(struct mr_table *VAR_1,
          __be32 VAR_2, int VAR_3)
{
 struct mfc_cache_cmp_arg VAR_4 = {
   .mfc_mcastgrp = VAR_2,
   .mfc_origin = FUNC_0(VAR_0)
 };

 if (VAR_2 == FUNC_0(VAR_0))
  return FUNC_2(VAR_1, VAR_3);
 return FUNC_1(VAR_1, VAR_3, &VAR_4);
}
