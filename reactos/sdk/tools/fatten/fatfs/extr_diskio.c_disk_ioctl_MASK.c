
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int ** VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int,int,int *) ;
 int FUNC_4 (char*) ;
 int* VAR_7 ;

DRESULT FUNC_5(
    BYTE VAR_8,
    BYTE VAR_9,
    void *VAR_10
    )
{
    if (VAR_8 < VAR_6)
    {
        if (VAR_5[VAR_8] != ((void*)0))
        {
            switch (VAR_9)
            {
            case 132:
                FUNC_0(VAR_5[VAR_8]);
                return VAR_1;
            case 129:
                *(DWORD*)VAR_10 = 512;
                return VAR_1;
            case 131:
                *(DWORD*)VAR_10 = 512;
                return VAR_1;
            case 130:
            {
                if (VAR_7[VAR_8] <= 0)
                {
                    if (FUNC_1(VAR_5[VAR_8], 0, VAR_3))
                        FUNC_4("fseek failed!\n");
                    else
                        VAR_7[VAR_8] = FUNC_2(VAR_5[VAR_8]) / 512;
                }

                *(DWORD*)VAR_10 = VAR_7[VAR_8];
                return VAR_1;
            }
            case 128:
            {
                int VAR_11 = *(DWORD*)VAR_10;
                long VAR_12;

                VAR_7[VAR_8] = VAR_11;

                FUNC_1(VAR_5[VAR_8], 0, VAR_3);
                VAR_12 = FUNC_2(VAR_5[VAR_8]) / 512;

                if (VAR_12 < VAR_11)
                {
                    if (FUNC_1(VAR_5[VAR_8], VAR_11 * 512 - 1, VAR_4))
                        return VAR_0;

                    FUNC_3(VAR_10, 1, 1, VAR_5[VAR_8]);

                    return VAR_1;
                }
                else
                {

                    return VAR_1;
                }
            }
            }
        }
    }

    return VAR_2;
}
