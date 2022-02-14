
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nitems; int latestRemovedXid; } ;
typedef TYPE_1__ xl_btree_delete ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_4__ {int btpo_flags; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Buffer ;
typedef TYPE_2__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ,int ,int ,int *,int) ;

void
FUNC_15(Relation VAR_6, Buffer VAR_7,
     OffsetNumber *VAR_8, int VAR_9,
     Relation VAR_10)
{
 Page VAR_11 = FUNC_1(VAR_7);
 BTPageOpaque VAR_12;
 TransactionId VAR_13 = VAR_1;


 FUNC_0(VAR_9 > 0);

 if (FUNC_13() && FUNC_7(VAR_6))
  VAR_13 =
   FUNC_14(VAR_6, VAR_10, VAR_7,
             VAR_8, VAR_9);


 FUNC_8();


 FUNC_5(VAR_11, VAR_8, VAR_9);
 VAR_12 = (BTPageOpaque) FUNC_4(VAR_11);
 VAR_12->btpo_flags &= ~VAR_0;

 FUNC_3(VAR_7);


 if (FUNC_7(VAR_6))
 {
  XLogRecPtr VAR_14;
  xl_btree_delete VAR_15;

  VAR_15.latestRemovedXid = VAR_13;
  VAR_15.nitems = VAR_9;

  FUNC_9();
  FUNC_11(0, VAR_7, VAR_2);
  FUNC_12((char *) &VAR_15, VAR_4);






  FUNC_12((char *) VAR_8, VAR_9 * sizeof(OffsetNumber));

  VAR_14 = FUNC_10(VAR_3, VAR_5);

  FUNC_6(VAR_11, VAR_14);
 }

 FUNC_2();
}
