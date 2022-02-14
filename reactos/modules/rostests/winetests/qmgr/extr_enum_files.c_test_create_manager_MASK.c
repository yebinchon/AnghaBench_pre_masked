
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static HRESULT FUNC_7(void)
{
    HRESULT VAR_9;
    IBackgroundCopyManager *VAR_10 = ((void*)0);


    VAR_9 = FUNC_0(&VAR_2, ((void*)0), VAR_1,
                            &VAR_4, (void **) &VAR_10);

    if(VAR_9 == FUNC_1(VAR_3)) {
        FUNC_6("Needed Service is disabled\n");
        return VAR_9;
    }

    if (VAR_9 == VAR_5)
    {
        IBackgroundCopyJob *VAR_11;
        GUID VAR_12;

        VAR_9 = FUNC_3(VAR_10, VAR_6, VAR_0, &VAR_12, &VAR_11);
        if (VAR_9 == VAR_5)
        {
            VAR_9 = FUNC_5(VAR_11, VAR_7, VAR_8);
            if (VAR_9 != VAR_5)
                FUNC_6("AddFile() with file:// protocol failed. Tests will be skipped.\n");
            FUNC_2(VAR_11);
        }
        FUNC_4(VAR_10);
    }

    return VAR_9;
}
