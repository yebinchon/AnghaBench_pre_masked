
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemIdData ;
typedef int IndexTuple ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

bool
FUNC_4(Page VAR_1, IndexTuple *VAR_2, int VAR_3, OffsetNumber VAR_4, Size VAR_5)
{
 unsigned int VAR_6 = VAR_5,
    VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_6 += FUNC_0(VAR_2[VAR_8]) + sizeof(ItemIdData);

 if (VAR_4 != VAR_0)
 {
  IndexTuple VAR_9 = (IndexTuple) FUNC_2(VAR_1, FUNC_3(VAR_1, VAR_4));

  VAR_7 = FUNC_0(VAR_9) + sizeof(ItemIdData);
 }

 return (FUNC_1(VAR_1) + VAR_7 < VAR_6);
}
