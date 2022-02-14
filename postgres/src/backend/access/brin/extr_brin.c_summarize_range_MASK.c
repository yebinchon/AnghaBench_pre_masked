
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bs_pagesPerRange; int bs_currRangeStart; int bs_dtuple; int bs_bdesc; int bs_rmAccess; int bs_irel; } ;
typedef int Size ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int IndexInfo ;
typedef int Buffer ;
typedef int BrinTuple ;
typedef TYPE_1__ BrinBuildState ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int,int *,int *,int *,int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int ,int,int ,int *,int,int *,int ) ;
 int FUNC_10 (int ,int,int ,int,int ,int ,int *,int ,int *,int ,int) ;
 int * FUNC_11 (int ,int,int *) ;
 int * FUNC_12 (int ,int,int ,int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ,int *,int,int,int,int,int,int ,void*,int *) ;
 int FUNC_16 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_17(IndexInfo *VAR_5, BrinBuildState *VAR_6, Relation VAR_7,
    BlockNumber VAR_8, BlockNumber VAR_9)
{
 Buffer VAR_10;
 BrinTuple *VAR_11;
 Size VAR_12;
 OffsetNumber VAR_13;
 BlockNumber VAR_14;




 VAR_10 = VAR_3;
 VAR_11 = FUNC_11(VAR_6->bs_bdesc, VAR_8, &VAR_12);
 VAR_13 = FUNC_9(VAR_6->bs_irel, VAR_6->bs_pagesPerRange,
         VAR_6->bs_rmAccess, &VAR_10,
         VAR_8, VAR_11, VAR_12);





 FUNC_0(VAR_8 % VAR_6->bs_pagesPerRange == 0);
 if (VAR_8 + VAR_6->bs_pagesPerRange > VAR_9)
 {
  VAR_14 = FUNC_3(FUNC_4(VAR_7) - VAR_8,
        VAR_6->bs_pagesPerRange);
 }
 else
 {

  VAR_14 = VAR_6->bs_pagesPerRange;
 }
 VAR_6->bs_currRangeStart = VAR_8;
 FUNC_15(VAR_7, VAR_6->bs_irel, VAR_5, 0, 1, 0,
         VAR_8, VAR_14,
         VAR_4, (void *) VAR_6, ((void*)0));







 for (;;)
 {
  BrinTuple *VAR_15;
  Size VAR_16;
  bool VAR_17;
  bool VAR_18;

  FUNC_1();




  VAR_15 = FUNC_12(VAR_6->bs_bdesc,
         VAR_8, VAR_6->bs_dtuple, &VAR_16);
  VAR_18 = FUNC_7(VAR_10, VAR_12, VAR_16);
  VAR_17 =
   FUNC_10(VAR_6->bs_irel, VAR_6->bs_pagesPerRange,
        VAR_6->bs_rmAccess, VAR_8, VAR_10, VAR_13,
        VAR_11, VAR_12, VAR_15, VAR_16, VAR_18);
  FUNC_13(VAR_11);
  FUNC_13(VAR_15);


  if (VAR_17)
   break;
  VAR_11 = FUNC_6(VAR_6->bs_rmAccess, VAR_8, &VAR_10,
           &VAR_13, &VAR_12, VAR_0,
           ((void*)0));

  if (VAR_11 == ((void*)0))
   FUNC_14(VAR_2, "missing placeholder tuple");
  VAR_11 = FUNC_8(VAR_11, VAR_12, ((void*)0), ((void*)0));
  FUNC_2(VAR_10, VAR_1);


  FUNC_16(VAR_6->bs_bdesc, VAR_6->bs_dtuple, VAR_11);
 }

 FUNC_5(VAR_10);
}
