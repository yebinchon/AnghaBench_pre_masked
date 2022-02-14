
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HIMAGELIST ;
typedef int HBITMAP ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void FUNC_6(HIMAGELIST VAR_1, BYTE VAR_2, int VAR_3)
{
    char VAR_4[16];
    HBITMAP VAR_5;
    int VAR_6;

    FUNC_5(VAR_4, "%d", VAR_3);
    VAR_5 = FUNC_2(VAR_0, VAR_0, FUNC_1(VAR_2, VAR_2, VAR_2), VAR_4);
    VAR_6 = FUNC_4(VAR_1, VAR_5, ((void*)0));
    FUNC_3(VAR_6 != -1, "Failed to add image to imagelist.\n");
    FUNC_0(VAR_5);
}
