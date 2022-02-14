
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int HeapTupleHeader ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int*) ;

bool
FUNC_2(HeapTupleHeader VAR_0,
     int32 VAR_1)
{
 bool VAR_2;
 int32 VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_0, "salary", &VAR_2));
 if (VAR_2)
  return 0;
 return VAR_3 > VAR_1;
}
