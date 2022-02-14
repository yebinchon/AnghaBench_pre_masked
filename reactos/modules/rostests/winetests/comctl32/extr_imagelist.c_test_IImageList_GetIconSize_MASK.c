
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IImageList ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    IImageList *VAR_2;
    HIMAGELIST VAR_3;
    int VAR_4, VAR_5;
    HRESULT VAR_6;

    VAR_3 = FUNC_3(16, 16, VAR_1, 0, 3);
    VAR_2 = (IImageList*)VAR_3;

    VAR_6 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
    FUNC_2(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_0(VAR_2, &VAR_4, ((void*)0));
    FUNC_2(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_0(VAR_2, ((void*)0), &VAR_5);
    FUNC_2(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    FUNC_1(VAR_2);
}
