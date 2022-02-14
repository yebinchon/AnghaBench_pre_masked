
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int bits8 ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,int ,char*) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int FUNC_11 (scalar_t__,int *,int*,char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static char **
FUNC_13(ArrayType *VAR_1, int *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);
 int *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 int16 VAR_6;
 bool VAR_7;
 char VAR_8;
 char **VAR_9;
 char *VAR_10;
 bits8 *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_6(FUNC_2(VAR_1) == VAR_0);

 *VAR_2 = VAR_5 = FUNC_5(VAR_3, VAR_4);

 FUNC_11(FUNC_2(VAR_1),
       &VAR_6, &VAR_7, &VAR_8);

 VAR_9 = (char **) FUNC_12(VAR_5 * sizeof(char *));

 VAR_10 = FUNC_0(VAR_1);
 VAR_11 = FUNC_4(VAR_1);
 VAR_12 = 1;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
 {
  if (VAR_11 && (*VAR_11 & VAR_12) == 0)
  {
   VAR_9[VAR_13] = ((void*)0);
  }
  else
  {
   VAR_9[VAR_13] = FUNC_8(FUNC_7(VAR_10));
   VAR_10 = FUNC_9(VAR_10, VAR_6, VAR_10);
   VAR_10 = (char *) FUNC_10(VAR_10, VAR_8);
  }


  if (VAR_11)
  {
   VAR_12 <<= 1;
   if (VAR_12 == 0x100)
   {
    VAR_11++;
    VAR_12 = 1;
   }
  }
 }

 return VAR_9;
}
