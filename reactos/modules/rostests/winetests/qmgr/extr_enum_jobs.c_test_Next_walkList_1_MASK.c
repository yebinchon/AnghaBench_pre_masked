
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int,int **,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_4;
    IBackgroundCopyJob *VAR_5;
    ULONG VAR_6;
    ULONG VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        VAR_6 = 0;
        VAR_4 = FUNC_1(VAR_2, 1, &VAR_5, &VAR_6);
        FUNC_2(VAR_4 == VAR_1, "Next failed: %08x\n", VAR_4);
        FUNC_2(VAR_6 == 1, "Next returned the incorrect number of jobs: %08x\n", VAR_4);
        FUNC_0(VAR_5);
    }


    VAR_6 = 0;
    VAR_4 = FUNC_1(VAR_2, 1, &VAR_5, &VAR_6);
    FUNC_2(VAR_4 == VAR_0, "Next off end of available jobs failed: %08x\n", VAR_4);
    FUNC_2(VAR_6 == 0, "Next returned the incorrect number of jobs: %08x\n", VAR_4);
}
