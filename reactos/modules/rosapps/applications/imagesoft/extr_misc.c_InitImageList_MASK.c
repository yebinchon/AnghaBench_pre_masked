
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int INT ;
typedef int * HIMAGELIST ;
typedef int HBITMAP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ,int ,int,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

HIMAGELIST
FUNC_7(UINT VAR_7, UINT VAR_8)
{
    HBITMAP VAR_9;
    HIMAGELIST VAR_10;
    UINT VAR_11, VAR_12;
    INT VAR_13;
    FUNC_0(VAR_13);


    VAR_10 = FUNC_3(VAR_5,
                                  VAR_4,
                                  VAR_1 | VAR_0,
                                  VAR_7,
                                  0);
    if (! VAR_10)
        return ((void*)0);


    for (VAR_11 = VAR_8, VAR_12 = 0; VAR_12 < VAR_7; VAR_11++, VAR_12++)
    {
        VAR_9 = FUNC_4(VAR_6,
                            FUNC_5(VAR_11),
                            VAR_2,
                            VAR_5,
                            VAR_4,
                            VAR_3);

        VAR_13 = FUNC_2(VAR_10,
                                  VAR_9,
                                  FUNC_6(255, 255, 254));

        FUNC_1(VAR_9);
    }

    return VAR_10;

}
