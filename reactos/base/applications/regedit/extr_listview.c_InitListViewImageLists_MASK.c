
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int * HIMAGELIST ;
typedef int HICON ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static BOOL FUNC_6(HWND VAR_12)
{
    HIMAGELIST VAR_13;
    HICON VAR_14;


    if ((VAR_13 = FUNC_1(VAR_0, VAR_1,
                                 VAR_5, 0, VAR_8)) == ((void*)0))
    {
        return VAR_2;
    }

    VAR_14 = FUNC_4(VAR_11, FUNC_5(VAR_3));
    VAR_6 = FUNC_0(VAR_13, VAR_14);

    VAR_14 = FUNC_4(VAR_11, FUNC_5(VAR_4));
    VAR_7 = FUNC_0(VAR_13, VAR_14);


    if (FUNC_2(VAR_13) < VAR_8)
    {
        return VAR_2;
    }


    (void)FUNC_3(VAR_12, VAR_13, VAR_9);

    return VAR_10;
}
