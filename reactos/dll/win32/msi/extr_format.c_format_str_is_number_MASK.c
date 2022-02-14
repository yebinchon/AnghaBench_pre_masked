
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(LPWSTR VAR_2)
{
    LPWSTR VAR_3;

    for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
        if (!FUNC_0(*VAR_3))
            return VAR_0;

    return VAR_1;
}
