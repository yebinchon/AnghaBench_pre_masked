
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int ItemIdData ;
typedef int IndexTuple ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool
FUNC_1(IndexTuple *VAR_1, int VAR_2)
{
 int VAR_3;
 Size VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_4 += FUNC_0(VAR_1[VAR_3]) + sizeof(ItemIdData);


 return (VAR_4 <= VAR_0);
}
