
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IEnumBackgroundCopyJobs ;
typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{

    IEnumBackgroundCopyJobs* VAR_5;

    static const WCHAR VAR_6[] = {'T', 'e', 's', 't', 0};
    IBackgroundCopyManager *VAR_7 = ((void*)0);
    IBackgroundCopyJob *VAR_8 = ((void*)0);
    HRESULT VAR_9;
    GUID VAR_10;


    VAR_9 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1, &VAR_3,
                            (void **) &VAR_7);
    FUNC_6(VAR_9 == VAR_4, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_7, VAR_6,
                                            VAR_0, &VAR_10,
                                            &VAR_8);
    FUNC_6(VAR_9 == VAR_4, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_7, 0, &VAR_5);
    FUNC_6(VAR_9 == VAR_4, "EnumJobs failed: %08x\n", VAR_9);
    FUNC_5(VAR_5);


    FUNC_1(VAR_8);
    FUNC_4(VAR_7);
}
