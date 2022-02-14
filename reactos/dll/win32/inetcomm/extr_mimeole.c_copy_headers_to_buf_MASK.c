
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int QuadPart; } ;
typedef int LONGLONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 char* FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int *,char*,int,int*) ;
 int FUNC_6 (int *,TYPE_1__,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_6, char **VAR_7)
{
    char *VAR_8 = ((void*)0);
    DWORD VAR_9 = VAR_2, VAR_10 = 0, VAR_11 = 0;
    HRESULT VAR_12;
    BOOL VAR_13 = VAR_1;

    *VAR_7 = ((void*)0);

    do
    {
        char *VAR_14;
        DWORD VAR_15;

        if(!VAR_8)
            VAR_8 = FUNC_2(FUNC_1(), 0, VAR_9 + 1);
        else
        {
            VAR_9 *= 2;
            VAR_8 = FUNC_4(FUNC_1(), 0, VAR_8, VAR_9 + 1);
        }
        if(!VAR_8)
        {
            VAR_12 = VAR_0;
            goto fail;
        }

        VAR_12 = FUNC_5(VAR_6, VAR_8 + VAR_10, VAR_9 - VAR_10, &VAR_15);
        if(FUNC_0(VAR_12)) goto fail;

        VAR_10 += VAR_15;
        VAR_8[VAR_10] = '\0';

        if(VAR_15 == 0) VAR_13 = VAR_5;

        while(!VAR_13 && (VAR_14 = FUNC_7(VAR_8 + VAR_11, "\r\n")))
        {
            DWORD VAR_16 = VAR_14 - VAR_8 + 2;
            if(VAR_16 - VAR_11 == 2)
            {
                LARGE_INTEGER VAR_17;
                VAR_17.QuadPart = (LONGLONG)VAR_16 - VAR_10;
                FUNC_6(VAR_6, VAR_17, VAR_3, ((void*)0));
                VAR_8[VAR_16] = '\0';
                VAR_13 = VAR_5;
            }
            else
                VAR_11 = VAR_16;
        }
    } while(!VAR_13);

    *VAR_7 = VAR_8;
    return VAR_4;

fail:
    FUNC_3(FUNC_1(), 0, VAR_8);
    return VAR_12;
}
