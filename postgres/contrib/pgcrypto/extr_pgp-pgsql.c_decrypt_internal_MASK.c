
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int text ;
struct debug_expect {scalar_t__ expect; } ;
typedef int bytea ;
typedef int PGP_Context ;
typedef int MBuf ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct debug_expect*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,int,int *,struct debug_expect*) ;
 int FUNC_9 (int *,int *,int) ;
 int * FUNC_10 (scalar_t__) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int **) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int *,int,int) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static bytea *
FUNC_21(int VAR_1, int VAR_2, text *VAR_3,
     text *VAR_4, text *VAR_5, text *VAR_6)
{
 int VAR_7;
 MBuf *VAR_8 = ((void*)0),
      *VAR_9 = ((void*)0);
 uint8 VAR_10[VAR_0];
 uint8 *VAR_11;
 bytea *VAR_12;
 int VAR_13;
 PGP_Context *VAR_14 = ((void*)0);
 struct debug_expect VAR_15;
 int VAR_16 = 0;


 FUNC_8(&VAR_14, VAR_2, VAR_6, &VAR_15);

 VAR_8 = FUNC_11((uint8 *) FUNC_1(VAR_3),
        FUNC_3(VAR_3));
 VAR_9 = FUNC_10(FUNC_2(VAR_3) + 2048);




 FUNC_9(VAR_9, VAR_10, VAR_0);




 if (VAR_1)
 {
  uint8 *VAR_17 = ((void*)0);
  int VAR_18 = 0;
  MBuf *VAR_19;

  if (VAR_5)
  {
   VAR_17 = (uint8 *) FUNC_1(VAR_5);
   VAR_18 = FUNC_3(VAR_5);
  }
  VAR_19 = FUNC_7(VAR_4);
  VAR_7 = FUNC_17(VAR_14, VAR_19, VAR_17, VAR_18, 1);
  FUNC_12(VAR_19);
 }
 else
  VAR_7 = FUNC_18(VAR_14, (uint8 *) FUNC_1(VAR_4),
        FUNC_3(VAR_4));


 if (VAR_7 >= 0)
 {
  VAR_7 = FUNC_14(VAR_14, VAR_8, VAR_9);

  if (VAR_15.expect)
   FUNC_4(VAR_14, &VAR_15);


  VAR_16 = FUNC_16(VAR_14);
 }

 FUNC_12(VAR_8);
 FUNC_15(VAR_14);

 if (VAR_7)
 {
  FUNC_20(((void*)0));
  FUNC_12(VAR_9);
  FUNC_19(VAR_7);
 }

 VAR_13 = FUNC_13(VAR_9, &VAR_11);
 FUNC_12(VAR_9);


 VAR_12 = (bytea *) VAR_11;
 FUNC_0(VAR_12, VAR_13);

 if (VAR_2 && VAR_16)
 {
  text *VAR_20 = FUNC_6(VAR_12);

  if (VAR_20 != VAR_12)
  {
   FUNC_5(VAR_12);
   VAR_12 = VAR_20;
  }
 }
 FUNC_20(((void*)0));

 return VAR_12;
}
