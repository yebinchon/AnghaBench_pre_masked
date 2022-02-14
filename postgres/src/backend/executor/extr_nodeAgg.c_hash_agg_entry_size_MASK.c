
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleHashEntryData ;
typedef int Size ;
typedef int AggStatePerGroupData ;


 int FUNC_0 (int) ;

Size
FUNC_1(int VAR_0)
{
 Size VAR_1;


 VAR_1 = sizeof(TupleHashEntryData) +
  VAR_0 * sizeof(AggStatePerGroupData);
 VAR_1 = FUNC_0(VAR_1);

 return VAR_1;
}
