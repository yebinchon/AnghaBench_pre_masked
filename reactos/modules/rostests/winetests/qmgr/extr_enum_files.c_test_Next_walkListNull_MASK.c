
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IBackgroundCopyFile ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int,int **,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_4;
    IBackgroundCopyFile *VAR_5;
    ULONG VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
        VAR_4 = FUNC_1(VAR_2, 1, &VAR_5, ((void*)0));
        FUNC_2(VAR_4 == VAR_1, "Next failed: %08x\n", VAR_4);
        FUNC_0(VAR_5);
    }


    VAR_4 = FUNC_1(VAR_2, 1, &VAR_5, ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "Next off end of available files failed: %08x\n", VAR_4);
}
