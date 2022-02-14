
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    HRESULT VAR_15;
    GUID VAR_16;

    VAR_15 = FUNC_0(&VAR_2, ((void*)0),
                            VAR_1, &VAR_4,
                            (void **) &VAR_12);
    if(VAR_15 != VAR_5)
        return VAR_3;

    VAR_15 = FUNC_3(VAR_12, VAR_7,
                                            VAR_0, &VAR_16,
                                            &VAR_9);
    if(VAR_15 != VAR_5)
    {
        FUNC_4(VAR_12);
        return VAR_3;
    }

    if (FUNC_5(VAR_9, VAR_10, VAR_13) != VAR_5
        || FUNC_5(VAR_9, VAR_11, VAR_14) != VAR_5
        || FUNC_1(VAR_9, &VAR_8) != VAR_5)
    {
        FUNC_2(VAR_9);
        FUNC_4(VAR_12);
        return VAR_3;
    }

    return VAR_6;
}
