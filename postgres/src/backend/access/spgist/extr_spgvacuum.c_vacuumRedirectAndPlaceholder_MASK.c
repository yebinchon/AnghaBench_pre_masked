
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t nToPlaceholder; scalar_t__ firstPlaceholder; int newestRedirectXid; } ;
typedef TYPE_1__ spgxlogVacuumRedirect ;
typedef int XLogRecPtr ;
struct TYPE_7__ {scalar_t__ tupstate; int pointer; int xid; } ;
struct TYPE_6__ {scalar_t__ nRedirection; scalar_t__ nPlaceholder; } ;
typedef TYPE_2__* SpGistPageOpaque ;
typedef TYPE_3__* SpGistDeadTuple ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 () ;
 int VAR_9 ;
 TYPE_2__* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int VAR_10 ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (char*,int) ;

__attribute__((used)) static void
FUNC_19(Relation VAR_11, Buffer VAR_12)
{
 Page VAR_13 = FUNC_1(VAR_12);
 SpGistPageOpaque VAR_14 = FUNC_12(VAR_13);
 OffsetNumber VAR_15,
    VAR_16 = FUNC_7(VAR_13),
    VAR_17 = VAR_1;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 OffsetNumber VAR_20[VAR_3];
 OffsetNumber VAR_21[VAR_3];
 spgxlogVacuumRedirect VAR_22;

 VAR_22.nToPlaceholder = 0;
 VAR_22.newestRedirectXid = VAR_2;

 FUNC_11();





 for (VAR_15 = VAR_16;
   VAR_15 >= VAR_0 &&
   (VAR_14->nRedirection > 0 || !VAR_18);
   VAR_15--)
 {
  SpGistDeadTuple VAR_23;

  VAR_23 = (SpGistDeadTuple) FUNC_5(VAR_13, FUNC_6(VAR_13, VAR_15));

  if (VAR_23->tupstate == VAR_8 &&
   FUNC_14(VAR_23->xid, VAR_6))
  {
   VAR_23->tupstate = VAR_7;
   FUNC_0(VAR_14->nRedirection > 0);
   VAR_14->nRedirection--;
   VAR_14->nPlaceholder++;


   if (!FUNC_13(VAR_22.newestRedirectXid) ||
    FUNC_14(VAR_22.newestRedirectXid, VAR_23->xid))
    VAR_22.newestRedirectXid = VAR_23->xid;

   FUNC_3(&VAR_23->pointer);

   VAR_20[VAR_22.nToPlaceholder] = VAR_15;
   VAR_22.nToPlaceholder++;

   VAR_19 = 1;
  }

  if (VAR_23->tupstate == VAR_7)
  {
   if (!VAR_18)
    VAR_17 = VAR_15;
  }
  else
  {
   VAR_18 = 1;
  }
 }






 if (VAR_17 != VAR_1)
 {



  for (VAR_15 = VAR_17; VAR_15 <= VAR_16; VAR_15++)
   VAR_21[VAR_15 - VAR_17] = VAR_15;

  VAR_15 = VAR_16 - VAR_17 + 1;
  FUNC_0(VAR_14->nPlaceholder >= VAR_15);
  VAR_14->nPlaceholder -= VAR_15;


  FUNC_8(VAR_13, VAR_21, VAR_15);

  VAR_19 = 1;
 }

 VAR_22.firstPlaceholder = VAR_17;

 if (VAR_19)
  FUNC_4(VAR_12);

 if (VAR_19 && FUNC_10(VAR_11))
 {
  XLogRecPtr VAR_24;

  FUNC_15();

  FUNC_18((char *) &VAR_22, VAR_9);
  FUNC_18((char *) VAR_20,
       sizeof(OffsetNumber) * VAR_22.nToPlaceholder);

  FUNC_17(0, VAR_12, VAR_4);

  VAR_24 = FUNC_16(VAR_5, VAR_10);

  FUNC_9(VAR_13, VAR_24);
 }

 FUNC_2();
}
