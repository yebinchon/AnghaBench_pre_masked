
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
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(Page VAR_3,
      Size VAR_4,
      IndexTuple VAR_5,
      OffsetNumber VAR_6)
{
 BTPageOpaque VAR_7 = (BTPageOpaque) FUNC_3(VAR_3);
 IndexTupleData VAR_8;

 if (!FUNC_1(VAR_7) && VAR_6 == VAR_2)
 {
  VAR_8 = *VAR_5;
  VAR_8.t_info = sizeof(IndexTupleData);

  FUNC_0(&VAR_8, 0);
  VAR_5 = &VAR_8;
  VAR_4 = sizeof(IndexTupleData);
 }

 if (FUNC_2(VAR_3, (Item) VAR_5, VAR_4, VAR_6,
     0, 0) == VAR_1)
  FUNC_4(VAR_0, "failed to add item to the index page");
}
