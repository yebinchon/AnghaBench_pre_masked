
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {scalar_t__ trnc; } ;
typedef TYPE_2__ gbtree_vinfo ;
struct TYPE_11__ {int n; TYPE_1__* vector; } ;
struct TYPE_9__ {int key; } ;
typedef int Oid ;
typedef TYPE_3__ GistEntryVector ;
typedef int GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,TYPE_2__ const*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__ const*) ;
 int * FUNC_6 (int *,int,TYPE_2__ const*) ;

GBT_VARKEY *
FUNC_7(const GistEntryVector *VAR_0, int32 *VAR_1, Oid VAR_2,
     const gbtree_vinfo *VAR_3, FmgrInfo *VAR_4)
{
 int VAR_5 = 0,
    VAR_6 = VAR_0->n;
 GBT_VARKEY *VAR_7;
 Datum VAR_8;
 GBT_VARKEY_R VAR_9;

 *VAR_1 = sizeof(GBT_VARKEY);

 VAR_7 = (GBT_VARKEY *) FUNC_0(VAR_0->vector[0].key);
 VAR_9 = FUNC_4(VAR_7);
 VAR_8 = FUNC_1(FUNC_3(&VAR_9));

 for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++)
 {
  VAR_7 = (GBT_VARKEY *) FUNC_0(VAR_0->vector[VAR_5].key);
  FUNC_2(&VAR_8, VAR_7, VAR_2, VAR_3, VAR_4);
 }



 if (VAR_3->trnc)
 {
  int32 VAR_10;
  GBT_VARKEY *VAR_11 = ((void*)0);

  VAR_10 = FUNC_5((GBT_VARKEY *) FUNC_0(VAR_8), VAR_3);
  VAR_11 = FUNC_6((GBT_VARKEY *) FUNC_0(VAR_8), VAR_10 + 1, VAR_3);

  VAR_8 = FUNC_1(VAR_11);
 }

 return ((GBT_VARKEY *) FUNC_0(VAR_8));
}
