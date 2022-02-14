
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int,int*,int*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int *,int,int) ;
 int FUNC_4 (char*,int,char*,int,int *,int,int,char) ;
 char* FUNC_5 (char*,int,int *,int,int,int,char) ;
 int FUNC_6 (int,int*,int*,int*) ;
 int FUNC_7 (int,int*,int*) ;
 int FUNC_8 (int,int*,int*,int*) ;
 int FUNC_9 (int,int*,int*) ;

__attribute__((used)) static void
FUNC_10(ArrayType *VAR_1,
     int VAR_2,
     int *VAR_3,
     int *VAR_4,
     char *VAR_5,
     bits8 *VAR_6,
     int *VAR_7,
     int *VAR_8,
     int VAR_9,
     bool VAR_10,
     char VAR_11)
{
 char *VAR_12 = FUNC_0(VAR_1);
 bits8 *VAR_13 = FUNC_1(VAR_1);
 char *VAR_14;
 int VAR_15,
    VAR_16,
    VAR_17[VAR_0],
    VAR_18[VAR_0],
    VAR_19[VAR_0],
    VAR_20[VAR_0];
 int VAR_21,
    VAR_22,
    VAR_23;

 VAR_15 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7);
 VAR_14 = FUNC_5(VAR_5, 0, VAR_6, VAR_15,
       VAR_9, VAR_10, VAR_11);
 FUNC_7(VAR_2, VAR_3, VAR_17);
 FUNC_8(VAR_2, VAR_18, VAR_7, VAR_8);
 FUNC_6(VAR_2, VAR_19, VAR_17, VAR_18);
 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
  VAR_20[VAR_21] = 0;
 VAR_16 = 0;
 VAR_22 = VAR_2 - 1;
 do
 {
  if (VAR_19[VAR_22])
  {

   VAR_14 = FUNC_5(VAR_14, VAR_15, VAR_6,
         VAR_19[VAR_22],
         VAR_9, VAR_10, VAR_11);
   VAR_15 += VAR_19[VAR_22];
  }
  VAR_23 = FUNC_4(VAR_12, 1,
       VAR_14, VAR_15, VAR_6,
       VAR_9, VAR_10, VAR_11);
  if (VAR_13)
   FUNC_3(VAR_13, VAR_16,
         VAR_6, VAR_15,
         1);
  VAR_12 += VAR_23;
  VAR_14 += VAR_23;
  VAR_15++;
  VAR_16++;
 } while ((VAR_22 = FUNC_9(VAR_2, VAR_20, VAR_18)) != -1);
}
