
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ itemsz; int bounds_valid; scalar_t__ low; scalar_t__ stricthigh; int buf; int itup; TYPE_1__* itup_key; } ;
struct TYPE_7__ {scalar_t__ heapkeyspace; int * scantid; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int BTStack ;
typedef TYPE_1__* BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;
typedef TYPE_2__* BTInsertState ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_13 (int ,TYPE_2__*,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static OffsetNumber
FUNC_17(Relation VAR_2,
      BTInsertState VAR_3,
      bool VAR_4,
      BTStack VAR_5,
      Relation VAR_6)
{
 BTScanInsert VAR_7 = VAR_3->itup_key;
 Page VAR_8 = FUNC_2(VAR_3->buf);
 BTPageOpaque VAR_9;

 VAR_9 = (BTPageOpaque) FUNC_9(VAR_8);


 if (FUNC_16(VAR_3->itemsz > FUNC_1(VAR_8)))
  FUNC_11(VAR_2, VAR_6, VAR_7->heapkeyspace, VAR_8,
        VAR_3->itup);

 FUNC_0(FUNC_5(VAR_9) && !FUNC_4(VAR_9));
 FUNC_0(!VAR_3->bounds_valid || VAR_4);
 FUNC_0(!VAR_7->heapkeyspace || VAR_7->scantid != ((void*)0));
 FUNC_0(VAR_7->heapkeyspace || VAR_7->scantid == ((void*)0));

 if (VAR_7->heapkeyspace)
 {
  if (VAR_4)
  {
   for (;;)
   {
    if (VAR_3->bounds_valid &&
     VAR_3->low <= VAR_3->stricthigh &&
     VAR_3->stricthigh <= FUNC_8(VAR_8))
     break;


    if (FUNC_6(VAR_9) ||
     FUNC_12(VAR_2, VAR_7, VAR_8, VAR_1) <= 0)
     break;

    FUNC_13(VAR_2, VAR_3, VAR_5);

    VAR_8 = FUNC_2(VAR_3->buf);
    VAR_9 = (BTPageOpaque) FUNC_9(VAR_8);
   }
  }





  if (FUNC_7(VAR_8) < VAR_3->itemsz &&
   FUNC_3(VAR_9))
  {
   FUNC_14(VAR_2, VAR_3->buf, VAR_6);
   VAR_3->bounds_valid = 0;
  }
 }
 else
 {
  while (FUNC_7(VAR_8) < VAR_3->itemsz)
  {




   if (FUNC_3(VAR_9))
   {
    FUNC_14(VAR_2, VAR_3->buf, VAR_6);
    VAR_3->bounds_valid = 0;

    if (FUNC_7(VAR_8) >= VAR_3->itemsz)
     break;
   }
   if (VAR_3->bounds_valid &&
    VAR_3->low <= VAR_3->stricthigh &&
    VAR_3->stricthigh <= FUNC_8(VAR_8))
    break;

   if (FUNC_6(VAR_9) ||
    FUNC_12(VAR_2, VAR_7, VAR_8, VAR_1) != 0 ||
    FUNC_15() <= (VAR_0 / 100))
    break;

   FUNC_13(VAR_2, VAR_3, VAR_5);

   VAR_8 = FUNC_2(VAR_3->buf);
   VAR_9 = (BTPageOpaque) FUNC_9(VAR_8);
  }
 }





 FUNC_0(FUNC_6(VAR_9) ||
     FUNC_12(VAR_2, VAR_7, VAR_8, VAR_1) <= 0);

 return FUNC_10(VAR_2, VAR_3);
}
