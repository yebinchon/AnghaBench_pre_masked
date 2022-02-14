
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{

    static const WCHAR VAR_5[] = {'T', 'e', 's', 't', 0};
    IBackgroundCopyJob* VAR_6 = ((void*)0);
    GUID VAR_7;
    HRESULT VAR_8;
    ULONG VAR_9;
    IBackgroundCopyManager* VAR_10 = ((void*)0);


    VAR_8 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1, &VAR_3,
                            (void **) &VAR_10);
    FUNC_4(VAR_8 == VAR_4, "got 0x%08x\n", VAR_8);


    VAR_8 = FUNC_2(VAR_10, VAR_5,
                                            VAR_0, &VAR_7,
                                            &VAR_6);
    FUNC_4(VAR_8 == VAR_4, "CreateJob failed: %08x\n", VAR_8);

    VAR_9 = FUNC_1(VAR_6);
    FUNC_4(VAR_9 == 0, "Bad ref count on release: %u\n", VAR_9);
    FUNC_3(VAR_10);
}
