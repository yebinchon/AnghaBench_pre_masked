
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IImageList ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;
typedef scalar_t__ HICON ;


 scalar_t__ FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,scalar_t__,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ FUNC_6 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    IImageList *VAR_5;
    HIMAGELIST VAR_6;
    HRESULT VAR_7;

    HICON VAR_8;
    HICON VAR_9;
    HICON VAR_10;

    int VAR_11;


    VAR_6 = FUNC_6(84, 84, VAR_1, 0, 3);
    FUNC_5(VAR_6 != 0,"failed to create imagelist\n");

    VAR_5 = (IImageList *) VAR_6;


    VAR_8 = FUNC_0(VAR_3, 32, 32, 1, 1, VAR_4, VAR_4);
    FUNC_5(VAR_8 != 0, "no hicon1\n");
    VAR_9 = FUNC_0(VAR_3, 32, 32, 1, 1, VAR_4, VAR_4);
    FUNC_5(VAR_9 != 0, "no hicon2\n");
    VAR_10 = FUNC_0(VAR_3, 32, 32, 1, 1, VAR_4, VAR_4);
    FUNC_5(VAR_10 != 0, "no hicon3\n");


    VAR_7 = FUNC_3(VAR_5, 0);
    FUNC_5(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);


    VAR_7 = FUNC_3(VAR_5, -1);
    FUNC_5(VAR_7 == VAR_2, "removed nonexistent icon\n");


    VAR_11 = -1;
    FUNC_5( FUNC_4(VAR_5, -1, VAR_8, &VAR_11) == VAR_2 && (VAR_11 == 0),"failed to add icon1\n");
    VAR_11 = -1;
    FUNC_5( FUNC_4(VAR_5, -1, VAR_9, &VAR_11) == VAR_2 && (VAR_11 == 1),"failed to add icon2\n");
    VAR_11 = -1;
    FUNC_5( FUNC_4(VAR_5, -1, VAR_10, &VAR_11) == VAR_2 && (VAR_11 == 2),"failed to add icon3\n");


    FUNC_5( FUNC_3(VAR_5, 4711) == VAR_0, "got 0x%08x\n", VAR_7);


    FUNC_5( FUNC_3(VAR_5,0) == VAR_2, "can't remove 0\n");
    FUNC_5( FUNC_3(VAR_5,0) == VAR_2, "can't remove 0\n");
    FUNC_5( FUNC_3(VAR_5,0) == VAR_2, "can't remove 0\n");


    FUNC_5( FUNC_3(VAR_5, 0) == VAR_0, "got 0x%08x\n", VAR_7);

    FUNC_2(VAR_5);
    FUNC_5(FUNC_1(VAR_8),"icon 1 wasn't deleted\n");
    FUNC_5(FUNC_1(VAR_9),"icon 2 wasn't deleted\n");
    FUNC_5(FUNC_1(VAR_10),"icon 3 wasn't deleted\n");
}
