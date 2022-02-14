
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int,int,char,int **,int *,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

int32 *
FUNC_11(ArrayType *VAR_5, int *VAR_6)
{
 int32 *VAR_7;
 Datum *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_5) != VAR_0)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_1),
     FUNC_7("typmod array must be type cstring[]")));

 if (FUNC_1(VAR_5) != 1)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_2),
     FUNC_7("typmod array must be one-dimensional")));

 if (FUNC_3(VAR_5))
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("typmod array must not contain nulls")));


 FUNC_4(VAR_5, VAR_0,
       -2, 0, 'c',
       &VAR_8, ((void*)0), VAR_6);

 VAR_7 = (int32 *) FUNC_8(*VAR_6 * sizeof(int32));

 for (VAR_9 = 0; VAR_9 < *VAR_6; VAR_9++)
  VAR_7[VAR_9] = FUNC_10(FUNC_2(VAR_8[VAR_9]));

 FUNC_9(VAR_8);

 return VAR_7;
}
