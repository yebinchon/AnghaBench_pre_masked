
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_16__ {scalar_t__ (* f_cmp ) (scalar_t__,scalar_t__,int ,int *) ;} ;
typedef TYPE_3__ gbtree_vinfo ;
struct TYPE_18__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_17__ {TYPE_2__* rel; int key; } ;
struct TYPE_15__ {TYPE_1__* rd_att; } ;
struct TYPE_14__ {int natts; } ;
typedef int Oid ;
typedef TYPE_4__ GISTENTRY ;
typedef TYPE_5__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;
typedef int Datum ;


 double FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (scalar_t__) ;
 size_t VAR_2 ;
 size_t FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,TYPE_3__ const*) ;
 int FUNC_6 (int *,int *,int ,TYPE_3__ const*,int *) ;
 TYPE_5__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,TYPE_3__ const*,int *) ;
 size_t FUNC_9 (int *,TYPE_3__ const*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int ,int *) ;

float *
FUNC_12(float *VAR_3, const GISTENTRY *VAR_4, const GISTENTRY *VAR_5,
    Oid VAR_6, const gbtree_vinfo *VAR_7, FmgrInfo *VAR_8)
{
 GBT_VARKEY *VAR_9 = (GBT_VARKEY *) FUNC_1(VAR_4->key);
 GBT_VARKEY *VAR_10 = (GBT_VARKEY *) FUNC_1(VAR_5->key);
 GBT_VARKEY_R VAR_11,
    VAR_12;

 *VAR_3 = 0.0;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12.lower == VAR_12.upper)
 {
  GBT_VARKEY *VAR_13;

  VAR_13 = FUNC_8(VAR_10, VAR_7, VAR_8);
  if (VAR_13 != VAR_10)
   VAR_12 = FUNC_7(VAR_13);
 }
 VAR_11 = FUNC_7(VAR_9);

 if ((FUNC_4(VAR_11.lower) - VAR_2) == 0 && (FUNC_4(VAR_11.upper) - VAR_2) == 0)
  *VAR_3 = 0.0;
 else if (!((VAR_7->f_cmp(VAR_12.lower, VAR_11.lower, VAR_6, VAR_8) >= 0 ||
    FUNC_5(VAR_11.lower, VAR_12.lower, VAR_7)) &&
      (VAR_7->f_cmp(VAR_12.upper, VAR_11.upper, VAR_6, VAR_8) <= 0 ||
    FUNC_5(VAR_11.upper, VAR_12.upper, VAR_7))))
 {
  Datum VAR_14 = FUNC_2(0);
  double VAR_15;
  int32 VAR_16,
     VAR_17;

  FUNC_6(&VAR_14, VAR_9, VAR_6, VAR_7, VAR_8);
  VAR_16 = FUNC_9((GBT_VARKEY *) FUNC_1(VAR_14), VAR_7);
  FUNC_6(&VAR_14, VAR_10, VAR_6, VAR_7, VAR_8);
  VAR_17 = FUNC_9((GBT_VARKEY *) FUNC_1(VAR_14), VAR_7);

  if (VAR_17 < VAR_16)
  {
   VAR_15 = (VAR_16 - VAR_17);
  }
  else
  {
   GBT_VARKEY_R VAR_18 = FUNC_7((GBT_VARKEY *) FUNC_1(VAR_14));
   unsigned char VAR_19[4];

   VAR_19[0] = (unsigned char) (((FUNC_4(VAR_11.lower) - VAR_2) <= VAR_17) ? 0 : (FUNC_3(VAR_11.lower)[VAR_17]));
   VAR_19[1] = (unsigned char) (((FUNC_4(VAR_18.lower) - VAR_2) <= VAR_17) ? 0 : (FUNC_3(VAR_18.lower)[VAR_17]));
   VAR_19[2] = (unsigned char) (((FUNC_4(VAR_11.upper) - VAR_2) <= VAR_17) ? 0 : (FUNC_3(VAR_11.upper)[VAR_17]));
   VAR_19[3] = (unsigned char) (((FUNC_4(VAR_18.upper) - VAR_2) <= VAR_17) ? 0 : (FUNC_3(VAR_18.upper)[VAR_17]));
   VAR_15 = FUNC_0(VAR_19[0] - VAR_19[1]) + FUNC_0(VAR_19[3] - VAR_19[2]);
   VAR_15 /= 256.0;
  }

  *VAR_3 += VAR_1;
  *VAR_3 += (float) (VAR_15 / ((double) (VAR_16 + 1)));
  *VAR_3 *= (VAR_0 / (VAR_4->rel->rd_att->natts + 1));
 }

 return VAR_3;
}
