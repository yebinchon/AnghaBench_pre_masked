
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* partopcintype; scalar_t__* parttypid; int * partopfamily; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* PartitionKey ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static Oid
FUNC_4(PartitionKey VAR_2, int VAR_3, StrategyNumber VAR_4,
        bool *VAR_5)
{
 Oid VAR_6;





 VAR_6 = FUNC_3(VAR_2->partopfamily[VAR_3],
          VAR_2->partopcintype[VAR_3],
          VAR_2->partopcintype[VAR_3],
          VAR_4);
 if (!FUNC_1(VAR_6))
  FUNC_2(VAR_0, "missing operator %d(%u,%u) in partition opfamily %u",
    VAR_4, VAR_2->partopcintype[VAR_3], VAR_2->partopcintype[VAR_3],
    VAR_2->partopfamily[VAR_3]);






 *VAR_5 = (VAR_2->parttypid[VAR_3] != VAR_2->partopcintype[VAR_3] &&
      VAR_2->partopcintype[VAR_3] != VAR_1 &&
      !FUNC_0(VAR_2->partopcintype[VAR_3]));

 return VAR_6;
}
