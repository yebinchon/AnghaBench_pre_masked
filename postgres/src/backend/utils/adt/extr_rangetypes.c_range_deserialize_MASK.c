
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_8__ {scalar_t__ type_id; TYPE_1__* rngelemtype; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_9__ {int infinite; int inclusive; int lower; void* val; } ;
struct TYPE_7__ {int typbyval; char typalign; int typlen; } ;
typedef int RangeType ;
typedef TYPE_3__ RangeBound ;
typedef scalar_t__ Pointer ;
typedef void* Datum ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,char,int ,scalar_t__) ;
 void* FUNC_7 (scalar_t__,int,int ) ;

void
FUNC_8(TypeCacheEntry *VAR_5, const RangeType *VAR_6,
      RangeBound *VAR_7, RangeBound *VAR_8, bool *VAR_9)
{
 char VAR_10;
 int16 VAR_11;
 bool VAR_12;
 char VAR_13;
 Pointer VAR_14;
 Datum VAR_15;
 Datum VAR_16;


 FUNC_0(FUNC_3(VAR_6) == VAR_5->type_id);


 VAR_10 = *((const char *) VAR_6 + FUNC_4(VAR_6) - 1);


 VAR_11 = VAR_5->rngelemtype->typlen;
 VAR_12 = VAR_5->rngelemtype->typbyval;
 VAR_13 = VAR_5->rngelemtype->typalign;


 VAR_14 = (Pointer) (VAR_6 + 1);


 if (FUNC_1(VAR_10))
 {

  VAR_15 = FUNC_7(VAR_14, VAR_12, VAR_11);
  VAR_14 = (Pointer) FUNC_5(VAR_14, VAR_11, VAR_14);
 }
 else
  VAR_15 = (Datum) 0;


 if (FUNC_2(VAR_10))
 {
  VAR_14 = (Pointer) FUNC_6(VAR_14, VAR_13, VAR_11, VAR_14);
  VAR_16 = FUNC_7(VAR_14, VAR_12, VAR_11);

 }
 else
  VAR_16 = (Datum) 0;



 *VAR_9 = (VAR_10 & VAR_0) != 0;

 VAR_7->val = VAR_15;
 VAR_7->infinite = (VAR_10 & VAR_2) != 0;
 VAR_7->inclusive = (VAR_10 & VAR_1) != 0;
 VAR_7->lower = 1;

 VAR_8->val = VAR_16;
 VAR_8->infinite = (VAR_10 & VAR_4) != 0;
 VAR_8->inclusive = (VAR_10 & VAR_3) != 0;
 VAR_8->lower = 0;
}
