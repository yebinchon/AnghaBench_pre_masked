
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(REFIID VAR_35, void **VAR_36)
{
    *VAR_36 = ((void*)0);

    if(FUNC_0(&VAR_23, VAR_35) || FUNC_0(&VAR_10, VAR_35))
        *VAR_36 = &VAR_0;
    else if(FUNC_0(&VAR_14, VAR_35))
        *VAR_36 = &VAR_3;
    else if(FUNC_0(&VAR_7, VAR_35) || FUNC_0(&VAR_8, VAR_35))
        *VAR_36 = &VAR_2;
    else if(FUNC_0(&VAR_12, VAR_35))
        *VAR_36 = &VAR_29;
    else if(FUNC_0(&VAR_18, VAR_35) || FUNC_0(&VAR_15, VAR_35))
        *VAR_36 = &VAR_27;
    else if(FUNC_0(&VAR_11 , VAR_35))
        *VAR_36 = &VAR_28;
    else if(FUNC_0(&VAR_5, VAR_35))
        *VAR_36 = &VAR_1;
    else if(FUNC_0(&VAR_21, VAR_35))
        *VAR_36 = &VAR_32;
    else if(FUNC_0(&VAR_16, VAR_35))
        *VAR_36 = VAR_33 ? &VAR_27 : ((void*)0);
    else if(FUNC_0(&VAR_17, VAR_35))
        *VAR_36 = VAR_34 ? &VAR_27 : ((void*)0);
    else if(FUNC_0(&VAR_13, VAR_35))
        *VAR_36 = &VAR_30;
    else if(FUNC_0(&VAR_6, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_19, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_24, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_22, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_20, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_25, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_26, VAR_35))
        return VAR_4;
    else if(FUNC_0(&VAR_9, VAR_35))
        return VAR_4;
    else
        FUNC_1("QI(%s)\n", FUNC_2(VAR_35));

    if(*VAR_36)
        return VAR_31;
    return VAR_4;
}
