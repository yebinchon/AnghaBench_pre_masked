
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_8__ {int includes_all_transactions; } ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ start_decoding_at; scalar_t__ snapshot; int reorder; int xmax; TYPE_1__ committed; scalar_t__ building_full_snapshot; } ;
typedef TYPE_2__ SnapBuild ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*,int ,...) ;

void
FUNC_16(SnapBuild *VAR_6, XLogRecPtr VAR_7, TransactionId VAR_8,
       int VAR_9, TransactionId *VAR_10)
{
 int VAR_11;

 bool VAR_12 = 0;
 bool VAR_13 = 0;
 bool VAR_14 = 0;

 TransactionId VAR_15 = VAR_8;





 if (VAR_6->state == VAR_5 ||
  (VAR_6->state == VAR_2 &&
   FUNC_14(VAR_8, FUNC_8(VAR_6))))
 {

  if (VAR_6->start_decoding_at <= VAR_7)
   VAR_6->start_decoding_at = VAR_7 + 1;
  return;
 }

 if (VAR_6->state < VAR_3)
 {

  if (VAR_6->start_decoding_at <= VAR_7)
   VAR_6->start_decoding_at = VAR_7 + 1;





  if (VAR_6->building_full_snapshot)
  {
   VAR_13 = 1;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
 {
  TransactionId VAR_16 = VAR_10[VAR_11];





  if (FUNC_4(VAR_6->reorder, VAR_16))
  {
   VAR_14 = 1;
   VAR_12 = 1;

   FUNC_15(VAR_0, "found subtransaction %u:%u with catalog changes",
     VAR_8, VAR_16);

   FUNC_5(VAR_6, VAR_16);

   if (FUNC_1(VAR_16, VAR_15))
    VAR_15 = VAR_16;
  }







  else if (VAR_13)
  {
   FUNC_5(VAR_6, VAR_16);
   if (FUNC_1(VAR_16, VAR_15))
    VAR_15 = VAR_16;
  }
 }


 if (FUNC_4(VAR_6->reorder, VAR_8))
 {
  FUNC_15(VAR_1, "found top level transaction %u, with catalog changes",
    VAR_8);
  VAR_12 = 1;
  VAR_13 = 1;
  FUNC_5(VAR_6, VAR_8);
 }
 else if (VAR_14)
 {

  FUNC_5(VAR_6, VAR_8);
 }
 else if (VAR_13)
 {
  FUNC_15(VAR_1, "forced transaction %u to do timetravel", VAR_8);

  FUNC_5(VAR_6, VAR_8);
 }

 if (!VAR_13)
 {

  VAR_6->committed.includes_all_transactions = 0;
 }

 FUNC_0(!VAR_12 || VAR_13);






 if (VAR_13 &&
  (!FUNC_13(VAR_6->xmax) ||
   FUNC_12(VAR_15, VAR_6->xmax)))
 {
  VAR_6->xmax = VAR_15;
  FUNC_11(VAR_6->xmax);
 }


 if (VAR_12)
 {




  if (VAR_6->state < VAR_4)
   return;






  if (VAR_6->snapshot)
   FUNC_9(VAR_6->snapshot);

  VAR_6->snapshot = FUNC_6(VAR_6);


  if (!FUNC_3(VAR_6->reorder, VAR_8))
  {
   FUNC_10(VAR_6->snapshot);
   FUNC_2(VAR_6->reorder, VAR_8, VAR_7,
           VAR_6->snapshot);
  }


  FUNC_10(VAR_6->snapshot);


  FUNC_7(VAR_6, VAR_7);
 }
}
