
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ N; scalar_t__ NaNcount; int sumX2; int sumX; } ;
struct TYPE_27__ {int dscale; } ;
typedef TYPE_1__ const NumericVar ;
typedef TYPE_2__ NumericAggState ;
typedef int * Numeric ;


 int FUNC_0 (int *,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 TYPE_1__ const VAR_0 ;
 TYPE_1__ const VAR_1 ;
 TYPE_1__ const VAR_2 ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int,int) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (scalar_t__,TYPE_1__ const*) ;
 int * FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static Numeric
FUNC_11(NumericAggState *VAR_3,
      bool VAR_4, bool VAR_5,
      bool *VAR_6)
{
 Numeric VAR_7;
 NumericVar VAR_8,
    VAR_9,
    VAR_10,
    VAR_11;
 const NumericVar *VAR_12;
 int VAR_13;


 if (VAR_3 == ((void*)0) || (VAR_3->N + VAR_3->NaNcount) == 0)
 {
  *VAR_6 = 1;
  return ((void*)0);
 }

 *VAR_6 = 0;

 if (VAR_3->NaNcount > 0)
  return FUNC_6(&VAR_0);

 FUNC_4(&VAR_8);
 FUNC_4(&VAR_9);
 FUNC_4(&VAR_10);

 FUNC_5(VAR_3->N, &VAR_8);
 FUNC_0(&(VAR_3->sumX), &VAR_9);
 FUNC_0(&(VAR_3->sumX2), &VAR_10);





 if (VAR_5)
  VAR_12 = &VAR_1;
 else
  VAR_12 = &VAR_2;

 if (FUNC_1(&VAR_8, VAR_12) <= 0)
 {
  *VAR_6 = 1;
  return ((void*)0);
 }

 FUNC_4(&VAR_11);
 FUNC_10(&VAR_8, &VAR_1, &VAR_11);


 VAR_13 = VAR_9.dscale * 2;

 FUNC_7(&VAR_9, &VAR_9, &VAR_9, VAR_13);
 FUNC_7(&VAR_8, &VAR_10, &VAR_10, VAR_13);
 FUNC_10(&VAR_10, &VAR_9, &VAR_10);

 if (FUNC_1(&VAR_10, &VAR_2) <= 0)
 {

  VAR_7 = FUNC_6(&VAR_2);
 }
 else
 {
  if (VAR_5)
   FUNC_7(&VAR_8, &VAR_11, &VAR_11, 0);
  else
   FUNC_7(&VAR_8, &VAR_8, &VAR_11, 0);
  VAR_13 = FUNC_8(&VAR_10, &VAR_11);
  FUNC_2(&VAR_10, &VAR_11, &VAR_9, VAR_13, 1);
  if (!VAR_4)
   FUNC_9(&VAR_9, &VAR_9, VAR_13);

  VAR_7 = FUNC_6(&VAR_9);
 }

 FUNC_3(&VAR_11);
 FUNC_3(&VAR_9);
 FUNC_3(&VAR_10);

 return VAR_7;
}
