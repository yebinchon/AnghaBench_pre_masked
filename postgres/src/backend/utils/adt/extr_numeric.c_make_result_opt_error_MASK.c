
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int n_sign_dscale; int n_weight; } ;
struct TYPE_14__ {int n_header; } ;
struct TYPE_16__ {int n_header; TYPE_2__ n_long; TYPE_1__ n_short; } ;
struct TYPE_18__ {TYPE_3__ choice; } ;
struct TYPE_17__ {int weight; int sign; int ndigits; int dscale; scalar_t__* digits; } ;
typedef scalar_t__ Size ;
typedef TYPE_4__ NumericVar ;
typedef scalar_t__ NumericDigit ;
typedef TYPE_5__* Numeric ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__) ;
 int FUNC_7 (char*,TYPE_5__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static Numeric
FUNC_13(const NumericVar *VAR_13, bool *VAR_14)
{
 Numeric VAR_15;
 NumericDigit *VAR_16 = VAR_13->digits;
 int VAR_17 = VAR_13->weight;
 int VAR_18 = VAR_13->sign;
 int VAR_19;
 Size VAR_20;

 if (VAR_14)
  *VAR_14 = 0;

 if (VAR_18 == VAR_5)
 {
  VAR_15 = (Numeric) FUNC_12(VAR_4);

  FUNC_6(VAR_15, VAR_4);
  VAR_15->choice.n_header = VAR_5;


  FUNC_7("make_result()", VAR_15);
  return VAR_15;
 }

 VAR_19 = VAR_13->ndigits;


 while (VAR_19 > 0 && *VAR_16 == 0)
 {
  VAR_16++;
  VAR_17--;
  VAR_19--;
 }

 while (VAR_19 > 0 && VAR_16[VAR_19 - 1] == 0)
  VAR_19--;


 if (VAR_19 == 0)
 {
  VAR_17 = 0;
  VAR_18 = VAR_7;
 }


 if (FUNC_1(VAR_13->dscale, VAR_17))
 {
  VAR_20 = VAR_4 + VAR_19 * sizeof(NumericDigit);
  VAR_15 = (Numeric) FUNC_12(VAR_20);
  FUNC_6(VAR_15, VAR_20);
  VAR_15->choice.n_short.n_header =
   (VAR_18 == VAR_6 ? (VAR_8 | VAR_10)
    : VAR_8)
   | (VAR_13->dscale << VAR_9)
   | (VAR_17 < 0 ? VAR_12 : 0)
   | (VAR_17 & VAR_11);
 }
 else
 {
  VAR_20 = VAR_3 + VAR_19 * sizeof(NumericDigit);
  VAR_15 = (Numeric) FUNC_12(VAR_20);
  FUNC_6(VAR_15, VAR_20);
  VAR_15->choice.n_long.n_sign_dscale =
   VAR_18 | (VAR_13->dscale & VAR_2);
  VAR_15->choice.n_long.n_weight = VAR_17;
 }

 FUNC_0(FUNC_4(VAR_15) == VAR_19);
 if (VAR_19 > 0)
  FUNC_11(FUNC_2(VAR_15), VAR_16, VAR_19 * sizeof(NumericDigit));


 if (FUNC_5(VAR_15) != VAR_17 ||
  FUNC_3(VAR_15) != VAR_13->dscale)
 {
  if (VAR_14)
  {
   *VAR_14 = 1;
   return ((void*)0);
  }
  else
  {
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_10("value overflows numeric format")));
  }
 }

 FUNC_7("make_result()", VAR_15);
 return VAR_15;
}
