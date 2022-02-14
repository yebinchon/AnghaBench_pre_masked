
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int size; } ;
struct TYPE_12__ {int maxdepth; } ;
typedef TYPE_1__ TSVectorStat ;
typedef TYPE_2__* TSVector ;
typedef int MemoryContext ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_2__*,int ,int,int) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static TSVectorStat *
FUNC_6(MemoryContext VAR_0, TSVectorStat *VAR_1, Datum VAR_2)
{
 TSVector VAR_3 = FUNC_1(VAR_2);
 uint32 VAR_4,
    VAR_5 = 0,
    VAR_6;

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = FUNC_2(VAR_0, sizeof(TSVectorStat));
  VAR_1->maxdepth = 1;
 }


 if (VAR_3 == ((void*)0) || VAR_3->size == 0)
 {
  if (VAR_3 && VAR_3 != (TSVector) FUNC_0(VAR_2))
   FUNC_5(VAR_3);
  return VAR_1;
 }

 VAR_4 = VAR_3->size - 1;
 for (; VAR_4 > 0; VAR_4 >>= 1)
  VAR_5++;

 VAR_5 = 1 << VAR_5;
 VAR_6 = (VAR_5 - VAR_3->size) / 2;

 FUNC_4(VAR_0, VAR_1, VAR_3, (VAR_5 >> 1) - VAR_6);
 FUNC_3(VAR_0, VAR_1, VAR_3, 0, VAR_5, VAR_6);

 return VAR_1;
}
