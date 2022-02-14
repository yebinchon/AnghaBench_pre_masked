
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int,char,int **,int *,int*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static List *
FUNC_4(ArrayType *VAR_2)
{
 Datum *VAR_3;
 int VAR_4,
    VAR_5;
 List *VAR_6 = VAR_0;

 FUNC_1(VAR_2,
       VAR_1, -1, 0, 'i',
       &VAR_3, ((void*)0), &VAR_4);

 if (VAR_4 == 0)
  return VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_6 = FUNC_2(VAR_6, FUNC_3(FUNC_0(VAR_3[VAR_5])));

 return VAR_6;
}
