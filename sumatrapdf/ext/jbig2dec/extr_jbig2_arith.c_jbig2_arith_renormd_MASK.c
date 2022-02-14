
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int A; scalar_t__ CT; int C; } ;
typedef TYPE_1__ Jbig2ArithState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(Jbig2ArithState *VAR_0)
{

    do {
        if (VAR_0->CT == 0)
            FUNC_0(VAR_0);
        VAR_0->A <<= 1;
        VAR_0->C <<= 1;
        VAR_0->CT--;
    } while ((VAR_0->A & 0x8000) == 0);
}
