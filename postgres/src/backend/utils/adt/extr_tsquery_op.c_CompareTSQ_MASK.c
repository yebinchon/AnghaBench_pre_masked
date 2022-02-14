
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__* TSQuery ;
typedef int QTNode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(TSQuery VAR_0, TSQuery VAR_1)
{
 if (VAR_0->size != VAR_1->size)
 {
  return (VAR_0->size < VAR_1->size) ? -1 : 1;
 }
 else if (FUNC_5(VAR_0) != FUNC_5(VAR_1))
 {
  return (FUNC_5(VAR_0) < FUNC_5(VAR_1)) ? -1 : 1;
 }
 else if (VAR_0->size != 0)
 {
  QTNode *VAR_2 = FUNC_2(FUNC_1(VAR_0), FUNC_0(VAR_0));
  QTNode *VAR_3 = FUNC_2(FUNC_1(VAR_1), FUNC_0(VAR_1));
  int VAR_4 = FUNC_4(VAR_2, VAR_3);

  FUNC_3(VAR_2);
  FUNC_3(VAR_3);

  return VAR_4;
 }

 return 0;
}
