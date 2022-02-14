
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int atStart; int atEnd; scalar_t__ portalPos; TYPE_1__* queryDesc; scalar_t__ holdStore; int holdContext; } ;
struct TYPE_5__ {int snapshot; } ;
typedef TYPE_1__ QueryDesc ;
typedef TYPE_2__* Portal ;
typedef int MemoryContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(Portal VAR_0)
{
 QueryDesc *VAR_1;


 if (VAR_0->holdStore)
 {
  MemoryContext VAR_2;

  VAR_2 = FUNC_1(VAR_0->holdContext);
  FUNC_4(VAR_0->holdStore);
  FUNC_1(VAR_2);
 }


 VAR_1 = VAR_0->queryDesc;
 if (VAR_1)
 {
  FUNC_3(VAR_1->snapshot);
  FUNC_0(VAR_1);
  FUNC_2();
 }

 VAR_0->atStart = 1;
 VAR_0->atEnd = 0;
 VAR_0->portalPos = 0;
}
