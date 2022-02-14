
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int dscale; scalar_t__ ndigits; int weight; } ;
typedef TYPE_1__ NumericVar ;


 double FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ const VAR_6 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 double FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(const NumericVar *VAR_7, NumericVar *VAR_8, int VAR_9)
{
 NumericVar VAR_10;
 NumericVar VAR_11;
 NumericVar VAR_12;
 double VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_8(&VAR_10);
 FUNC_8(&VAR_11);
 FUNC_8(&VAR_12);

 FUNC_12(VAR_7, &VAR_10);





 VAR_13 = FUNC_10(&VAR_10);



 if (FUNC_0(VAR_13) >= VAR_3 * 3)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("value overflows numeric format")));


 VAR_14 = (int) (VAR_13 * 0.434294481903252);





 if (FUNC_0(VAR_13) > 0.01)
 {
  NumericVar VAR_18;

  FUNC_8(&VAR_18);
  FUNC_12(&VAR_6, &VAR_18);

  VAR_15 = 1;
  VAR_13 /= 2;

  while (FUNC_0(VAR_13) > 0.01)
  {
   VAR_15++;
   VAR_13 /= 2;
   FUNC_2(&VAR_18, &VAR_18, &VAR_18);
  }

  VAR_17 = VAR_10.dscale + VAR_15;
  FUNC_3(&VAR_10, &VAR_18, &VAR_10, VAR_17, 1);

  FUNC_7(&VAR_18);
 }
 else
  VAR_15 = 0;
 VAR_16 = 1 + VAR_14 + VAR_9 + (int) (VAR_15 * 0.301029995663981);
 VAR_16 = FUNC_1(VAR_16, 0) + 8;

 VAR_17 = VAR_16 - 1;
 FUNC_2(&VAR_5, &VAR_10, VAR_8);

 FUNC_9(&VAR_10, &VAR_10, &VAR_11, VAR_17);
 FUNC_12(&VAR_6, &VAR_12);
 FUNC_3(&VAR_11, &VAR_12, &VAR_11, VAR_17, 1);

 while (VAR_11.ndigits != 0)
 {
  FUNC_2(VAR_8, &VAR_11, VAR_8);

  FUNC_9(&VAR_11, &VAR_10, &VAR_11, VAR_17);
  FUNC_2(&VAR_12, &VAR_5, &VAR_12);
  FUNC_3(&VAR_11, &VAR_12, &VAR_11, VAR_17, 1);
 }






 while (VAR_15-- > 0)
 {
  VAR_17 = VAR_16 - VAR_8->weight * 2 * VAR_0;
  VAR_17 = FUNC_1(VAR_17, VAR_4);
  FUNC_9(VAR_8, VAR_8, VAR_8, VAR_17);
 }


 FUNC_11(VAR_8, VAR_9);

 FUNC_7(&VAR_10);
 FUNC_7(&VAR_11);
 FUNC_7(&VAR_12);
}
