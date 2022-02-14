
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int text ;
struct debug_expect {scalar_t__ debug; } ;
typedef int bytea ;
typedef int PGP_Context ;
typedef int MBuf ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int,int *,struct debug_expect*) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int *,int ,int ) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static bytea *
FUNC_19(int VAR_1, int VAR_2,
     text *VAR_3, text *VAR_4, text *VAR_5)
{
 MBuf *VAR_6,
      *VAR_7;
 uint8 VAR_8[VAR_0];
 uint8 *VAR_9;
 bytea *VAR_10;
 int VAR_11;
 PGP_Context *VAR_12;
 int VAR_13;
 struct debug_expect VAR_14;
 text *VAR_15 = ((void*)0);

 FUNC_7(&VAR_12, VAR_2, VAR_5, &VAR_14);

 if (VAR_2 && FUNC_14(VAR_12))
 {
  VAR_15 = FUNC_5(VAR_3);
  if (VAR_15 == VAR_3)
   VAR_15 = ((void*)0);
  else
   VAR_3 = VAR_15;
 }

 VAR_6 = FUNC_6(VAR_3);
 VAR_7 = FUNC_9(FUNC_2(VAR_3) + 128);




 FUNC_8(VAR_7, VAR_8, VAR_0);




 if (VAR_1)
 {
  MBuf *VAR_16 = FUNC_6(VAR_4);

  VAR_13 = FUNC_15(VAR_12, VAR_16,
        ((void*)0), 0, 0);
  FUNC_10(VAR_16);
 }
 else
  VAR_13 = FUNC_16(VAR_12, (uint8 *) FUNC_1(VAR_4),
        FUNC_3(VAR_4));




 if (VAR_13 >= 0)
  VAR_13 = FUNC_12(VAR_12, VAR_6, VAR_7);




 if (VAR_13)
 {
  if (VAR_14.debug)
   FUNC_18(((void*)0));
  if (VAR_15)
   FUNC_4(VAR_15);
  FUNC_13(VAR_12);
  FUNC_10(VAR_6);
  FUNC_10(VAR_7);
  FUNC_17(VAR_13);
 }


 VAR_11 = FUNC_11(VAR_7, &VAR_9);
 VAR_10 = (bytea *) VAR_9;
 FUNC_0(VAR_10, VAR_11);

 if (VAR_15)
  FUNC_4(VAR_15);
 FUNC_13(VAR_12);
 FUNC_10(VAR_6);
 FUNC_10(VAR_7);

 FUNC_18(((void*)0));

 return VAR_10;
}
