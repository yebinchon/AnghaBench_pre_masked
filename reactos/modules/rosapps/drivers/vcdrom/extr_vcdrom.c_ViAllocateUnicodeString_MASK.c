
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_3__ {int * Buffer; int MaximumLength; scalar_t__ Length; } ;
typedef int * PVOID ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int NTSTATUS ;


 int * FUNC_0 (int ,int ,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_1(USHORT VAR_3, PUNICODE_STRING VAR_4)
{
    PVOID VAR_5;


    VAR_5 = FUNC_0(VAR_0, VAR_3, ' dCV');

    VAR_4->Length = 0;
    VAR_4->MaximumLength = VAR_3;
    VAR_4->Buffer = VAR_5;


    if (VAR_5 != ((void*)0))
    {
        return VAR_2;
    }

    return VAR_1;
}
