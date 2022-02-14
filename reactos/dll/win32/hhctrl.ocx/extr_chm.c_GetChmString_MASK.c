
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int strings_size; int ** strings; int strings_stream; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef int * LPCSTR ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ CHMInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int*) ;
 int FUNC_2 (int ,TYPE_1__,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int ** FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int ** FUNC_9 (int **,int) ;

__attribute__((used)) static LPCSTR FUNC_10(CHMInfo *VAR_4, DWORD VAR_5)
{
    LPCSTR VAR_6;

    if(!VAR_4->strings_stream)
        return ((void*)0);

    if(VAR_4->strings_size <= (VAR_5 >> VAR_0)) {
        VAR_4->strings_size = (VAR_5 >> VAR_0)+1;
        if(VAR_4->strings)
            VAR_4->strings = FUNC_9(VAR_4->strings,
                    VAR_4->strings_size*sizeof(char*));
        else
            VAR_4->strings = FUNC_7(
                    VAR_4->strings_size*sizeof(char*));

    }

    if(!VAR_4->strings[VAR_5 >> VAR_0]) {
        LARGE_INTEGER VAR_7;
        DWORD VAR_8;
        HRESULT VAR_9;

        VAR_7.QuadPart = VAR_5 & ~VAR_1;
        VAR_9 = FUNC_2(VAR_4->strings_stream, VAR_7, VAR_3, ((void*)0));
        if(FUNC_0(VAR_9)) {
            FUNC_4("Seek failed: %08x\n", VAR_9);
            return ((void*)0);
        }

        VAR_4->strings[VAR_5 >> VAR_0] = FUNC_6(VAR_2);

        VAR_9 = FUNC_1(VAR_4->strings_stream, VAR_4->strings[VAR_5 >> VAR_0],
                            VAR_2, &VAR_8);
        if(FUNC_0(VAR_9)) {
            FUNC_4("Read failed: %08x\n", VAR_9);
            FUNC_8(VAR_4->strings[VAR_5 >> VAR_0]);
            VAR_4->strings[VAR_5 >> VAR_0] = ((void*)0);
            return ((void*)0);
        }
    }

    VAR_6 = VAR_4->strings[VAR_5 >> VAR_0] + (VAR_5 & VAR_1);
    FUNC_3("offset %#x => %s\n", VAR_5, FUNC_5(VAR_6));
    return VAR_6;
}
