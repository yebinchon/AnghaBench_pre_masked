
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ ginxlogCreatePostingTree ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int rightlink; } ;
struct TYPE_7__ {int nDataPages; } ;
typedef int Relation ;
typedef scalar_t__ Pointer ;
typedef scalar_t__ Page ;
typedef int ItemPointerData ;
typedef TYPE_2__ GinStatsData ;
typedef int GinPostingList ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int ,char*,int) ;
 int * FUNC_21 (int *,int,int ,int*) ;
 int FUNC_22 (int ,int ,int *,int,TYPE_2__*) ;
 int FUNC_23 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int *) ;

BlockNumber
FUNC_26(Relation VAR_11, ItemPointerData *VAR_12, uint32 VAR_13,
      GinStatsData *VAR_14, Buffer VAR_15)
{
 BlockNumber VAR_16;
 Buffer VAR_17;
 Page VAR_18;
 Page VAR_19;
 Pointer VAR_20;
 int VAR_21;
 int VAR_22;
 bool VAR_23 = (VAR_14 != ((void*)0));


 VAR_18 = (Page) FUNC_24(VAR_0);
 FUNC_5(VAR_18, VAR_3 | VAR_4 | VAR_2, VAR_0);
 FUNC_7(VAR_18)->rightlink = VAR_7;





 VAR_21 = 0;
 VAR_22 = 0;
 VAR_20 = (Pointer) FUNC_3(VAR_18);
 while (VAR_21 < VAR_13)
 {
  GinPostingList *VAR_24;
  int VAR_25;
  int VAR_26;

  VAR_24 = FUNC_21(&VAR_12[VAR_21],
           VAR_13 - VAR_21,
           VAR_6,
           &VAR_25);
  VAR_26 = FUNC_14(VAR_24);
  if (VAR_22 + VAR_26 > VAR_5)
   break;

  FUNC_23(VAR_20, VAR_24, VAR_26);
  VAR_20 += VAR_26;
  VAR_22 += VAR_26;
  VAR_21 += VAR_25;
  FUNC_25(VAR_24);
 }
 FUNC_4(VAR_18, VAR_22);




 VAR_17 = FUNC_6(VAR_11);
 VAR_19 = FUNC_1(VAR_17);
 VAR_16 = FUNC_0(VAR_17);





 FUNC_11(VAR_11, FUNC_0(VAR_15), VAR_16);

 FUNC_13();

 FUNC_9(VAR_18, VAR_19);
 FUNC_8(VAR_17);

 if (FUNC_12(VAR_11) && !VAR_23)
 {
  XLogRecPtr VAR_27;
  ginxlogCreatePostingTree VAR_28;

  VAR_28.size = VAR_22;

  FUNC_16();
  FUNC_19((char *) &VAR_28, sizeof(ginxlogCreatePostingTree));

  FUNC_19((char *) FUNC_3(VAR_19),
       VAR_22);
  FUNC_18(0, VAR_17, VAR_8);

  VAR_27 = FUNC_17(VAR_9, VAR_10);
  FUNC_10(VAR_19, VAR_27);
 }

 FUNC_15(VAR_17);

 FUNC_2();


 if (VAR_14)
  VAR_14->nDataPages++;

 FUNC_20(VAR_1, "created GIN posting tree with %d items", VAR_21);




 if (VAR_13 > VAR_21)
 {
  FUNC_22(VAR_11, VAR_16,
         VAR_12 + VAR_21,
         VAR_13 - VAR_21,
         VAR_14);
 }

 return VAR_16;
}
