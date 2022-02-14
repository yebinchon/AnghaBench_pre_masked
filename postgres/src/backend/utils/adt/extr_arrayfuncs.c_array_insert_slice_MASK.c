
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int*,int*,int*) ;
 int VAR_0 ;
 int FUNC_6 (int *,int,int *,int,int) ;
 int FUNC_7 (char*,int,char*,int,int *,int,int,char) ;
 char* FUNC_8 (char*,int,int *,int,int,int,char) ;
 int FUNC_9 (int,int*,int*,int*) ;
 int FUNC_10 (int,int*,int*) ;
 int FUNC_11 (int,int*,int*,int*) ;
 int FUNC_12 (int,int*,int*) ;

__attribute__((used)) static void
FUNC_13(ArrayType *VAR_1,
       ArrayType *VAR_2,
       ArrayType *VAR_3,
       int VAR_4,
       int *VAR_5,
       int *VAR_6,
       int *VAR_7,
       int *VAR_8,
       int VAR_9,
       bool VAR_10,
       char VAR_11)
{
 char *VAR_12 = FUNC_0(VAR_1);
 char *VAR_13 = FUNC_0(VAR_2);
 char *VAR_14 = FUNC_0(VAR_3);
 bits8 *VAR_15 = FUNC_3(VAR_1);
 bits8 *VAR_16 = FUNC_3(VAR_2);
 bits8 *VAR_17 = FUNC_3(VAR_3);
 int VAR_18 = FUNC_4(FUNC_2(VAR_2),
           FUNC_1(VAR_2));
 int VAR_19,
    VAR_20,
    VAR_21,
    VAR_22[VAR_0],
    VAR_23[VAR_0],
    VAR_24[VAR_0],
    VAR_25[VAR_0];
 int VAR_26,
    VAR_27,
    VAR_28;

 VAR_19 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_28 = FUNC_7(VAR_12, VAR_19,
      VAR_13, 0, VAR_16,
      VAR_9, VAR_10, VAR_11);
 VAR_12 += VAR_28;
 VAR_13 += VAR_28;
 if (VAR_15)
  FUNC_6(VAR_15, 0, VAR_16, 0, VAR_19);
 VAR_20 = VAR_19;
 FUNC_10(VAR_4, VAR_5, VAR_22);
 FUNC_11(VAR_4, VAR_23, VAR_7, VAR_8);
 FUNC_9(VAR_4, VAR_24, VAR_22, VAR_23);
 for (VAR_26 = 0; VAR_26 < VAR_4; VAR_26++)
  VAR_25[VAR_26] = 0;
 VAR_21 = 0;
 VAR_27 = VAR_4 - 1;
 do
 {

  if (VAR_24[VAR_27])
  {
   VAR_28 = FUNC_7(VAR_12, VAR_24[VAR_27],
        VAR_13, VAR_20, VAR_16,
        VAR_9, VAR_10, VAR_11);
   VAR_12 += VAR_28;
   VAR_13 += VAR_28;
   if (VAR_15)
    FUNC_6(VAR_15, VAR_19,
          VAR_16, VAR_20,
          VAR_24[VAR_27]);
   VAR_19 += VAR_24[VAR_27];
   VAR_20 += VAR_24[VAR_27];
  }

  VAR_28 = FUNC_7(VAR_12, 1,
       VAR_14, VAR_21, VAR_17,
       VAR_9, VAR_10, VAR_11);
  if (VAR_15)
   FUNC_6(VAR_15, VAR_19,
         VAR_17, VAR_21,
         1);
  VAR_12 += VAR_28;
  VAR_14 += VAR_28;
  VAR_19++;
  VAR_21++;

  VAR_13 = FUNC_8(VAR_13, VAR_20, VAR_16, 1,
        VAR_9, VAR_10, VAR_11);
  VAR_20++;
 } while ((VAR_27 = FUNC_12(VAR_4, VAR_25, VAR_23)) != -1);


 FUNC_7(VAR_12, VAR_18 - VAR_20,
      VAR_13, VAR_20, VAR_16,
      VAR_9, VAR_10, VAR_11);
 if (VAR_15)
  FUNC_6(VAR_15, VAR_19,
        VAR_16, VAR_20,
        VAR_18 - VAR_20);
}
