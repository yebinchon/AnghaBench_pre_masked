
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rel; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__ BtreeCheckState ;
typedef int BlockNumber ;
typedef int BTPageOpaqueData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ,int,scalar_t__,int ) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static ItemId
FUNC_11(BtreeCheckState *VAR_3, BlockNumber VAR_4, Page VAR_5,
      OffsetNumber VAR_6)
{
 ItemId VAR_7 = FUNC_5(VAR_5, VAR_6);

 if (FUNC_2(VAR_7) + FUNC_1(VAR_7) >
  VAR_0 - sizeof(BTPageOpaqueData))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_10("line pointer points past end of tuple space in index \"%s\"",
      FUNC_6(VAR_3->rel)),
     FUNC_9("Index tid=(%u,%u) lp_off=%u, lp_len=%u lp_flags=%u.",
         VAR_4, VAR_6, FUNC_2(VAR_7),
         FUNC_1(VAR_7),
         FUNC_0(VAR_7))));






 if (FUNC_3(VAR_7) || !FUNC_4(VAR_7) ||
  FUNC_1(VAR_7) == 0)
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_10("invalid line pointer storage in index \"%s\"",
      FUNC_6(VAR_3->rel)),
     FUNC_9("Index tid=(%u,%u) lp_off=%u, lp_len=%u lp_flags=%u.",
         VAR_4, VAR_6, FUNC_2(VAR_7),
         FUNC_1(VAR_7),
         FUNC_0(VAR_7))));

 return VAR_7;
}
