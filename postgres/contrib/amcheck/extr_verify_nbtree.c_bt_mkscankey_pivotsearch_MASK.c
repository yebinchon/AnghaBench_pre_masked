
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pivotsearch; } ;
typedef int Relation ;
typedef int IndexTuple ;
typedef TYPE_1__* BTScanInsert ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline BTScanInsert
FUNC_1(Relation VAR_0, IndexTuple VAR_1)
{
 BTScanInsert VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_2->pivotsearch = 1;

 return VAR_2;
}
