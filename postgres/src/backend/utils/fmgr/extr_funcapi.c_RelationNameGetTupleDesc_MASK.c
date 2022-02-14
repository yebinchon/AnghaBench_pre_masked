
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int Relation ;
typedef int RangeVar ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (char const*) ;

TupleDesc
FUNC_6(const char *VAR_1)
{
 RangeVar *VAR_2;
 Relation VAR_3;
 TupleDesc VAR_4;
 List *VAR_5;


 VAR_5 = FUNC_5(VAR_1);
 VAR_2 = FUNC_2(VAR_5);
 VAR_3 = FUNC_4(VAR_2, VAR_0);
 VAR_4 = FUNC_0(FUNC_1(VAR_3));
 FUNC_3(VAR_3, VAR_0);

 return VAR_4;
}
