
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int OldHandle; int Number; struct TYPE_4__* Next; } ;
typedef TYPE_1__ REDIRECTION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

VOID
FUNC_3(REDIRECTION *VAR_1, REDIRECTION *VAR_2)
{
    for (; VAR_1 != VAR_2; VAR_1 = VAR_1->Next)
    {
        FUNC_0(FUNC_1(VAR_1->Number));
        FUNC_2(VAR_1->Number, VAR_1->OldHandle);
        VAR_1->OldHandle = VAR_0;
    }
}
