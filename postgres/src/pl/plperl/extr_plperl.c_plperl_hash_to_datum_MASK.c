
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int SV ;
typedef int HeapTuple ;
typedef int HV ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static Datum
FUNC_3(SV *VAR_0, TupleDesc VAR_1)
{
 HeapTuple VAR_2 = FUNC_2((HV *) FUNC_1(VAR_0), VAR_1);

 return FUNC_0(VAR_2);
}
