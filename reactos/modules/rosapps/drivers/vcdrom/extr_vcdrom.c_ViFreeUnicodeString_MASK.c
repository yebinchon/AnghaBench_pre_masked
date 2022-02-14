
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ MaximumLength; scalar_t__ Length; int * Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;


 int FUNC_0 (int *,int ) ;

VOID
FUNC_1(PUNICODE_STRING VAR_0)
{



    if (VAR_0->Buffer != ((void*)0))
    {
        FUNC_0(VAR_0->Buffer, 0);
        VAR_0->Buffer = ((void*)0);
    }


    VAR_0->Length = 0;
    VAR_0->MaximumLength = 0;
}
