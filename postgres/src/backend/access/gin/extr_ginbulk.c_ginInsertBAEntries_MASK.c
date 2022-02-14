
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef scalar_t__ int32 ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointer ;
typedef int GinNullCategory ;
typedef int Datum ;
typedef int BuildAccumulator ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ,int ) ;

void
FUNC_3(BuildAccumulator *VAR_1,
       ItemPointer VAR_2, OffsetNumber VAR_3,
       Datum *VAR_4, GinNullCategory *VAR_5,
       int32 VAR_6)
{
 uint32 VAR_7 = VAR_6;

 if (VAR_6 <= 0)
  return;

 FUNC_0(FUNC_1(VAR_2) && VAR_3 >= VAR_0);




 VAR_7 |= (VAR_7 >> 1);
 VAR_7 |= (VAR_7 >> 2);
 VAR_7 |= (VAR_7 >> 4);
 VAR_7 |= (VAR_7 >> 8);
 VAR_7 |= (VAR_7 >> 16);
 VAR_7 >>= 1;
 VAR_7++;

 while (VAR_7 > 0)
 {
  int VAR_8;

  for (VAR_8 = VAR_7 - 1; VAR_8 < VAR_6 && VAR_8 >= 0; VAR_8 += VAR_7 << 1 )
   FUNC_2(VAR_1, VAR_2, VAR_3,
        VAR_4[VAR_8], VAR_5[VAR_8]);

  VAR_7 >>= 1;
 }
}
