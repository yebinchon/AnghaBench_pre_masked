
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int partcollation; int partsupfunc; int partnatts; } ;
struct TYPE_4__ {int lower; int kind; int datums; } ;
typedef TYPE_1__ PartitionRangeBound ;
typedef TYPE_2__* PartitionKey ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int32
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 PartitionRangeBound *VAR_3 = (*(PartitionRangeBound *const *) VAR_0);
 PartitionRangeBound *VAR_4 = (*(PartitionRangeBound *const *) VAR_1);
 PartitionKey VAR_5 = (PartitionKey) VAR_2;

 return FUNC_0(VAR_5->partnatts, VAR_5->partsupfunc,
        VAR_5->partcollation, VAR_3->datums, VAR_3->kind,
        VAR_3->lower, VAR_4);
}
