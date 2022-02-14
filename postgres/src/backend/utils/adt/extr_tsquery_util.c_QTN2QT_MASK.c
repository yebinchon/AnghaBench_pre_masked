
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int curoperand; int operand; int curitem; } ;
struct TYPE_8__ {int size; } ;
typedef TYPE_1__* TSQuery ;
typedef int QTNode ;
typedef TYPE_2__ QTN2QTState ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (int) ;

TSQuery
FUNC_11(QTNode *VAR_2)
{
 TSQuery VAR_3;
 int VAR_4;
 int VAR_5 = 0,
    VAR_6 = 0;
 QTN2QTState VAR_7;

 FUNC_5(VAR_2, &VAR_5, &VAR_6);

 if (FUNC_4(VAR_6, VAR_5))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("tsquery is too large")));
 VAR_4 = FUNC_0(VAR_6, VAR_5);

 VAR_3 = (TSQuery) FUNC_10(VAR_4);
 FUNC_3(VAR_3, VAR_4);
 VAR_3->size = VAR_6;

 VAR_7.curitem = FUNC_2(VAR_3);
 VAR_7.operand = VAR_7.curoperand = FUNC_1(VAR_3);

 FUNC_9(&VAR_7, VAR_2);
 return VAR_3;
}
