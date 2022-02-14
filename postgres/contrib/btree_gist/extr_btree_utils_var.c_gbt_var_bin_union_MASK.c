
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* f_cmp ) (scalar_t__,scalar_t__,int ,int *) ;} ;
typedef TYPE_1__ gbtree_vinfo ;
struct TYPE_8__ {scalar_t__ lower; scalar_t__ upper; } ;
typedef int Oid ;
typedef TYPE_2__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ,int *) ;

void
FUNC_7(Datum *VAR_0, GBT_VARKEY *VAR_1, Oid VAR_2,
      const gbtree_vinfo *VAR_3, FmgrInfo *VAR_4)
{
 GBT_VARKEY_R VAR_5 = FUNC_3(VAR_1);
 GBT_VARKEY_R VAR_6;

 if (VAR_5.lower == VAR_5.upper)
 {
  GBT_VARKEY *VAR_7;

  VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_4);
  if (VAR_7 != VAR_1)
   VAR_5 = FUNC_3(VAR_7);
 }

 if (FUNC_0(*VAR_0))
 {
  GBT_VARKEY_R VAR_8 = FUNC_3((GBT_VARKEY *) FUNC_0(*VAR_0));
  bool VAR_9 = 0;

  VAR_6.lower = VAR_8.lower;
  VAR_6.upper = VAR_8.upper;

  if (VAR_3->f_cmp(VAR_8.lower, VAR_5.lower, VAR_2, VAR_4) > 0)
  {
   VAR_6.lower = VAR_5.lower;
   VAR_9 = 1;
  }

  if (VAR_3->f_cmp(VAR_8.upper, VAR_5.upper, VAR_2, VAR_4) < 0)
  {
   VAR_6.upper = VAR_5.upper;
   VAR_9 = 1;
  }

  if (VAR_9)
   *VAR_0 = FUNC_1(FUNC_2(&VAR_6));
 }
 else
 {
  VAR_6.lower = VAR_5.lower;
  VAR_6.upper = VAR_5.upper;
  *VAR_0 = FUNC_1(FUNC_2(&VAR_6));
 }
}
