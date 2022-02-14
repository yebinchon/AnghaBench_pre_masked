
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int * partcollation; int * partsupfunc; } ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ PartitionListValue ;
typedef TYPE_2__* PartitionKey ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static int32
FUNC_2(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 Datum VAR_3 = (*(PartitionListValue *const *) VAR_0)->value,
    VAR_4 = (*(PartitionListValue *const *) VAR_1)->value;
 PartitionKey VAR_5 = (PartitionKey) VAR_2;

 return FUNC_0(FUNC_1(&VAR_5->partsupfunc[0],
             VAR_5->partcollation[0],
             VAR_3, VAR_4));
}
