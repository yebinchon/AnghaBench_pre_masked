
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bs_bdesc; int bs_dtuple; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int IndexInfo ;
typedef int Buffer ;
typedef int BrinTuple ;
typedef int BrinRevmap ;
typedef TYPE_1__ BrinBuildState ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,int,int *,int *,int *,int ,int *) ;
 int * FUNC_9 (int ,int*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 TYPE_1__* FUNC_12 (int ,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*,int ,int,int) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_16(Relation VAR_4, Relation VAR_5, BlockNumber VAR_6,
     bool VAR_7, double *VAR_8, double *VAR_9)
{
 BrinRevmap *VAR_10;
 BrinBuildState *VAR_11 = ((void*)0);
 IndexInfo *VAR_12 = ((void*)0);
 BlockNumber VAR_13;
 BlockNumber VAR_14;
 Buffer VAR_15;
 BlockNumber VAR_16;

 VAR_10 = FUNC_9(VAR_4, &VAR_14, ((void*)0));


 VAR_13 = FUNC_6(VAR_5);
 if (VAR_6 == VAR_0)
  VAR_16 = 0;
 else
 {
  VAR_16 = (VAR_6 / VAR_14) * VAR_14;
  VAR_13 = FUNC_5(VAR_13, VAR_16 + VAR_14);
 }
 if (VAR_16 > VAR_13)
 {

  FUNC_10(VAR_10);
  return;
 }




 VAR_15 = VAR_3;
 for (; VAR_16 < VAR_13; VAR_16 += VAR_14)
 {
  BrinTuple *VAR_17;
  OffsetNumber VAR_18;
  if (!VAR_7 &&
   (VAR_16 + VAR_14 > VAR_13))
   break;

  FUNC_3();

  VAR_17 = FUNC_8(VAR_10, VAR_16, &VAR_15, &VAR_18, ((void*)0),
            VAR_1, ((void*)0));
  if (VAR_17 == ((void*)0))
  {

   if (VAR_11 == ((void*)0))
   {

    FUNC_0(!VAR_12);
    VAR_11 = FUNC_12(VAR_4, VAR_10,
               VAR_14);
    VAR_12 = FUNC_2(VAR_4);
   }
   FUNC_14(VAR_12, VAR_11, VAR_5, VAR_16, VAR_13);


   FUNC_11(VAR_11->bs_dtuple, VAR_11->bs_bdesc);

   if (VAR_8)
    *VAR_8 += 1.0;
  }
  else
  {
   if (VAR_9)
    *VAR_9 += 1.0;
   FUNC_4(VAR_15, VAR_2);
  }
 }

 if (FUNC_1(VAR_15))
  FUNC_7(VAR_15);


 FUNC_10(VAR_10);
 if (VAR_11)
 {
  FUNC_15(VAR_11);
  FUNC_13(VAR_12);
 }
}
