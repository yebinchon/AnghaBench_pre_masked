
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int Datum ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,int*,int*,int*) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int,int*,int,int,int,char,int*) ;
 scalar_t__ FUNC_11 (int *,int) ;
 char* FUNC_12 (char*,int ,int *,int,int,int,char) ;

Datum
FUNC_13(Datum VAR_1,
      int VAR_2,
      int *VAR_3,
      int VAR_4,
      int VAR_5,
      bool VAR_6,
      char VAR_7,
      bool *VAR_8)
{
 int VAR_9,
    VAR_10,
      *VAR_11,
      *VAR_12,
    VAR_13,
    VAR_14[1],
    VAR_15[1];
 char *VAR_16,
      *VAR_17;
 bits8 *VAR_18;

 if (VAR_4 > 0)
 {



  VAR_10 = 1;
  VAR_14[0] = VAR_4 / VAR_5;
  VAR_15[0] = 0;
  VAR_11 = VAR_14;
  VAR_12 = VAR_15;
  VAR_16 = (char *) FUNC_8(VAR_1);
  VAR_18 = ((void*)0);
 }
 else if (FUNC_9(FUNC_8(VAR_1)))
 {

  return FUNC_10(VAR_1,
            VAR_2,
            VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_7,
            VAR_8);
 }
 else
 {

  ArrayType *VAR_19 = FUNC_7(VAR_1);

  VAR_10 = FUNC_3(VAR_19);
  VAR_11 = FUNC_1(VAR_19);
  VAR_12 = FUNC_2(VAR_19);
  VAR_16 = FUNC_0(VAR_19);
  VAR_18 = FUNC_4(VAR_19);
 }




 if (VAR_10 != VAR_2 || VAR_10 <= 0 || VAR_10 > VAR_0)
 {
  *VAR_8 = 1;
  return (Datum) 0;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  if (VAR_3[VAR_9] < VAR_12[VAR_9] || VAR_3[VAR_9] >= (VAR_11[VAR_9] + VAR_12[VAR_9]))
  {
   *VAR_8 = 1;
   return (Datum) 0;
  }
 }




 VAR_13 = FUNC_6(VAR_2, VAR_11, VAR_12, VAR_3);




 if (FUNC_11(VAR_18, VAR_13))
 {
  *VAR_8 = 1;
  return (Datum) 0;
 }




 *VAR_8 = 0;
 VAR_17 = FUNC_12(VAR_16, 0, VAR_18, VAR_13,
      VAR_5, VAR_6, VAR_7);
 return FUNC_5(VAR_17, VAR_6, VAR_5);
}
