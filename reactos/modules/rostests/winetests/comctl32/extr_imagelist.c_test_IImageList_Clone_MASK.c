
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IImageList ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    IImageList *VAR_3, *VAR_4;
    HIMAGELIST VAR_5;
    HRESULT VAR_6;
    ULONG VAR_7;

    VAR_5 = FUNC_3(16, 16, VAR_1, 0, 3);
    VAR_3 = (IImageList*)VAR_5;

if (0)
{

    FUNC_0(VAR_3, &VAR_0, ((void*)0));
}

    VAR_6 = FUNC_0(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_2(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);
    VAR_7 = FUNC_1(VAR_4);
    FUNC_2(VAR_7 == 0, "got %u\n", VAR_7);

    FUNC_1(VAR_3);
}
