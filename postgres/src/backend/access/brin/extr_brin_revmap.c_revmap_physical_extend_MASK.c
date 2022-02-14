
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ targetBlk; } ;
typedef TYPE_1__ xl_brin_revmap_extend ;
typedef int XLogRecPtr ;
struct TYPE_10__ {scalar_t__ lastRevmapPage; } ;
struct TYPE_9__ {scalar_t__ rm_lastRevmapPage; int rm_metaBuf; int rm_irel; int rm_pagesPerRange; } ;
struct TYPE_8__ {int pd_lower; } ;
typedef int Relation ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Buffer ;
typedef TYPE_3__ BrinRevmap ;
typedef TYPE_4__ BrinMetaPageData ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int VAR_10 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int VAR_11 ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int,int ,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (int ,int ,TYPE_3__*,int ) ;
 int FUNC_25 (scalar_t__,int ) ;
 scalar_t__ FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (char*,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_30(BrinRevmap *VAR_12)
{
 Buffer VAR_13;
 Page VAR_14;
 Page VAR_15;
 BrinMetaPageData *VAR_16;
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 Relation VAR_19 = VAR_12->rm_irel;
 bool VAR_20 = !FUNC_11(VAR_19);






 FUNC_5(VAR_12->rm_metaBuf, VAR_1);
 VAR_15 = FUNC_3(VAR_12->rm_metaBuf);
 VAR_16 = (BrinMetaPageData *) FUNC_8(VAR_15);





 if (VAR_16->lastRevmapPage != VAR_12->rm_lastRevmapPage)
 {
  VAR_12->rm_lastRevmapPage = VAR_16->lastRevmapPage;
  FUNC_5(VAR_12->rm_metaBuf, VAR_2);
  return;
 }
 VAR_17 = VAR_16->lastRevmapPage + 1;

 VAR_18 = FUNC_13(VAR_19);
 if (VAR_17 < VAR_18)
 {
  VAR_13 = FUNC_12(VAR_19, VAR_17);
  FUNC_5(VAR_13, VAR_1);
  VAR_14 = FUNC_3(VAR_13);
 }
 else
 {
  if (VAR_20)
   FUNC_6(VAR_19, VAR_5);

  VAR_13 = FUNC_12(VAR_19, VAR_6);
  if (FUNC_2(VAR_13) != VAR_17)
  {






   if (VAR_20)
    FUNC_18(VAR_19, VAR_5);
   FUNC_5(VAR_12->rm_metaBuf, VAR_2);
   FUNC_16(VAR_13);
   return;
  }
  FUNC_5(VAR_13, VAR_1);
  VAR_14 = FUNC_3(VAR_13);

  if (VAR_20)
   FUNC_18(VAR_19, VAR_5);
 }


 if (!FUNC_9(VAR_14) && !FUNC_0(VAR_14))
  FUNC_27(VAR_4,
    (FUNC_28(VAR_3),
     FUNC_29("unexpected page type 0x%04X in BRIN index \"%s\" block %u",
      FUNC_1(VAR_14),
      FUNC_14(VAR_19),
      FUNC_2(VAR_13))));


 if (FUNC_26(VAR_19, VAR_13))
 {
  FUNC_5(VAR_12->rm_metaBuf, VAR_2);
  FUNC_24(VAR_19, VAR_12->rm_pagesPerRange, VAR_12, VAR_13);


  return;
 }





 FUNC_17();


 FUNC_25(VAR_14, VAR_0);
 FUNC_7(VAR_13);

 VAR_16->lastRevmapPage = VAR_17;
 ((PageHeader) VAR_15)->pd_lower =
  ((char *) VAR_16 + sizeof(BrinMetaPageData)) - (char *) VAR_15;

 FUNC_7(VAR_12->rm_metaBuf);

 if (FUNC_15(VAR_12->rm_irel))
 {
  xl_brin_revmap_extend VAR_21;
  XLogRecPtr VAR_22;

  VAR_21.targetBlk = VAR_17;

  FUNC_20();
  FUNC_23((char *) &VAR_21, VAR_10);
  FUNC_22(0, VAR_12->rm_metaBuf, VAR_7);

  FUNC_22(1, VAR_13, VAR_8);

  VAR_22 = FUNC_21(VAR_9, VAR_11);
  FUNC_10(VAR_15, VAR_22);
  FUNC_10(VAR_14, VAR_22);
 }

 FUNC_4();

 FUNC_5(VAR_12->rm_metaBuf, VAR_2);

 FUNC_19(VAR_13);
}
