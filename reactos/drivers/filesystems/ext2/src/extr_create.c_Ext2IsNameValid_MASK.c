
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_3__ {int Length; int Buffer; } ;
typedef int* PUSHORT ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0(PUNICODE_STRING VAR_2)
{
    USHORT VAR_3 = 0;
    PUSHORT VAR_4 = (PUSHORT) VAR_2->Buffer;

    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }

    while (VAR_3 < (VAR_2->Length / sizeof(WCHAR))) {

        if (VAR_4[VAR_3] == 0) {
            break;
        }

        if (VAR_4[VAR_3] == L'|' || VAR_4[VAR_3] == L':' ||
                VAR_4[VAR_3] == L'/' || VAR_4[VAR_3] == L'*' ||
                VAR_4[VAR_3] == L'?' || VAR_4[VAR_3] == L'\"' ||
                VAR_4[VAR_3] == L'<' || VAR_4[VAR_3] == L'>' ) {

            return VAR_0;
        }

        VAR_3++;
    }

    return VAR_1;
}
