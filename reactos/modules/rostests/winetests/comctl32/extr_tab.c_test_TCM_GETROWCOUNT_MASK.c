
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int * HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ,int ,int,int const) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,int ,int ,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(void)
{
    const INT VAR_12 = 5;
    HWND VAR_13;
    INT VAR_14;

    FUNC_3(VAR_11, VAR_1);

    VAR_13 = FUNC_2(VAR_10, VAR_7, VAR_5|VAR_4, VAR_12);
    FUNC_4(VAR_13 != ((void*)0), "Failed to create tab control\n");

    FUNC_3(VAR_11, VAR_1);

    VAR_14 = FUNC_1(VAR_13, VAR_6, 0, 0);
    FUNC_4(VAR_14 == 1, "Unexpected row count %d.\n", VAR_14);

    FUNC_5(VAR_11, VAR_3, VAR_9, "Get rowCount test sequence", VAR_0);
    FUNC_5(VAR_11, VAR_2, VAR_8, "Get rowCount test parent sequence", VAR_0);

    FUNC_0(VAR_13);
}
