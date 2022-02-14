
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Length; int* Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int BOOLEAN ;



BOOLEAN FUNC_0(PUNICODE_STRING VAR_0)
{
    return (VAR_0->Length == 2 && VAR_0->Buffer[0] == L'.');
}
