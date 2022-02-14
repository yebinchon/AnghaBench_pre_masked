
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int weight; scalar_t__ ndigits; } ;
typedef TYPE_1__ const NumericVar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,int *) ;
 TYPE_1__ const VAR_4 ;
 int VAR_5 ;
 TYPE_1__ const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_12 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_13(const NumericVar *VAR_9, NumericVar *VAR_10, int VAR_11)
{
 NumericVar VAR_12;
 NumericVar VAR_13;
 NumericVar VAR_14;
 NumericVar VAR_15;
 NumericVar VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_9, &VAR_7);
 if (VAR_18 == 0)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("cannot take logarithm of zero")));
 else if (VAR_18 < 0)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("cannot take logarithm of a negative number")));

 FUNC_8(&VAR_12);
 FUNC_8(&VAR_13);
 FUNC_8(&VAR_14);
 FUNC_8(&VAR_15);
 FUNC_8(&VAR_16);

 FUNC_10(VAR_9, &VAR_12);
 FUNC_10(&VAR_6, &VAR_16);
 while (FUNC_2(&VAR_12, &VAR_8) <= 0)
 {
  VAR_17 = VAR_11 - VAR_12.weight * VAR_0 / 2 + 8;
  VAR_17 = FUNC_0(VAR_17, VAR_3);
  FUNC_11(&VAR_12, &VAR_12, VAR_17);
  FUNC_9(&VAR_16, &VAR_6, &VAR_16, 0);
 }
 while (FUNC_2(&VAR_12, &VAR_5) >= 0)
 {
  VAR_17 = VAR_11 - VAR_12.weight * VAR_0 / 2 + 8;
  VAR_17 = FUNC_0(VAR_17, VAR_3);
  FUNC_11(&VAR_12, &VAR_12, VAR_17);
  FUNC_9(&VAR_16, &VAR_6, &VAR_16, 0);
 }
 VAR_17 = VAR_11 + 8;

 FUNC_12(&VAR_12, &VAR_4, VAR_10);
 FUNC_1(&VAR_12, &VAR_4, &VAR_15);
 FUNC_3(VAR_10, &VAR_15, VAR_10, VAR_17, 1);
 FUNC_10(VAR_10, &VAR_13);
 FUNC_9(VAR_10, VAR_10, &VAR_12, VAR_17);

 FUNC_10(&VAR_4, &VAR_14);

 for (;;)
 {
  FUNC_1(&VAR_14, &VAR_6, &VAR_14);
  FUNC_9(&VAR_13, &VAR_12, &VAR_13, VAR_17);
  FUNC_3(&VAR_13, &VAR_14, &VAR_15, VAR_17, 1);

  if (VAR_15.ndigits == 0)
   break;

  FUNC_1(VAR_10, &VAR_15, VAR_10);

  if (VAR_15.weight < (VAR_10->weight - VAR_17 * 2 / VAR_0))
   break;
 }


 FUNC_9(VAR_10, &VAR_16, VAR_10, VAR_11);

 FUNC_7(&VAR_12);
 FUNC_7(&VAR_13);
 FUNC_7(&VAR_14);
 FUNC_7(&VAR_15);
 FUNC_7(&VAR_16);
}
