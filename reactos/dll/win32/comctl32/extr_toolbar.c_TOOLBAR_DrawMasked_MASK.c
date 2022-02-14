
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ INT ;
typedef int HIMAGELIST ;
typedef int HDC ;
typedef int HBITMAP ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int *) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(HIMAGELIST VAR_4, int VAR_5, HDC VAR_6, INT VAR_7, INT VAR_8, UINT VAR_9)
{
    INT VAR_10, VAR_11;
    HBITMAP VAR_12, VAR_13;
    HDC VAR_14, VAR_15;

    FUNC_8(VAR_4, &VAR_10, &VAR_11);


    VAR_15 = FUNC_3(VAR_6);
    VAR_13 = FUNC_2(VAR_6, VAR_10, VAR_11);
    FUNC_10(VAR_15, VAR_13);
    FUNC_7(VAR_4, VAR_5, VAR_15, 0, 0, VAR_10, VAR_11,
                     FUNC_9(0xff, 0xff, 0xff), FUNC_9(0,0,0), VAR_9);


    VAR_14 = FUNC_3(0);
    VAR_12 = FUNC_1(VAR_10, VAR_11, 1, 1, ((void*)0));
    FUNC_10(VAR_14, VAR_12);


    FUNC_7(VAR_4, VAR_5, VAR_14, 0, 0, VAR_10, VAR_11,
                     FUNC_9(0xff, 0xff, 0xff), FUNC_9(0,0,0), VAR_2);
    FUNC_11(VAR_15, FUNC_9(0xff, 0xff, 0xff));
    FUNC_0(VAR_14, 0, 0, VAR_10, VAR_11, VAR_15, 0, 0, VAR_3);


    FUNC_11(VAR_6, FUNC_9(255, 255, 255));
    FUNC_10(VAR_6, FUNC_6(VAR_0));

    FUNC_0(VAR_6, VAR_7 + 1, VAR_8 + 1, VAR_10, VAR_11, VAR_14, 0, 0, 0xE20746);
    FUNC_10(VAR_6, FUNC_6(VAR_1));
    FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10, VAR_11, VAR_14, 0, 0, 0xE20746);


    FUNC_5(VAR_13);
    FUNC_4(VAR_15);
    FUNC_5 (VAR_12);
    FUNC_4(VAR_14);
}
