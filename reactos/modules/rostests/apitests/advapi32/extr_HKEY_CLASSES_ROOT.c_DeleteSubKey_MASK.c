
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static
LONG
FUNC_4(HKEY VAR_2, LPWSTR VAR_3, LPWSTR VAR_4)
{
    HKEY VAR_5;
    LONG VAR_6;

    VAR_6 = FUNC_2(
        VAR_2,
        VAR_3,
        0,
        VAR_1,
        &VAR_5);
    FUNC_3(VAR_6, VAR_0);
    VAR_6 = FUNC_1(VAR_5, VAR_4);
    FUNC_0(VAR_5);

    return VAR_6;
}
