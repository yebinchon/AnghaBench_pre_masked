
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int command; int state; } ;
typedef TYPE_1__ POP3Transport ;
typedef int POP3COMMAND ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(POP3Transport *VAR_1, POP3COMMAND VAR_2)
{
    VAR_1->state = VAR_0;
    VAR_1->command = VAR_2;
}
