
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int size; } ;
typedef int TSVectorStat ;
typedef TYPE_1__* TSVector ;
typedef int MemoryContext ;


 int FUNC_0 (int ,int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(MemoryContext VAR_0, TSVectorStat *VAR_1, TSVector VAR_2,
     uint32 VAR_3, uint32 VAR_4, uint32 VAR_5)
{
 uint32 VAR_6;
 uint32 VAR_7 = (VAR_3 + VAR_4) >> 1;

 VAR_6 = (VAR_3 + VAR_7) >> 1;
 if (VAR_3 != VAR_7 && VAR_6 >= VAR_5 && VAR_6 - VAR_5 < VAR_2->size)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6 - VAR_5);
 VAR_6 = (VAR_4 + VAR_7 + 1) >> 1;
 if (VAR_7 + 1 != VAR_4 && VAR_6 >= VAR_5 && VAR_6 - VAR_5 < VAR_2->size)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6 - VAR_5);

 if (VAR_3 != VAR_7)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_5);
 if (VAR_4 != VAR_7 + 1)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_7 + 1, VAR_4, VAR_5);
}
