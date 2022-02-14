
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* VacAttrStatsP ;
typedef int TupleDesc ;
struct TYPE_3__ {int tupattnum; int tupDesc; int * rows; } ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int ,int,int ,int*) ;

__attribute__((used)) static Datum
FUNC_1(VacAttrStatsP VAR_0, int VAR_1, bool *VAR_2)
{
 int VAR_3 = VAR_0->tupattnum;
 HeapTuple VAR_4 = VAR_0->rows[VAR_1];
 TupleDesc VAR_5 = VAR_0->tupDesc;

 return FUNC_0(VAR_4, VAR_3, VAR_5, VAR_2);
}
