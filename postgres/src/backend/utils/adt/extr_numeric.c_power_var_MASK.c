
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_21__ {scalar_t__ ndigits; scalar_t__ weight; int dscale; } ;
typedef TYPE_1__ NumericVar ;


 double FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,int) ;
 double FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__ const*,scalar_t__*) ;
 int FUNC_15 (TYPE_1__ const*,int,TYPE_1__*,int) ;
 int FUNC_16 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_17(const NumericVar *VAR_7, const NumericVar *VAR_8, NumericVar *VAR_9)
{
 NumericVar VAR_10;
 NumericVar VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 double VAR_15;


 if (VAR_8->ndigits == 0 || VAR_8->ndigits <= VAR_8->weight + 1)
 {

  int64 VAR_16;

  if (FUNC_14(VAR_8, &VAR_16))
  {
   int VAR_17 = (int) VAR_16;


   if ((int64) VAR_17 == VAR_16)
   {

    VAR_13 = VAR_5;
    VAR_13 = FUNC_1(VAR_13, VAR_7->dscale);
    VAR_13 = FUNC_1(VAR_13, VAR_4);
    VAR_13 = FUNC_2(VAR_13, VAR_2);

    FUNC_15(VAR_7, VAR_17, VAR_9, VAR_13);
    return;
   }
  }
 }





 if (FUNC_3(VAR_7, &VAR_6) == 0)
 {
  FUNC_16(&VAR_6, VAR_9);
  VAR_9->dscale = VAR_5;
  return;
 }

 FUNC_10(&VAR_10);
 FUNC_10(&VAR_11);
 VAR_12 = FUNC_7(VAR_7);

 VAR_14 = 8 - VAR_12;
 VAR_14 = FUNC_1(VAR_14, VAR_4);
 VAR_14 = FUNC_2(VAR_14, VAR_2);

 FUNC_11(VAR_7, &VAR_10, VAR_14);

 FUNC_12(&VAR_10, VAR_8, &VAR_11, VAR_14);

 VAR_15 = FUNC_13(&VAR_11);


 if (FUNC_0(VAR_15) > VAR_3 * 3.01)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("value overflows numeric format")));

 VAR_15 *= 0.434294481903252;


 VAR_13 = VAR_5 - (int) VAR_15;
 VAR_13 = FUNC_1(VAR_13, VAR_7->dscale);
 VAR_13 = FUNC_1(VAR_13, VAR_8->dscale);
 VAR_13 = FUNC_1(VAR_13, VAR_4);
 VAR_13 = FUNC_2(VAR_13, VAR_2);


 VAR_14 = VAR_13 + (int) VAR_15 - VAR_12 + 8;
 VAR_14 = FUNC_1(VAR_14, VAR_4);



 FUNC_11(VAR_7, &VAR_10, VAR_14);

 FUNC_12(&VAR_10, VAR_8, &VAR_11, VAR_14);

 FUNC_8(&VAR_11, VAR_9, VAR_13);

 FUNC_9(&VAR_11);
 FUNC_9(&VAR_10);
}
