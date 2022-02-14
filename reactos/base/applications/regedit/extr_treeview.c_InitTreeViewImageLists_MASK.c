
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int * HIMAGELIST ;
typedef scalar_t__ HICON ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int ,int ,int,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int *,int ) ;
 int VAR_15 ;

__attribute__((used)) static BOOL FUNC_9(HWND VAR_16)
{
    HIMAGELIST VAR_17;
    HICON VAR_18;


    if ((VAR_17 = FUNC_3(FUNC_1(VAR_11),
                                 FUNC_1(VAR_12),
                                 VAR_5 | VAR_4,
                                 0,
                                 VAR_10)) == ((void*)0))
    {
        return VAR_0;
    }


    VAR_18 = FUNC_6(VAR_15,
                      FUNC_7(VAR_2),
                      VAR_6,
                      FUNC_1(VAR_11),
                      FUNC_1(VAR_12),
                      0);
    if (VAR_18)
    {
        VAR_8 = FUNC_2(VAR_17, VAR_18);
        FUNC_0(VAR_18);
    }

    VAR_18 = FUNC_6(VAR_15,
                      FUNC_7(VAR_1),
                      VAR_6,
                      FUNC_1(VAR_11),
                      FUNC_1(VAR_12),
                      0);
    if (VAR_18)
    {
        VAR_7 = FUNC_2(VAR_17, VAR_18);
        FUNC_0(VAR_18);
    }

    VAR_18 = FUNC_6(VAR_15,
                      FUNC_7(VAR_3),
                      VAR_6,
                      FUNC_1(VAR_11),
                      FUNC_1(VAR_12),
                      0);
    if (VAR_18)
    {
        VAR_9 = FUNC_2(VAR_17, VAR_18);
        FUNC_0(VAR_18);
    }


    if (FUNC_5(VAR_17) < VAR_10)
    {
        FUNC_4(VAR_17);
        return VAR_0;
    }


    (void)FUNC_8(VAR_16, VAR_17, VAR_14);

    return VAR_13;
}
