
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ UINT ;
typedef int INT ;
typedef int * HIMAGELIST ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (scalar_t__,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int * FUNC_5 (int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int ,int) ;
 int VAR_5 ;

HIMAGELIST
FUNC_8(UINT VAR_6,
              UINT VAR_7,
              UINT VAR_8,
              UINT VAR_9,
              ULONG VAR_10)
{
    HANDLE VAR_11;
    HIMAGELIST VAR_12;
    UINT VAR_13;
    INT VAR_14;


    VAR_12 = FUNC_3(VAR_8,
                            VAR_9,
                            VAR_1 | VAR_0,
                            VAR_7 - VAR_6,
                            0);
    if (VAR_12 == ((void*)0))
        return ((void*)0);

    VAR_14 = 0;
    for (VAR_13 = VAR_6; VAR_13 <= VAR_7 && VAR_14 != -1; VAR_13++)
    {
        VAR_11 = FUNC_5(VAR_5,
                            FUNC_6(VAR_13),
                            VAR_10,
                            VAR_8,
                            VAR_9,
                            VAR_4);
        if (VAR_11 == ((void*)0))
        {
            FUNC_4(VAR_12);
            VAR_12 = ((void*)0);
            break;
        }

        if (VAR_10 == VAR_2)
        {
            VAR_14 = FUNC_2(VAR_12,
                                      VAR_11,
                                      FUNC_7(255, 0, 128));
        }
        else if (VAR_10 == VAR_3)
        {
            VAR_14 = FUNC_1(VAR_12,
                                    VAR_11);
        }

        FUNC_0(VAR_11);
    }

    if (VAR_14 == -1)
    {
        FUNC_4(VAR_12);
        VAR_12 = ((void*)0);
    }

    return VAR_12;
}
