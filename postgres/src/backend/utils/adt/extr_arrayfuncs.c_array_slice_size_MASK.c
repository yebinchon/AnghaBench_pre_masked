
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*,int*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (char*,int,int *,int,int,int,char) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int,char) ;
 int FUNC_6 (int,int*,int*,int*) ;
 int FUNC_7 (int,int*,int*) ;
 int FUNC_8 (int,int*,int*,int*) ;
 int FUNC_9 (int,int*,int*) ;

__attribute__((used)) static int
FUNC_10(char *VAR_1, bits8 *VAR_2,
     int VAR_3, int *VAR_4, int *VAR_5,
     int *VAR_6, int *VAR_7,
     int VAR_8, bool VAR_9, char VAR_10)
{
 int VAR_11,
    VAR_12[VAR_0],
    VAR_13[VAR_0],
    VAR_14[VAR_0],
    VAR_15[VAR_0];
 char *VAR_16;
 int VAR_17,
    VAR_18,
    VAR_19;
 int VAR_20 = 0;

 FUNC_8(VAR_3, VAR_12, VAR_6, VAR_7);


 if (VAR_8 > 0 && !VAR_2)
  return FUNC_0(VAR_3, VAR_12) * FUNC_5(VAR_8, VAR_10);


 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_16 = FUNC_3(VAR_1, 0, VAR_2, VAR_11,
      VAR_8, VAR_9, VAR_10);
 FUNC_7(VAR_3, VAR_4, VAR_13);
 FUNC_6(VAR_3, VAR_14, VAR_13, VAR_12);
 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
  VAR_15[VAR_17] = 0;
 VAR_18 = VAR_3 - 1;
 do
 {
  if (VAR_14[VAR_18])
  {
   VAR_16 = FUNC_3(VAR_16, VAR_11, VAR_2, VAR_14[VAR_18],
        VAR_8, VAR_9, VAR_10);
   VAR_11 += VAR_14[VAR_18];
  }
  if (!FUNC_2(VAR_2, VAR_11))
  {
   VAR_19 = FUNC_4(0, VAR_8, VAR_16);
   VAR_19 = FUNC_5(VAR_19, VAR_10);
   VAR_16 += VAR_19;
   VAR_20 += VAR_19;
  }
  VAR_11++;
 } while ((VAR_18 = FUNC_9(VAR_3, VAR_15, VAR_12)) != -1);
 return VAR_20;
}
