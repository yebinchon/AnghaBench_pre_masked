
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int targetlsn; int targetblock; int rel; int readonly; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__ BtreeCheckState ;
typedef int BlockNumber ;
typedef int BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ,scalar_t__,int ,...) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(BtreeCheckState *VAR_2, BTScanInsert VAR_3,
      BlockNumber VAR_4)
{
 OffsetNumber VAR_5;
 OffsetNumber VAR_6;
 Page VAR_7;
 BTPageOpaque VAR_8;
 FUNC_0(VAR_2->readonly);
 VAR_7 = FUNC_13(VAR_2, VAR_4);
 VAR_8 = (BTPageOpaque) FUNC_5(VAR_7);
 VAR_6 = FUNC_4(VAR_7);
 if (FUNC_3(VAR_8))
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_10("downlink to deleted page found in index \"%s\"",
      FUNC_6(VAR_2->rel)),
     FUNC_9("Parent block=%u child block=%u parent page lsn=%X/%X.",
         VAR_2->targetblock, VAR_4,
         (uint32) (VAR_2->targetlsn >> 32),
         (uint32) VAR_2->targetlsn)));

 for (VAR_5 = FUNC_2(VAR_8);
   VAR_5 <= VAR_6;
   VAR_5 = FUNC_1(VAR_5))
 {
  if (FUNC_12(VAR_8, VAR_5))
   continue;

  if (!FUNC_11(VAR_2, VAR_3, VAR_4, VAR_7,
            VAR_5))
   FUNC_7(VAR_1,
     (FUNC_8(VAR_0),
      FUNC_10("down-link lower bound invariant violated for index \"%s\"",
       FUNC_6(VAR_2->rel)),
      FUNC_9("Parent block=%u child index tid=(%u,%u) parent page lsn=%X/%X.",
          VAR_2->targetblock, VAR_4, VAR_5,
          (uint32) (VAR_2->targetlsn >> 32),
          (uint32) VAR_2->targetlsn)));
 }

 FUNC_14(VAR_7);
}
