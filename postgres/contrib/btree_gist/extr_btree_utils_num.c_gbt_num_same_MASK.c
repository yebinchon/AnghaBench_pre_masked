
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ (* f_eq ) (int const*,int const*,int *) ;} ;
typedef TYPE_1__ gbtree_ninfo ;
struct TYPE_5__ {int const* upper; int const* lower; } ;
typedef TYPE_2__ GBT_NUMKEY_R ;
typedef int GBT_NUMKEY ;
typedef int FmgrInfo ;


 scalar_t__ FUNC_0 (int const*,int const*,int *) ;
 scalar_t__ FUNC_1 (int const*,int const*,int *) ;

bool
FUNC_2(const GBT_NUMKEY *VAR_0, const GBT_NUMKEY *VAR_1, const gbtree_ninfo *VAR_2, FmgrInfo *VAR_3)
{
 GBT_NUMKEY_R VAR_4,
    VAR_5;

 VAR_4 = &(VAR_0[0]);
 VAR_4 = &(VAR_0[VAR_2->size]);
 VAR_5 = &(VAR_1[0]);
 VAR_5 = &(VAR_1[VAR_2->size]);

 return (VAR_2->f_eq(VAR_4, VAR_5, VAR_3) &&
   VAR_2->f_eq(VAR_4, VAR_5, VAR_3));
}
