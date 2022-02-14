
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_2__ {int remainder; int modulus; } ;
typedef TYPE_1__ PartitionHashBound ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int32
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 PartitionHashBound *VAR_2 = (*(PartitionHashBound *const *) VAR_0);
 PartitionHashBound *VAR_3 = (*(PartitionHashBound *const *) VAR_1);

 return FUNC_0(VAR_2->modulus, VAR_2->remainder,
        VAR_3->modulus, VAR_3->remainder);
}
