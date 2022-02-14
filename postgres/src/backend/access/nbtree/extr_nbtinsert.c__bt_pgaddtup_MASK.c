
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_info; } ;
typedef int Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef TYPE_1__ IndexTupleData ;
typedef TYPE_1__* IndexTuple ;
typedef int BTPageOpaque ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,scalar_t__,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(Page VAR_1,
    Size VAR_2,
    IndexTuple VAR_3,
    OffsetNumber VAR_4)
{
 BTPageOpaque VAR_5 = (BTPageOpaque) FUNC_4(VAR_1);
 IndexTupleData VAR_6;

 if (!FUNC_2(VAR_5) && VAR_4 == FUNC_1(VAR_5))
 {
  VAR_6 = *VAR_3;
  VAR_6.t_info = sizeof(IndexTupleData);

  FUNC_0(&VAR_6, 0);
  VAR_3 = &VAR_6;
  VAR_2 = sizeof(IndexTupleData);
 }

 if (FUNC_3(VAR_1, (Item) VAR_3, VAR_2, VAR_4,
     0, 0) == VAR_0)
  return 0;

 return 1;
}
