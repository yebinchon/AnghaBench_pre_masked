
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2 (
    char *VAR_3,
    UINT32 VAR_4)
{
    UINT32 VAR_5;
    UINT32 VAR_6;
    UINT32 VAR_7;


    if (!VAR_4)
    {
        FUNC_1 (VAR_3, "NONE");
        return;
    }

    VAR_7 = 1;
    VAR_3[0] = 0;
    VAR_5 = VAR_1;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {


        if (VAR_4 & VAR_5)
        {
            FUNC_0 (VAR_3, &VAR_2[VAR_6][VAR_7]);
            VAR_7 = 0;
        }

        VAR_5 <<= 1;
    }
}
