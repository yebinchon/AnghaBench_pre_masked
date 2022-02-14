
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
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_1(REFIID VAR_8, void **VAR_9)
{
    if(FUNC_0(&VAR_5, VAR_8)) {
        *VAR_9 = &VAR_7;
        return VAR_6;
    }

    if(FUNC_0(&VAR_4, VAR_8)) {
        *VAR_9 = &VAR_1;
        return VAR_6;
    }

    if(FUNC_0(&VAR_3, VAR_8)) {
        *VAR_9 = &VAR_0;
        return VAR_6;
    }

    *VAR_9 = ((void*)0);
    return VAR_2;
}
