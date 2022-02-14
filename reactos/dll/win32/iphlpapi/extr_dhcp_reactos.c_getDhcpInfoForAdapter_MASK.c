
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int * PDWORD ;
typedef int * PBOOL ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

DWORD FUNC_4(DWORD VAR_3,
                            PBOOL VAR_4,
                            PDWORD VAR_5,
                            time_t *VAR_6,
                            time_t *VAR_7)
{
    DWORD VAR_8, VAR_9 = 0;

    VAR_8 = FUNC_1(&VAR_9);
    if (VAR_8 != VAR_0)
    {

        *VAR_4 = VAR_1;
        *VAR_5 = FUNC_3(VAR_2);
        *VAR_6 = 0;
        *VAR_7 = 0;
        return VAR_0;
    }

    VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
                                   VAR_6, VAR_7);

    FUNC_0();

    return VAR_8;
}
