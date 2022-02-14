
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_compare_arg {struct mfc_cache_cmp_arg* key; } ;
struct mfc_cache_cmp_arg {scalar_t__ mfc_mcastgrp; scalar_t__ mfc_origin; } ;
struct mfc_cache {scalar_t__ mfc_mcastgrp; scalar_t__ mfc_origin; } ;



__attribute__((used)) static inline int FUNC_0(struct rhashtable_compare_arg *VAR_0,
    const void *VAR_1)
{
 const struct mfc_cache_cmp_arg *VAR_2 = VAR_0->key;
 struct mfc_cache *VAR_3 = (struct mfc_cache *)VAR_1;

 return VAR_2->mfc_mcastgrp != VAR_3->mfc_mcastgrp ||
        VAR_2->mfc_origin != VAR_3->mfc_origin;
}
