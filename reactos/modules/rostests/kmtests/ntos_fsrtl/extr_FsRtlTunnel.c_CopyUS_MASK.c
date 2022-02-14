
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_6__ {int * Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
typedef int * PWSTR ;
typedef TYPE_1__* PUNICODE_STRING ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;

PUNICODE_STRING FUNC_4(PUNICODE_STRING VAR_1)
{
    PUNICODE_STRING VAR_2 = (PUNICODE_STRING)FUNC_0(VAR_0,sizeof(UNICODE_STRING));
    FUNC_3(VAR_2 != ((void*)0), "US is NULL after allocated memory\n");
    VAR_2->Length = 0;
    VAR_2->MaximumLength =VAR_1->MaximumLength;
    if (VAR_2->MaximumLength)
    {
        VAR_2->Buffer = (PWSTR)FUNC_1(VAR_0, VAR_2->MaximumLength, 1633);
        FUNC_3(VAR_2->Buffer != ((void*)0), "US->Buffer is NULL after allocated memory\n");
        FUNC_2(VAR_2, VAR_1);
    }
    else
    {
        VAR_2->Buffer = ((void*)0);
    }
    return VAR_2;
}
