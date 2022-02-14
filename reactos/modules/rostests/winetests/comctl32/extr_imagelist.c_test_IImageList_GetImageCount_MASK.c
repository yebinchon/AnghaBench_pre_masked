
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IImageList ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    IImageList *VAR_2;
    HIMAGELIST VAR_3;
    int VAR_4;
    HRESULT VAR_5;

    VAR_3 = FUNC_3(16, 16, VAR_0, 0, 3);
    VAR_2 = (IImageList*)VAR_3;

if (0)
{

    FUNC_0(VAR_2, ((void*)0));
}

    VAR_4 = -1;
    VAR_5 = FUNC_0(VAR_2, &VAR_4);
    FUNC_2(VAR_5 == VAR_1, "got 0x%08x\n", VAR_5);
    FUNC_2(VAR_4 == 0, "got %d\n", VAR_4);

    FUNC_1(VAR_2);
}
