
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBackgroundCopyManager ;
typedef int IBackgroundCopyJobHttpOptions ;
typedef int IBackgroundCopyJob ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int *,int **) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static BOOL FUNC_7(void)
{
    HRESULT VAR_10;
    IBackgroundCopyManager *VAR_11;
    IBackgroundCopyJob *VAR_12;
    IBackgroundCopyJobHttpOptions *VAR_13;

    VAR_10 = FUNC_0(&VAR_1, ((void*)0),
                            VAR_0, &VAR_4,
                            (void **)&VAR_11);
    if (VAR_10 != VAR_5) return VAR_2;

    VAR_10 = FUNC_5(VAR_11, VAR_7, VAR_9, &VAR_8, &VAR_12);
    if (VAR_10 != VAR_5)
    {
        FUNC_6(VAR_11);
        return VAR_2;
    }

    VAR_10 = FUNC_3(VAR_12, &VAR_3, (void **)&VAR_13);
    FUNC_2(VAR_12);
    FUNC_4(VAR_12);
    if (VAR_10 != VAR_5)
    {
        FUNC_6(VAR_11);
        return VAR_2;
    }

    FUNC_1(VAR_13);
    FUNC_6(VAR_11);
    return VAR_6;
}
