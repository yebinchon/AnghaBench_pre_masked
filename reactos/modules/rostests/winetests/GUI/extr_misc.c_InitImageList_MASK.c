
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int INT ;
typedef int * HIMAGELIST ;
typedef int * HICON ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (scalar_t__,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

HIMAGELIST
FUNC_6(UINT VAR_5,
              UINT VAR_6,
              UINT VAR_7,
              UINT VAR_8)
{
    HICON VAR_9;
    HIMAGELIST VAR_10;
    UINT VAR_11;
    INT VAR_12;


    VAR_10 = FUNC_2(VAR_7,
                                  VAR_8,
                                  VAR_1 | VAR_0,
                                  VAR_6 - VAR_5,
                                  0);
    if (VAR_10 == ((void*)0))
        return ((void*)0);


    for (VAR_11 = VAR_5; VAR_11 <= VAR_6; VAR_11++)
    {
        VAR_9 = (HICON)FUNC_4(VAR_4,
                                  FUNC_5(VAR_11),
                                  VAR_2,
                                  VAR_7,
                                  VAR_8,
                                  VAR_3);
        if (VAR_9 == ((void*)0))
            goto fail;

        VAR_12 = FUNC_1(VAR_10,
                                VAR_9);
        if (VAR_12 == -1)
            goto fail;

        FUNC_0(VAR_9);
    }

    return VAR_10;

fail:
    FUNC_3(VAR_10);
    return ((void*)0);
}
