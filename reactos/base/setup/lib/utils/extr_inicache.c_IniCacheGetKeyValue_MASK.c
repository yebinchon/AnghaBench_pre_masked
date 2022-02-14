
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__* PULONG ;
typedef char* PCHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static
PCHAR
FUNC_1(
    PCHAR VAR_0,
    PCHAR *VAR_1,
    PULONG VAR_2,
    BOOLEAN VAR_3)
{
    ULONG VAR_4 = 0;

    *VAR_1 = ((void*)0);
    *VAR_2 = 0;


    while (*VAR_0 != 0 && FUNC_0(*VAR_0))
    {
        VAR_0++;
    }


    if (*VAR_0 != '=')
    {
        return ((void*)0);
    }
    VAR_0++;


    while (*VAR_0 != 0 && FUNC_0(*VAR_0))
    {
        VAR_0++;
    }

    if (*VAR_0 == '"' && VAR_3)
    {
        VAR_0++;


        *VAR_1 = VAR_0;
        while (*VAR_0 != '"')
        {
            VAR_0++;
            VAR_4++;
        }
        VAR_0++;

        while (*VAR_0 && *VAR_0 != '\r' && *VAR_0 != '\n')
        {
            VAR_0++;
        }
    }
    else
    {

        *VAR_1 = VAR_0;
        while (*VAR_0 != 0 && *VAR_0 != '\r' && *VAR_0 != ';')
        {
            VAR_0++;
            VAR_4++;
        }
    }


    if (*VAR_0 == '\r')
        VAR_0++;
    if (*VAR_0 == '\n')
        VAR_0++;

    *VAR_2 = VAR_4;

    return VAR_0;
}
