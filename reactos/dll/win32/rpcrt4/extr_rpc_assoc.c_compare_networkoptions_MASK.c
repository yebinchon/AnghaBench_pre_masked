
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_2, LPCWSTR VAR_3)
{
    if ((VAR_2 == ((void*)0)) && (VAR_3 == ((void*)0)))
        return VAR_1;
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return VAR_0;
    return !FUNC_0(VAR_2, VAR_3);
}
