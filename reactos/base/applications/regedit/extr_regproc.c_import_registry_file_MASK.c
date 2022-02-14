
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

BOOL FUNC_3(FILE* VAR_2)
{
    if (VAR_2)
    {
        BYTE VAR_3[2];
        if (FUNC_0( VAR_3, 2, 1, VAR_2) == 1)
        {
            if (VAR_3[0] == 0xff && VAR_3[1] == 0xfe)
            {
                FUNC_2(VAR_2);
            } else
            {
                FUNC_1(VAR_2, (char*)VAR_3);
            }
        }
        return VAR_1;
    }
    return VAR_0;
}
