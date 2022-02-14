
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int Size ;
typedef char* Pointer ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int,char) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static Pointer
FUNC_17(Pointer VAR_1, Datum VAR_2, bool VAR_3, char VAR_4,
   int16 VAR_5, char VAR_6)
{
 Size VAR_7;

 if (VAR_3)
 {

  VAR_1 = (char *) FUNC_12(VAR_1, VAR_4);
  FUNC_15(VAR_1, VAR_2, VAR_5);
  VAR_7 = VAR_5;
 }
 else if (VAR_5 == -1)
 {

  Pointer VAR_8 = FUNC_2(VAR_2);

  if (FUNC_7(VAR_8))
  {




   FUNC_13(VAR_0, "cannot store a toast pointer inside a range");
   VAR_7 = 0;
  }
  else if (FUNC_8(VAR_8))
  {

   VAR_7 = FUNC_11(VAR_8);
   FUNC_14(VAR_1, VAR_8, VAR_7);
  }
  else if (FUNC_4(VAR_5, VAR_6) &&
     FUNC_5(VAR_8))
  {

   VAR_7 = FUNC_6(VAR_8);
   FUNC_3(VAR_1, VAR_7);
   FUNC_14(VAR_1 + 1, FUNC_9(VAR_8), VAR_7 - 1);
  }
  else
  {

   VAR_1 = (char *) FUNC_12(VAR_1, VAR_4);
   VAR_7 = FUNC_10(VAR_8);
   FUNC_14(VAR_1, VAR_8, VAR_7);
  }
 }
 else if (VAR_5 == -2)
 {

  FUNC_0(VAR_4 == 'c');
  VAR_7 = FUNC_16(FUNC_1(VAR_2)) + 1;
  FUNC_14(VAR_1, FUNC_2(VAR_2), VAR_7);
 }
 else
 {

  VAR_1 = (char *) FUNC_12(VAR_1, VAR_4);
  FUNC_0(VAR_5 > 0);
  VAR_7 = VAR_5;
  FUNC_14(VAR_1, FUNC_2(VAR_2), VAR_7);
 }

 VAR_1 += VAR_7;

 return VAR_1;
}
