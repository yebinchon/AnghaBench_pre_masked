
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
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    HRESULT VAR_17;

    VAR_16 = ((void*)0);
    VAR_11 = ((void*)0);
    VAR_12 = ((void*)0);
    FUNC_4(&VAR_14, 0, sizeof VAR_14);
    FUNC_4(&VAR_15, 0, sizeof VAR_15);

    VAR_17 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1, &VAR_4,
                            (void **) &VAR_16);
    if(VAR_17 != VAR_5)
        return VAR_3;

    VAR_17 = FUNC_1(VAR_16, VAR_7,
                                            VAR_0, &VAR_14,
                                            &VAR_11);
    if(VAR_17 != VAR_5)
        return VAR_3;

    VAR_17 = FUNC_2(VAR_16, 0, &VAR_9);
    if(VAR_17 != VAR_5)
        return VAR_3;

    VAR_17 = FUNC_1(VAR_16, VAR_8,
                                            VAR_0, &VAR_15,
                                            &VAR_12);
    if(VAR_17 != VAR_5)
        return VAR_3;

    VAR_17 = FUNC_2(VAR_16, 0, &VAR_10);
    if(VAR_17 != VAR_5)
        return VAR_3;

    VAR_17 = FUNC_3(VAR_10, &VAR_13);
    if (VAR_17 != VAR_5)
        return VAR_3;

    return VAR_6;
}
