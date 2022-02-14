
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 () ;
 int ** FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int,int **,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_3;
    IBackgroundCopyJob **VAR_4;
    ULONG VAR_5;
    ULONG VAR_6;

    VAR_4 = FUNC_1(FUNC_0(), 0, VAR_2 * sizeof *VAR_4);
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        VAR_4[VAR_6] = ((void*)0);

    VAR_5 = 0;
    VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_4, &VAR_5);
    FUNC_5(VAR_3 == VAR_0, "Next failed: %08x\n", VAR_3);
    FUNC_5(VAR_5 == VAR_2, "Next returned the incorrect number of jobs: %08x\n", VAR_3);

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
        FUNC_5(VAR_4[VAR_6] != ((void*)0), "Next returned NULL\n");
        if (VAR_4[VAR_6])
            FUNC_3(VAR_4[VAR_6]);
    }

    FUNC_2(FUNC_0(), 0, VAR_4);
}
