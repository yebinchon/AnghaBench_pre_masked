
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int IBackgroundCopyFile ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,size_t,int **,size_t*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_4;
    IBackgroundCopyFile *VAR_5[VAR_0];
    ULONG VAR_6;
    ULONG VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
        VAR_5[VAR_7] = ((void*)0);

    VAR_6 = 0;
    VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_6);
    FUNC_2(VAR_4 == VAR_1, "Next failed: %08x\n", VAR_4);
    FUNC_2(VAR_6 == VAR_3, "Next returned the incorrect number of files: %08x\n", VAR_4);

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        FUNC_2(VAR_5[VAR_7] != ((void*)0), "Next returned NULL\n");
        if (VAR_5[VAR_7])
            FUNC_0(VAR_5[VAR_7]);
    }
}
