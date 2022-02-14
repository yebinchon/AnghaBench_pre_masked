
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t_self; int t_len; scalar_t__ t_data; } ;
struct TYPE_4__ {int t_ctid; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9(Relation VAR_2,
      Buffer VAR_3,
      HeapTuple VAR_4,
      bool VAR_5)
{
 Page VAR_6;
 OffsetNumber VAR_7;





 FUNC_0(!VAR_5 || FUNC_3(VAR_4->t_data));


 VAR_6 = FUNC_2(VAR_3);

 VAR_7 = FUNC_5(VAR_6, (Item) VAR_4->t_data,
       VAR_4->t_len, VAR_0, 0, 1);

 if (VAR_7 == VAR_0)
  FUNC_8(VAR_1, "failed to add tuple to page");


 FUNC_4(&(VAR_4->t_self), FUNC_1(VAR_3), VAR_7);






 if (!VAR_5)
 {
  ItemId VAR_8 = FUNC_7(VAR_6, VAR_7);
  HeapTupleHeader VAR_9 = (HeapTupleHeader) FUNC_6(VAR_6, VAR_8);

  VAR_9->t_ctid = VAR_4->t_self;
 }
}
