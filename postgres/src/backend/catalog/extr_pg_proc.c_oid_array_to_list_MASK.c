
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 int * FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int,char,int **,int *,int*) ;
 int * FUNC_2 (int *,int ) ;

List *
FUNC_3(Datum VAR_2)
{
 ArrayType *VAR_3 = FUNC_0(VAR_2);
 Datum *VAR_4;
 int VAR_5;
 int VAR_6;
 List *VAR_7 = VAR_0;

 FUNC_1(VAR_3,
       VAR_1,
       sizeof(Oid), 1, 'i',
       &VAR_4, ((void*)0), &VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_7 = FUNC_2(VAR_7, VAR_4[VAR_6]);
 return VAR_7;
}
