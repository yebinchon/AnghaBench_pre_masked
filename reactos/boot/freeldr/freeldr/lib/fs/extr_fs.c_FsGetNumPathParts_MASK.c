
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef char* PCSTR ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 size_t FUNC_1 (char*) ;

ULONG FUNC_2(PCSTR VAR_0)
{
    size_t VAR_1;
    size_t VAR_2;
    ULONG VAR_3;

    VAR_2 = FUNC_1(VAR_0);

    for (VAR_1 = 0, VAR_3 = 0; VAR_1 < VAR_2; VAR_1++)
    {
        if ((VAR_0[VAR_1] == '\\') || (VAR_0[VAR_1] == '/'))
        {
            VAR_3++;
        }
    }
    VAR_3++;

    FUNC_0("FsGetNumPathParts() Path = %s NumPathParts = %d\n", VAR_0, VAR_3);

    return VAR_3;
}
