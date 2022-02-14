
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int IndexTuple ;
typedef int GISTSTATE ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int*,int) ;
 int FUNC_1 (int *,int *,int,int *,int*) ;

IndexTuple
FUNC_2(Relation VAR_1, IndexTuple *VAR_2, int VAR_3, GISTSTATE *VAR_4)
{
 Datum VAR_5[VAR_0];
 bool VAR_6[VAR_0];

 FUNC_1(VAR_4, VAR_2, VAR_3, VAR_5, VAR_6);

 return FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6, 0);
}
