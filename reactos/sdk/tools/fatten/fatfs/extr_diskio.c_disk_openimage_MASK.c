
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSTATUS ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (char const*,char*) ;

DSTATUS FUNC_1(BYTE VAR_3, const char* VAR_4)
{
    if (VAR_3 < VAR_2)
    {
        if (VAR_1[0] != ((void*)0))
            return 0;

        VAR_1[0] = FUNC_0(VAR_4, "r+b");
        if (!VAR_1[0])
        {
            VAR_1[0] = FUNC_0(VAR_4, "w+b");
        }

        if (VAR_1[0] != ((void*)0))
            return 0;
    }
    return VAR_0;
}
