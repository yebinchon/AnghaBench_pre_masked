
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ dscale; } ;
typedef TYPE_1__ NumericVar ;
typedef int Numeric ;


 int FUNC_0 (TYPE_1__*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(Numeric VAR_1, Numeric VAR_2, Numeric VAR_3,
      const NumericVar *VAR_4, NumericVar *VAR_5)
{
 NumericVar VAR_6;
 NumericVar VAR_7;
 NumericVar VAR_8;

 FUNC_5(VAR_2, &VAR_6);
 FUNC_5(VAR_3, &VAR_7);
 FUNC_5(VAR_1, &VAR_8);

 if (FUNC_1(&VAR_6, &VAR_7) < 0)
 {
  FUNC_8(&VAR_8, &VAR_6, &VAR_8);
  FUNC_8(&VAR_7, &VAR_6, &VAR_7);
  FUNC_2(&VAR_8, &VAR_7, VAR_5,
    FUNC_7(&VAR_8, &VAR_7), 1);
 }
 else
 {
  FUNC_8(&VAR_6, &VAR_8, &VAR_8);
  FUNC_8(&VAR_6, &VAR_7, &VAR_6);
  FUNC_2(&VAR_8, &VAR_6, VAR_5,
    FUNC_7(&VAR_8, &VAR_6), 1);
 }

 FUNC_6(VAR_5, VAR_4, VAR_5,
   VAR_5->dscale + VAR_4->dscale);
 FUNC_0(VAR_5, &VAR_0, VAR_5);
 FUNC_3(VAR_5, VAR_5);

 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
 FUNC_4(&VAR_8);
}
