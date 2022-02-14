
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ntuples; int latestRemovedXid; } ;
typedef TYPE_1__ xl_hash_vacuum_one_page ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {int hashm_ntuples; } ;
struct TYPE_6__ {int hasho_flag; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__* HashPageOpaque ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__*,int) ;
 int FUNC_11 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int,int ,int ) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (int ,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_19(Relation VAR_9, Relation VAR_10, Buffer VAR_11, Buffer VAR_12)
{
 OffsetNumber VAR_13[VAR_4];
 int VAR_14 = 0;
 OffsetNumber VAR_15,
    VAR_16;
 Page VAR_17 = FUNC_0(VAR_12);
 HashPageOpaque VAR_18;
 HashMetaPage VAR_19;


 VAR_16 = FUNC_8(VAR_17);
 for (VAR_15 = VAR_2;
   VAR_15 <= VAR_16;
   VAR_15 = FUNC_6(VAR_15))
 {
  ItemId VAR_20 = FUNC_7(VAR_17, VAR_15);

  if (FUNC_3(VAR_20))
   VAR_13[VAR_14++] = VAR_15;
 }

 if (VAR_14 > 0)
 {
  TransactionId VAR_21;

  VAR_21 =
   FUNC_18(VAR_9, VAR_10, VAR_12,
             VAR_13, VAR_14);




  FUNC_4(VAR_11, VAR_0);


  FUNC_13();

  FUNC_10(VAR_17, VAR_13, VAR_14);
  VAR_18 = (HashPageOpaque) FUNC_9(VAR_17);
  VAR_18->hasho_flag &= ~VAR_3;

  VAR_19 = FUNC_2(FUNC_0(VAR_11));
  VAR_19->hashm_ntuples -= VAR_14;

  FUNC_5(VAR_12);
  FUNC_5(VAR_11);


  if (FUNC_12(VAR_9))
  {
   xl_hash_vacuum_one_page VAR_22;
   XLogRecPtr VAR_23;

   VAR_22.latestRemovedXid = VAR_21;
   VAR_22.ntuples = VAR_14;

   FUNC_14();
   FUNC_16(0, VAR_12, VAR_5);
   FUNC_17((char *) &VAR_22, VAR_7);






   FUNC_17((char *) VAR_13,
        VAR_14 * sizeof(OffsetNumber));

   FUNC_16(1, VAR_11, VAR_5);

   VAR_23 = FUNC_15(VAR_6, VAR_8);

   FUNC_11(FUNC_0(VAR_12), VAR_23);
   FUNC_11(FUNC_0(VAR_11), VAR_23);
  }

  FUNC_1();





  FUNC_4(VAR_11, VAR_1);
 }
}
