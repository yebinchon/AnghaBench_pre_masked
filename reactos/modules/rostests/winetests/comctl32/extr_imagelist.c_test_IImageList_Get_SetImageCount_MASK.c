
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int IImageList ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    IImageList *VAR_2;
    HIMAGELIST VAR_3;
    HRESULT VAR_4;
    INT VAR_5;


    VAR_3 = FUNC_4(84, 84, VAR_0, 0, 3);
    FUNC_3(VAR_3 != 0,"failed to create imagelist\n");

    VAR_2 = (IImageList *) VAR_3;


    VAR_4 = FUNC_2(VAR_2, 3);
    FUNC_3(VAR_4 == VAR_1, "got 0x%08x\n", VAR_4);
    VAR_5 = 0;
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1 && VAR_5 == 3, "invalid image count after increase\n");
    VAR_4 = FUNC_2(VAR_2, 1);
    FUNC_3(VAR_4 == VAR_1, "got 0x%08x\n", VAR_4);
    VAR_5 = 0;
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1 && VAR_5 == 1, "invalid image count after decrease to 1\n");
    VAR_4 = FUNC_2(VAR_2, 0);
    FUNC_3(VAR_4 == VAR_1, "got 0x%08x\n", VAR_4);
    VAR_5 = -1;
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1 && VAR_5 == 0, "invalid image count after decrease to 0\n");

    FUNC_1(VAR_2);
}
