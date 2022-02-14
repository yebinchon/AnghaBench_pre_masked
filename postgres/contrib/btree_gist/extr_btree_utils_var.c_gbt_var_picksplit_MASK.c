
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_18__ {scalar_t__ trnc; } ;
typedef TYPE_2__ gbtree_vinfo ;
struct TYPE_19__ {int * flinfo; int collation; TYPE_2__ const* tinfo; } ;
typedef TYPE_3__ gbt_vsrt_arg ;
typedef int bytea ;
struct TYPE_20__ {int i; int * t; } ;
typedef TYPE_4__ Vsrt ;
struct TYPE_23__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_22__ {int* spl_left; int* spl_right; size_t spl_nleft; size_t spl_nright; void* spl_rdatum; void* spl_ldatum; } ;
struct TYPE_21__ {int n; TYPE_1__* vector; } ;
struct TYPE_17__ {void* key; } ;
typedef int Oid ;
typedef int OffsetNumber ;
typedef TYPE_5__ GistEntryVector ;
typedef TYPE_6__ GIST_SPLITVEC ;
typedef TYPE_7__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;


 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (void**,int *,int ,TYPE_2__ const*,int *) ;
 TYPE_7__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,TYPE_2__ const*,int *) ;
 int FUNC_7 (int *,TYPE_2__ const*) ;
 int * FUNC_8 (int *,int ,TYPE_2__ const*) ;
 int VAR_1 ;
 int ** FUNC_9 (int) ;
 int FUNC_10 (void*,int,int,int ,void*) ;

GIST_SPLITVEC *
FUNC_11(const GistEntryVector *VAR_2, GIST_SPLITVEC *VAR_3,
      Oid VAR_4, const gbtree_vinfo *VAR_5, FmgrInfo *VAR_6)
{
 OffsetNumber VAR_7,
    VAR_8 = VAR_2->n - 1;
 Vsrt *VAR_9;
 int VAR_10 = 0,
    VAR_11;
 char *VAR_12;
 GBT_VARKEY **VAR_13 = ((void*)0);
 gbt_vsrt_arg VAR_14;

 VAR_9 = (Vsrt *) FUNC_9((VAR_8 + 1) * sizeof(Vsrt));
 VAR_11 = (VAR_8 + 2) * sizeof(OffsetNumber);
 VAR_3->spl_left = (OffsetNumber *) FUNC_9(VAR_11);
 VAR_3->spl_right = (OffsetNumber *) FUNC_9(VAR_11);
 VAR_3->spl_ldatum = FUNC_3(0);
 VAR_3->spl_rdatum = FUNC_3(0);
 VAR_3->spl_nleft = 0;
 VAR_3->spl_nright = 0;

 VAR_13 = FUNC_9(sizeof(bytea *) * (VAR_8 + 1));



 for (VAR_7 = VAR_0; VAR_7 <= VAR_8; VAR_7 = FUNC_2(VAR_7))
 {
  GBT_VARKEY_R VAR_15;

  VAR_12 = (char *) FUNC_0(VAR_2->vector[VAR_7].key);
  VAR_15 = FUNC_5((GBT_VARKEY *) VAR_12);
  if (VAR_15.lower == VAR_15.upper)
  {
   VAR_13[VAR_10] = FUNC_6((GBT_VARKEY *) VAR_12, VAR_5, VAR_6);
   VAR_9[VAR_7].t = VAR_13[VAR_10];
   if (VAR_13[VAR_10] != (GBT_VARKEY *) VAR_12)
    VAR_10++;
  }
  else
   VAR_9[VAR_7].t = (GBT_VARKEY *) VAR_12;
  VAR_9[VAR_7].i = VAR_7;
 }


 VAR_14.tinfo = VAR_5;
 VAR_14.collation = VAR_4;
 VAR_14.flinfo = VAR_6;
 FUNC_10((void *) &VAR_9[VAR_0],
     VAR_8 - VAR_0 + 1,
     sizeof(Vsrt),
     VAR_1,
     (void *) &VAR_14);



 for (VAR_7 = VAR_0; VAR_7 <= VAR_8; VAR_7 = FUNC_2(VAR_7))
 {
  if (VAR_7 <= (VAR_8 - VAR_0 + 1) / 2)
  {
   FUNC_4(&VAR_3->spl_ldatum, VAR_9[VAR_7].t, VAR_4, VAR_5, VAR_6);
   VAR_3->spl_left[VAR_3->spl_nleft] = VAR_9[VAR_7].i;
   VAR_3->spl_nleft++;
  }
  else
  {
   FUNC_4(&VAR_3->spl_rdatum, VAR_9[VAR_7].t, VAR_4, VAR_5, VAR_6);
   VAR_3->spl_right[VAR_3->spl_nright] = VAR_9[VAR_7].i;
   VAR_3->spl_nright++;
  }
 }


 if (VAR_5->trnc)
 {
  int32 VAR_16 = FUNC_7((GBT_VARKEY *) FUNC_0(VAR_3->spl_ldatum), VAR_5);
  int32 VAR_17 = FUNC_7((GBT_VARKEY *) FUNC_0(VAR_3->spl_rdatum), VAR_5);
  GBT_VARKEY *VAR_18;
  GBT_VARKEY *VAR_19;

  VAR_16 = FUNC_1(VAR_16, VAR_17);
  VAR_16++;

  VAR_18 = FUNC_8((GBT_VARKEY *) FUNC_0(VAR_3->spl_ldatum), VAR_16, VAR_5);
  VAR_19 = FUNC_8((GBT_VARKEY *) FUNC_0(VAR_3->spl_rdatum), VAR_16, VAR_5);
  VAR_3->spl_ldatum = FUNC_3(VAR_18);
  VAR_3->spl_rdatum = FUNC_3(VAR_19);
 }

 return VAR_3;
}
