
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RefCount; } ;
typedef TYPE_1__* PSHARED_MEM ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(PSHARED_MEM VAR_0)
{
    FUNC_0();

    ++VAR_0->RefCount;
}
