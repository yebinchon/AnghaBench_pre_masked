
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int,char,int **,int**,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static List *
FUNC_7(ArrayType *VAR_4)
{
 Datum *VAR_5;
 bool *VAR_6;
 int VAR_7;
 List *VAR_8 = VAR_2;
 int VAR_9;

 FUNC_1(VAR_4, VAR_3, -1, 0, 'i',
       &VAR_5, &VAR_6, &VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  if (VAR_6[VAR_9])
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("name or argument lists may not contain nulls")));
  VAR_8 = FUNC_5(VAR_8, FUNC_6(FUNC_0(VAR_5[VAR_9])));
 }

 return VAR_8;
}
