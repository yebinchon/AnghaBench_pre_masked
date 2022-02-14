
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;


 unsigned long FUNC_0 (int,int ,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_0, ERR_STRING_DATA *VAR_1)
{
    unsigned long VAR_2 = FUNC_0(VAR_0, 0, 0);

    for (; VAR_1->error != 0; VAR_1++)
        VAR_1->error |= VAR_2;
}
