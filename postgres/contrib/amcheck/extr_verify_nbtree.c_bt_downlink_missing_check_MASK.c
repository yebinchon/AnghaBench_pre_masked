
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_14__ {int level; } ;
struct TYPE_16__ {TYPE_1__ btpo; int btpo_prev; } ;
struct TYPE_15__ {scalar_t__ targetblock; int targetlsn; int rel; int target; int downlinkfilter; scalar_t__ rightsplit; scalar_t__ readonly; scalar_t__ heapallindexed; } ;
typedef int Page ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ BtreeCheckState ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,unsigned char*,int) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,scalar_t__,scalar_t__,int,...) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (TYPE_2__*,scalar_t__) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static void
FUNC_24(BtreeCheckState *VAR_5)
{
 BTPageOpaque VAR_6 = (BTPageOpaque) FUNC_13(VAR_5->target);
 ItemId VAR_7;
 IndexTuple VAR_8;
 Page VAR_9;
 BTPageOpaque VAR_10;
 uint32 VAR_11;
 BlockNumber VAR_12;

 FUNC_0(VAR_5->heapallindexed && VAR_5->readonly);
 FUNC_0(!FUNC_5(VAR_6));


 if (FUNC_9(VAR_6))
  return;
 if (VAR_5->rightsplit)
 {
  FUNC_17(VAR_0,
    (FUNC_18(VAR_2),
     FUNC_20("harmless interrupted page split detected in index %s",
      FUNC_14(VAR_5->rel)),
     FUNC_19("Block=%u level=%u left sibling=%u page lsn=%X/%X.",
         VAR_5->targetblock, VAR_6->btpo.level,
         VAR_6->btpo_prev,
         (uint32) (VAR_5->targetlsn >> 32),
         (uint32) VAR_5->targetlsn)));
  return;
 }


 if (!FUNC_15(VAR_5->downlinkfilter,
        (unsigned char *) &VAR_5->targetblock,
        sizeof(BlockNumber)))
  return;
 if (FUNC_8(VAR_6))
  FUNC_17(VAR_3,
    (FUNC_18(VAR_1),
     FUNC_20("leaf index block lacks downlink in index \"%s\"",
      FUNC_14(VAR_5->rel)),
     FUNC_19("Block=%u page lsn=%X/%X.",
         VAR_5->targetblock,
         (uint32) (VAR_5->targetlsn >> 32),
         (uint32) VAR_5->targetlsn)));


 FUNC_16(VAR_0, "checking for interrupted multi-level deletion due to missing downlink in index \"%s\"",
   FUNC_14(VAR_5->rel));

 VAR_11 = VAR_6->btpo.level;
 VAR_7 = FUNC_12(VAR_5, VAR_5->targetblock, VAR_5->target,
          FUNC_4(VAR_6));
 VAR_8 = (IndexTuple) FUNC_11(VAR_5->target, VAR_7);
 VAR_12 = FUNC_1(VAR_8);
 for (;;)
 {
  FUNC_3();

  VAR_9 = FUNC_22(VAR_5, VAR_12);
  VAR_10 = (BTPageOpaque) FUNC_13(VAR_9);

  if (FUNC_8(VAR_10))
   break;


  if (VAR_10->btpo.level != VAR_11 - 1)
   FUNC_17(VAR_3,
     (FUNC_18(VAR_1),
      FUNC_21("downlink points to block in index \"%s\" whose level is not one level down",
          FUNC_14(VAR_5->rel)),
      FUNC_19("Top parent/target block=%u block pointed to=%u expected level=%u level in pointed to block=%u.",
          VAR_5->targetblock, VAR_12,
          VAR_11 - 1, VAR_10->btpo.level)));

  VAR_11 = VAR_10->btpo.level;
  VAR_7 = FUNC_12(VAR_5, VAR_12, VAR_9,
           FUNC_4(VAR_10));
  VAR_8 = (IndexTuple) FUNC_11(VAR_9, VAR_7);
  VAR_12 = FUNC_1(VAR_8);

  FUNC_23(VAR_9);
 }
 if (FUNC_6(VAR_10))
  FUNC_17(VAR_3,
    (FUNC_18(VAR_1),
     FUNC_21("downlink to deleted leaf page found in index \"%s\"",
         FUNC_14(VAR_5->rel)),
     FUNC_19("Top parent/target block=%u leaf block=%u top parent/target lsn=%X/%X.",
         VAR_5->targetblock, VAR_12,
         (uint32) (VAR_5->targetlsn >> 32),
         (uint32) VAR_5->targetlsn)));
 if (FUNC_7(VAR_10) && !FUNC_10(VAR_10))
 {
  VAR_7 = FUNC_12(VAR_5, VAR_12, VAR_9, VAR_4);
  VAR_8 = (IndexTuple) FUNC_11(VAR_9, VAR_7);
  if (FUNC_2(VAR_8) == VAR_5->targetblock)
   return;
 }

 FUNC_17(VAR_3,
   (FUNC_18(VAR_1),
    FUNC_20("internal index block lacks downlink in index \"%s\"",
     FUNC_14(VAR_5->rel)),
    FUNC_19("Block=%u level=%u page lsn=%X/%X.",
        VAR_5->targetblock, VAR_6->btpo.level,
        (uint32) (VAR_5->targetlsn >> 32),
        (uint32) VAR_5->targetlsn)));
}
