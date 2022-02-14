
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pNextCharW; size_t next_arg; size_t argc; char** argv; } ;
typedef TYPE_1__ context_t ;
typedef char WCHAR ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static WCHAR FUNC_0(context_t * VAR_0, BOOL VAR_1)
{
    WCHAR VAR_2;


    if (VAR_0->pNextCharW) {
        VAR_2 = *VAR_0->pNextCharW;
        if (VAR_2) {
            VAR_0->pNextCharW++;
            return VAR_2;
        }

        VAR_0->pNextCharW = ((void*)0);
    }


    if ((VAR_0->pNextCharW == ((void*)0)) && (VAR_0->next_arg < VAR_0->argc) && (VAR_1)) {
        VAR_0->pNextCharW = VAR_0->argv[VAR_0->next_arg];
        VAR_0->next_arg++;
    }

    if (VAR_0->pNextCharW) {
        VAR_2 = *VAR_0->pNextCharW;
        if (VAR_2) {
            VAR_0->pNextCharW++;
        }
        else
        {

            VAR_0->pNextCharW = ((void*)0);
        }
        return VAR_2;
    }
    return '\0';
}
