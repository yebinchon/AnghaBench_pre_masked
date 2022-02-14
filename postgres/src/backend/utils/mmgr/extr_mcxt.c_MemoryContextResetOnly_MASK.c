
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int isReset; TYPE_1__* methods; } ;
struct TYPE_9__ {int (* reset ) (TYPE_2__*) ;} ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(MemoryContext VAR_0)
{
 FUNC_0(FUNC_2(VAR_0));


 if (!VAR_0->isReset)
 {
  FUNC_1(VAR_0);
  VAR_0->methods->reset(VAR_0);
  VAR_0->isReset = 1;
  FUNC_4(VAR_0);
  FUNC_3(VAR_0, 0, 0);
 }
}
