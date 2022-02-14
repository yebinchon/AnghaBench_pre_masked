
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int Relation ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int,int ,int) ;

void
FUNC_14(Relation VAR_6, ForkNumber VAR_7,
      BlockNumber VAR_8, BlockNumber VAR_9,
      bool VAR_10)
{
 BlockNumber VAR_11;






 FUNC_11(VAR_5 - 1, 0);

 VAR_11 = VAR_8;
 while (VAR_11 < VAR_9)
 {
  Buffer VAR_12[VAR_5];
  XLogRecPtr VAR_13;
  int VAR_14;
  int VAR_15;

  FUNC_1();


  VAR_14 = 0;
  while (VAR_14 < VAR_5 && VAR_11 < VAR_9)
  {
   Buffer VAR_16 = FUNC_7(VAR_6, VAR_11);

   FUNC_3(VAR_16, VAR_0);






   if (!FUNC_5(FUNC_0(VAR_16)))
    VAR_12[VAR_14++] = VAR_16;
   else
    FUNC_9(VAR_16);
   VAR_11++;
  }


  FUNC_10();

  FUNC_8();
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  {
   FUNC_13(VAR_15, VAR_12[VAR_15], VAR_1 | VAR_2);
   FUNC_4(VAR_12[VAR_15]);
  }

  VAR_13 = FUNC_12(VAR_3, VAR_4);

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  {
   FUNC_6(FUNC_0(VAR_12[VAR_15]), VAR_13);
   FUNC_9(VAR_12[VAR_15]);
  }
  FUNC_2();
 }
}
