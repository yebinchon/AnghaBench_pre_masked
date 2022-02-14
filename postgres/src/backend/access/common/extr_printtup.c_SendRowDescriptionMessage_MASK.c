
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_5__ {int natts; } ;
typedef int StringInfo ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(StringInfo VAR_1, TupleDesc VAR_2,
        List *VAR_3, int16 *VAR_4)
{
 int VAR_5 = VAR_2->natts;
 int VAR_6 = FUNC_0(VAR_0);


 FUNC_3(VAR_1, 'T');

 FUNC_5(VAR_1, VAR_5);

 if (VAR_6 >= 3)
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_4(VAR_1);
}
