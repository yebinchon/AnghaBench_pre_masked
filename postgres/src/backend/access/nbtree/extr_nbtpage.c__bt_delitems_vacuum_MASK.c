
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lastBlockVacuumed; } ;
typedef TYPE_1__ xl_btree_vacuum ;
typedef int XLogRecPtr ;
struct TYPE_4__ {int btpo_flags; scalar_t__ btpo_cycleid; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef TYPE_2__* BTPageOpaque ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*,int ) ;

void
FUNC_13(Relation VAR_5, Buffer VAR_6,
     OffsetNumber *VAR_7, int VAR_8,
     BlockNumber VAR_9)
{
 Page VAR_10 = FUNC_0(VAR_6);
 BTPageOpaque VAR_11;


 FUNC_7();


 if (VAR_8 > 0)
  FUNC_4(VAR_10, VAR_7, VAR_8);





 VAR_11 = (BTPageOpaque) FUNC_3(VAR_10);
 VAR_11->btpo_cycleid = 0;
 VAR_11->btpo_flags &= ~VAR_0;

 FUNC_2(VAR_6);


 if (FUNC_6(VAR_5))
 {
  XLogRecPtr VAR_12;
  xl_btree_vacuum VAR_13;

  VAR_13.lastBlockVacuumed = VAR_9;

  FUNC_8();
  FUNC_11(0, VAR_6, VAR_1);
  FUNC_12((char *) &VAR_13, VAR_3);






  if (VAR_8 > 0)
   FUNC_10(0, (char *) VAR_7, VAR_8 * sizeof(OffsetNumber));

  VAR_12 = FUNC_9(VAR_2, VAR_4);

  FUNC_5(VAR_10, VAR_12);
 }

 FUNC_1();
}
