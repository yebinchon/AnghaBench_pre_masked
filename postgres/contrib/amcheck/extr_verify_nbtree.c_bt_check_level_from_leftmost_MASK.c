
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ level; } ;
struct TYPE_22__ {scalar_t__ btpo_prev; scalar_t__ btpo_next; TYPE_1__ btpo; } ;
struct TYPE_21__ {int targetcontext; int rightsplit; int rel; scalar_t__ readonly; int target; scalar_t__ targetblock; int targetlsn; } ;
struct TYPE_20__ {scalar_t__ leftmost; scalar_t__ level; int istruerootlevel; } ;
typedef int MemoryContext ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ BtreeLevel ;
typedef TYPE_3__ BtreeCheckState ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_4__* BTPageOpaque ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_3__*,scalar_t__,int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ,char*,scalar_t__,char*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (char*,scalar_t__,...) ;
 int FUNC_23 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static BtreeLevel
FUNC_24(BtreeCheckState *VAR_8, BtreeLevel VAR_9)
{

 BTPageOpaque VAR_10;
 MemoryContext VAR_11;
 BtreeLevel VAR_12;


 BlockNumber VAR_13 = VAR_7;
 BlockNumber VAR_14 = VAR_9.leftmost;


 VAR_12.leftmost = VAR_5;
 VAR_12.level = VAR_6;
 VAR_12.istruerootlevel = 0;


 VAR_11 = FUNC_3(VAR_8->targetcontext);

 FUNC_18(VAR_1, "verifying level %u%s", VAR_9.level,
   VAR_9.istruerootlevel ?
   " (true root level)" : VAR_9.level == 0 ? " (leaf level)" : "");

 do
 {

  FUNC_1();


  VAR_8->targetblock = VAR_14;
  VAR_8->target = FUNC_23(VAR_8, VAR_8->targetblock);
  VAR_8->targetlsn = FUNC_14(VAR_8->target);

  VAR_10 = (BTPageOpaque) FUNC_15(VAR_8->target);

  if (FUNC_5(VAR_10))
  {
   if (VAR_8->readonly && FUNC_7(VAR_10))
    FUNC_19(VAR_4,
      (FUNC_20(VAR_2),
       FUNC_22("downlink or sibling link points to deleted block in index \"%s\"",
        FUNC_16(VAR_8->rel)),
       FUNC_21("Block=%u left block=%u left link from block=%u.",
           VAR_14, VAR_13, VAR_10->btpo_prev)));

   if (FUNC_11(VAR_10))
    FUNC_19(VAR_4,
      (FUNC_20(VAR_2),
       FUNC_22("block %u fell off the end of index \"%s\"",
        VAR_14, FUNC_16(VAR_8->rel))));
   else
    FUNC_19(VAR_0,
      (FUNC_20(VAR_3),
       FUNC_22("block %u of index \"%s\" ignored",
        VAR_14, FUNC_16(VAR_8->rel))));
   goto nextpage;
  }
  else if (VAR_12.leftmost == VAR_5)
  {







   if (VAR_8->readonly)
   {
    if (!FUNC_10(VAR_10))
     FUNC_19(VAR_4,
       (FUNC_20(VAR_2),
        FUNC_22("block %u is not leftmost in index \"%s\"",
         VAR_14, FUNC_16(VAR_8->rel))));

    if (VAR_9.istruerootlevel && !FUNC_9(VAR_10))
     FUNC_19(VAR_4,
       (FUNC_20(VAR_2),
        FUNC_22("block %u is not true root in index \"%s\"",
         VAR_14, FUNC_16(VAR_8->rel))));
   }
   if (!FUNC_8(VAR_10))
   {
    IndexTuple VAR_15;
    ItemId VAR_16;


    VAR_16 = FUNC_13(VAR_8, VAR_8->targetblock,
             VAR_8->target,
             FUNC_4(VAR_10));
    VAR_15 = (IndexTuple) FUNC_12(VAR_8->target, VAR_16);
    VAR_12.leftmost = FUNC_0(VAR_15);
    VAR_12.level = VAR_10->btpo.level - 1;
   }
   else
   {






    VAR_12.leftmost = VAR_7;
    VAR_12.level = VAR_6;
   }






  }





  if (VAR_8->readonly && VAR_10->btpo_prev != VAR_13)
   FUNC_19(VAR_4,
     (FUNC_20(VAR_2),
      FUNC_22("left link/right link pair in index \"%s\" not in agreement",
       FUNC_16(VAR_8->rel)),
      FUNC_21("Block=%u left block=%u left link from block=%u.",
          VAR_14, VAR_13, VAR_10->btpo_prev)));


  if (VAR_9.level != VAR_10->btpo.level)
   FUNC_19(VAR_4,
     (FUNC_20(VAR_2),
      FUNC_22("leftmost down link for level points to block in index \"%s\" whose level is not one level down",
       FUNC_16(VAR_8->rel)),
      FUNC_21("Block pointed to=%u expected level=%u level in pointed to block=%u.",
          VAR_14, VAR_9.level, VAR_10->btpo.level)));


  FUNC_17(VAR_8);

nextpage:


  if (VAR_14 == VAR_13 || VAR_14 == VAR_10->btpo_prev)
   FUNC_19(VAR_4,
     (FUNC_20(VAR_2),
      FUNC_22("circular link chain found in block %u of index \"%s\"",
       VAR_14, FUNC_16(VAR_8->rel))));






  VAR_8->rightsplit = FUNC_6(VAR_10);

  VAR_13 = VAR_14;
  VAR_14 = VAR_10->btpo_next;


  FUNC_2(VAR_8->targetcontext);
 }
 while (VAR_14 != VAR_7);


 FUNC_3(VAR_11);

 return VAR_12;
}
