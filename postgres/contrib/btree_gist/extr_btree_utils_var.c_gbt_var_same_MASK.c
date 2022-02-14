
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* f_cmp ) (int ,int ,int ,int *) ;} ;
typedef TYPE_1__ gbtree_vinfo ;
struct TYPE_6__ {int upper; int lower; } ;
typedef int Oid ;
typedef TYPE_2__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;

bool
FUNC_4(Datum VAR_0, Datum VAR_1, Oid VAR_2,
    const gbtree_vinfo *VAR_3, FmgrInfo *VAR_4)
{
 GBT_VARKEY *VAR_5 = (GBT_VARKEY *) FUNC_0(VAR_0);
 GBT_VARKEY *VAR_6 = (GBT_VARKEY *) FUNC_0(VAR_1);
 GBT_VARKEY_R VAR_7,
    VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = FUNC_1(VAR_6);

 return (VAR_3->f_cmp(VAR_7, VAR_8, VAR_2, VAR_4) == 0 &&
   VAR_3->f_cmp(VAR_7, VAR_8, VAR_2, VAR_4) == 0);
}
