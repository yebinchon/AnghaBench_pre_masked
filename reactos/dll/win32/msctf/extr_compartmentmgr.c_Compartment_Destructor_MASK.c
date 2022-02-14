
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CompartmentEventSink; int variant; } ;
typedef TYPE_1__ Compartment ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Compartment *VAR_0)
{
    FUNC_2("destroying %p\n", VAR_0);
    FUNC_3(&VAR_0->variant);
    FUNC_4(&VAR_0->CompartmentEventSink);
    FUNC_1(FUNC_0(),0,VAR_0);
}
