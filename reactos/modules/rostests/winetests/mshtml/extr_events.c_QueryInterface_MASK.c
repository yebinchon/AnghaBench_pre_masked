
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
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_1(REFIID VAR_10, void **VAR_11)
{
    *VAR_11 = ((void*)0);

    if(FUNC_0(&VAR_7, VAR_10) || FUNC_0(&VAR_3, VAR_10))
        *VAR_11 = &VAR_0;
    else if(FUNC_0(&VAR_4, VAR_10))
        *VAR_11 = &VAR_1;
    else if(FUNC_0(&VAR_6, VAR_10) || FUNC_0(&VAR_5, VAR_10))
        *VAR_11 = &VAR_8;

    return *VAR_11 ? VAR_9 : VAR_2;
}
