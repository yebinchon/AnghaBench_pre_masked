
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int **) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    HRESULT VAR_12;

    VAR_10 = ((void*)0);
    VAR_8 = ((void*)0);
    FUNC_3(&VAR_9, 0, sizeof VAR_9);
    VAR_11 = VAR_0;

    VAR_12 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1,
                            &VAR_4,
                            (void **) &VAR_10);
    if(VAR_12 != VAR_5)
        return VAR_3;

    VAR_12 = FUNC_1(VAR_10, VAR_7,
                                            VAR_11, &VAR_9, &VAR_8);
    if(VAR_12 != VAR_5)
    {
        FUNC_2(VAR_10);
        return VAR_3;
    }

    return VAR_6;
}
