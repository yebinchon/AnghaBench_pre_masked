
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_7__ {int heapkeyspace; int pivotsearch; } ;
struct TYPE_6__ {int target; int rel; } ;
typedef int OffsetNumber ;
typedef TYPE_1__ BtreeCheckState ;
typedef TYPE_2__* BTScanInsert ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(BtreeCheckState *VAR_0, BTScanInsert VAR_1,
       OffsetNumber VAR_2)
{
 int32 VAR_3;

 FUNC_0(VAR_1->pivotsearch);

 VAR_3 = FUNC_1(VAR_0->rel, VAR_1, VAR_0->target, VAR_2);


 if (!VAR_1->heapkeyspace)
  return VAR_3 >= 0;
 return VAR_3 > 0;
}
