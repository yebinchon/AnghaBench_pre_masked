
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * REFIID ;
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
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static HRESULT FUNC_1(REFIID VAR_12, void **VAR_13)
{
    *VAR_13 = ((void*)0);

    if(FUNC_0(&VAR_8, VAR_12) || FUNC_0(&VAR_3, VAR_12))
        *VAR_13 = &VAR_0;
    else if(FUNC_0(&VAR_4, VAR_12))
        *VAR_13 = &VAR_1;
    else if(FUNC_0(&VAR_6, VAR_12) || FUNC_0(&VAR_5, VAR_12))
        *VAR_13 = &VAR_9;
    else if(FUNC_0(VAR_12, &VAR_7))
        *VAR_13 = &VAR_11;

    return *VAR_13 ? VAR_10 : VAR_2;
}
