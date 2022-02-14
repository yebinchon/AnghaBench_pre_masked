
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_cid; } ;
struct TYPE_8__ {TYPE_1__ t_field3; } ;
struct TYPE_9__ {TYPE_2__ t_heap; } ;
struct TYPE_10__ {int t_ctid; TYPE_3__ t_choice; int t_infomask; } ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_4__* HeapTupleHeader ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,int ,int) ;

void
FUNC_14(char *VAR_4, BlockNumber VAR_5)
{
 Page VAR_6 = (Page) VAR_4;
 OffsetNumber VAR_7;

 FUNC_11(VAR_6);

 FUNC_10(VAR_6);
 FUNC_12(VAR_6);

 for (VAR_7 = 1; VAR_7 <= FUNC_9(VAR_6); VAR_7++)
 {
  ItemId VAR_8 = FUNC_8(VAR_6, VAR_7);
  char *VAR_9;

  VAR_9 = (char *) (VAR_6 + FUNC_3(VAR_8));

  if (FUNC_5(VAR_8))
  {
   HeapTupleHeader VAR_10 = (HeapTupleHeader) VAR_9;






   if (!FUNC_1(VAR_10))
    VAR_10->t_infomask &= ~VAR_0;
   else
   {

    VAR_10->t_infomask &= ~VAR_2;
    VAR_10->t_infomask &= ~VAR_1;
   }





   VAR_10->t_choice.t_heap.t_field3.t_cid = VAR_3;
   if (FUNC_0(VAR_10))
    FUNC_6(&VAR_10->t_ctid, VAR_5, VAR_7);







  }





  if (FUNC_4(VAR_8))
  {
   int VAR_11 = FUNC_2(VAR_8);
   int VAR_12 = FUNC_7(VAR_11) - VAR_11;

   if (VAR_12 > 0)
    FUNC_13(VAR_9 + VAR_11, VAR_3, VAR_12);
  }
 }
}
