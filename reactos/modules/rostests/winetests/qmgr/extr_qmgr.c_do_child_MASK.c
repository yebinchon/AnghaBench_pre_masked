
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(const char *VAR_7)
{
    WCHAR VAR_8[VAR_5];
    IBackgroundCopyManager *VAR_9 = ((void*)0);
    GUID VAR_10;
    IBackgroundCopyJob *VAR_11;
    HRESULT VAR_12;
    VAR_12 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1, &VAR_4,
                            (void **) &VAR_9);
    FUNC_5(VAR_12 == VAR_6, "got 0x%08x\n", VAR_12);

    FUNC_4(VAR_3, 0, VAR_7, -1, VAR_8, VAR_5);
    VAR_12 = FUNC_2(VAR_9, VAR_8,
                                            VAR_0, &VAR_10, &VAR_11);
    FUNC_5(VAR_12 == VAR_6, "CreateJob in child process\n");
    FUNC_1(VAR_11);
    FUNC_3(VAR_9);
}
