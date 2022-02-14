
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HIMAGELIST ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HIMAGELIST VAR_1;

    FUNC_0(0 == FUNC_3((HIMAGELIST)0xdeadbeef), "don't crash on bad handle\n");

    if (!&FUNC_4)
    {
        FUNC_5("ImageList_SetImageCount not available\n");
        return;
    }

    VAR_1 = FUNC_1(84, 84, VAR_0, 0, 3);
    FUNC_0(VAR_1 != 0, "Failed to create imagelist.\n");

    FUNC_0(FUNC_4(VAR_1, 3), "couldn't increase image count\n");
    FUNC_0(FUNC_3(VAR_1) == 3, "invalid image count after increase\n");
    FUNC_0(FUNC_4(VAR_1, 1), "couldn't decrease image count\n");
    FUNC_0(FUNC_3(VAR_1) == 1, "invalid image count after decrease to 1\n");
    FUNC_0(FUNC_4(VAR_1, 0), "couldn't decrease image count\n");
    FUNC_0(FUNC_3(VAR_1) == 0, "invalid image count after decrease to 0\n");

    FUNC_0(FUNC_2(VAR_1), "Failed to destroy imagelist.\n");
}
