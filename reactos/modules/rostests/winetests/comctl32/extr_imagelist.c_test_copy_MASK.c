
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HIMAGELIST ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (int,int,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    HIMAGELIST VAR_2, VAR_3;
    BOOL VAR_4;
    int VAR_5;

    VAR_2 = FUNC_3(5, 11, VAR_1, 1, 1);
    VAR_5 = FUNC_5(VAR_2);
    FUNC_1(!VAR_5, "ImageList not empty.\n");
    VAR_3 = FUNC_0(7, 13);
    VAR_5 = FUNC_5(VAR_3);
    FUNC_1(VAR_5 > 2, "Tests need an ImageList with more than 2 images\n");


    VAR_4 = FUNC_2(VAR_2, 0, VAR_3, 2, VAR_0);
    FUNC_1(!VAR_4, "ImageList_Copy() should have returned FALSE\n");
    VAR_5 = FUNC_5(VAR_2);
    FUNC_1(VAR_5 == 0, "Expected no image in dst ImageList, got %d\n", VAR_5);

    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
}
