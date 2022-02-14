
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offnum; void* pagesPerRange; void* heapBlk; } ;
typedef TYPE_1__ xl_brin_insert ;
typedef int uint8 ;
typedef int XLogRecPtr ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int Item ;
typedef int Buffer ;
typedef int BrinTuple ;
typedef int BrinRevmap ;
typedef void* BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,void*,void*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *,void*,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ,void*,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 () ;
 int VAR_12 ;
 int FUNC_17 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (int,int ,int) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,void*) ;
 int FUNC_25 (int *,void*) ;
 int FUNC_26 (int ,void*,void*,int ) ;
 int FUNC_27 (int ,int ,int ,int*) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,char*) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (char*,int ,int ,int ) ;

OffsetNumber
FUNC_33(Relation VAR_15, BlockNumber VAR_16,
     BrinRevmap *VAR_17, Buffer *VAR_18, BlockNumber VAR_19,
     BrinTuple *VAR_20, Size VAR_21)
{
 Page VAR_22;
 BlockNumber VAR_23;
 OffsetNumber VAR_24;
 Size VAR_25 = 0;
 Buffer VAR_26;
 ItemPointerData VAR_27;
 bool VAR_28;

 FUNC_0(VAR_21 == FUNC_9(VAR_21));


 if (VAR_21 > VAR_3)
 {
  FUNC_30(VAR_6,
    (FUNC_31(VAR_5),
     FUNC_32("index row size %zu exceeds maximum %zu for index \"%s\"",
      VAR_21, VAR_3, FUNC_14(VAR_15))));
  return VAR_8;
 }


 FUNC_25(VAR_17, VAR_19);





 if (FUNC_4(*VAR_18))
 {





  FUNC_8(*VAR_18, VAR_1);
  if (FUNC_23(FUNC_3(*VAR_18)) < VAR_21)
  {
   FUNC_17(*VAR_18);
   *VAR_18 = VAR_7;
  }
 }





 if (!FUNC_4(*VAR_18))
 {
  do
   *VAR_18 = FUNC_27(VAR_15, VAR_7, VAR_21, &VAR_28);
  while (!FUNC_4(*VAR_18));
 }
 else
  VAR_28 = 0;


 VAR_26 = FUNC_24(VAR_17, VAR_19);

 VAR_22 = FUNC_3(*VAR_18);
 VAR_23 = FUNC_2(*VAR_18);


 FUNC_16();
 if (VAR_28)
  FUNC_28(VAR_22, VAR_0);
 VAR_24 = FUNC_11(VAR_22, (Item) VAR_20, VAR_21, VAR_8,
       0, 0);
 if (VAR_24 == VAR_8)
  FUNC_29(VAR_6, "failed to add BRIN tuple to new page");
 FUNC_10(*VAR_18);


 if (VAR_28)
  VAR_25 = FUNC_23(VAR_22);

 FUNC_7(&VAR_27, VAR_23, VAR_24);
 FUNC_26(VAR_26, VAR_16, VAR_19, VAR_27);
 FUNC_10(VAR_26);


 if (FUNC_15(VAR_15))
 {
  xl_brin_insert VAR_29;
  XLogRecPtr VAR_30;
  uint8 VAR_31;

  VAR_31 = VAR_14 | (VAR_28 ? VAR_13 : 0);
  VAR_29.heapBlk = VAR_19;
  VAR_29.pagesPerRange = VAR_16;
  VAR_29.offnum = VAR_24;

  FUNC_18();
  FUNC_22((char *) &VAR_29, VAR_12);

  FUNC_21(0, *VAR_18, VAR_9 | (VAR_28 ? VAR_10 : 0));
  FUNC_20(0, (char *) VAR_20, VAR_21);

  FUNC_21(1, VAR_26, 0);

  VAR_30 = FUNC_19(VAR_11, VAR_31);

  FUNC_12(VAR_22, VAR_30);
  FUNC_12(FUNC_3(VAR_26), VAR_30);
 }

 FUNC_5();


 FUNC_8(*VAR_18, VAR_2);
 FUNC_8(VAR_26, VAR_2);

 FUNC_1((VAR_4, "inserted tuple (%u,%u) for range starting at %u",
      VAR_23, VAR_24, VAR_19));

 if (VAR_28)
 {
  FUNC_13(VAR_15, VAR_23, VAR_25);
  FUNC_6(VAR_15, VAR_23, VAR_23 + 1);
 }

 return VAR_24;
}
